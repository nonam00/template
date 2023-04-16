#include <iostream>
#include <algorithm>
#include <vector>

template <typename T>
T Min(std::vector<T>temp) { return *min_element(temp.begin(), temp.end()); }

template <typename T>
T Max(std::vector<T>temp) { return *max_element(temp.begin(), temp.end()); }

template <typename T>
void Sort(std::vector<T>& temp) { sort(temp.begin(), temp.end()); }

template <typename T>
int BinarySearch(std::vector<T>& temp, T key)
{
	int n = temp.size()/2;
	while (true)
	{
		if (temp[n] > key)
			n = n/2;
		else if (temp[n] < key)
			n += n/2;
		else if (temp[n] == key)
			return n;
		else return -1;
	}
}
int main()
{
	std::vector<double>vec{ 1,3,7,5,2 };
	std::cout << Min(vec) << std::endl;
	std::cout << Max(vec) << std::endl;
	Sort(vec);
	std::for_each(vec.begin(), vec.end(), [](auto item) {std::cout << item << " "; });
	std::cout << std::endl;
	std::cout << BinarySearch(vec, 5.0);

	return 0;
}