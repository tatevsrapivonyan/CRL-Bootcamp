#include <iostream>
#include <vector>

int binary_search(const std::vector<int>& vec, int key)
{
	size_t low = 0;
	size_t high = vec.size();

	while (low < high)
	{
		size_t mid = low + (high - low) / 2;

		if (vec[mid] == key)
		{
			return mid;
		}
		if (vec[mid] > key)
		{
			high = mid;
		}
		if (vec[mid] < key)
		{
			low = mid + 1;
		}
	}
	return -1;
}
