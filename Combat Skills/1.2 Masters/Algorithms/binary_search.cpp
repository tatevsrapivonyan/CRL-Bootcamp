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

int bs_recursive(const std::vector<int> vec, int key, size_t low, size_t high)
{
	if (low < high)
	{
		size_t mid = low + (high - low) / 2;

		if (vec[mid] == key)
		{
			return mid;
		}
		if (vec[mid] > key)
		{
			return bs_recursive(vec, key, low, mid);
		}
		if (vec[mid] < key)
		{
			return bs_recursive(vec, key, mid + 1, high);
		}
	}
	return -1;
}