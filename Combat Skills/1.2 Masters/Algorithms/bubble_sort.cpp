#include <iostream>
#include <vector>
#include <utility>

void bubble_sort(std::vector<int>& vec)
{
	bool swapped = false;

	for (size_t i = 1; i < vec.size(); ++i)
	{
		for (size_t j = 0; j < vec.size() - i; ++j)
		{
			if (vec[j] > vec[j + 1])
			{
				std::swap(vec[j], vec[j + 1]);
				swapepd = true;
			}
		}

		if (!swapped)
		{
			break;
		}
	}
}