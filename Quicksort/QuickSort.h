#pragma once
#include "stack"

namespace MySort
{
	using namespace std;

	template<typename T, typename C>
	size_t Partition(T* _data, size_t _length, const C _compare)
	{
		if (_data == nullptr || _length < 2)
			return _length;

		size_t left, right;
		left = 0;
		right = _length - 1;
		T pivot = _data[left];

		while(left < right)
		{
			for (; left < right; --right)
			{
				if (_compare(_data[right], pivot))
				{
					_data[left] = _data[right];
					++left;
					break;
				}
			}

			for (; left < right; ++left)
			{
				if (_compare(pivot, _data[left]))
				{
					_data[right] = _data[left];
					--right;
					break;
				}
			}
		}
		_data[left] = pivot;

		return left;
	}

	template<typename T, typename C>
	void QuickSort(T* _data, size_t _length, const C _compare)
	{
		if (_data == nullptr || _length < 2)
			return;

		size_t p = Partition(_data, _length, compare);

		if (p >= _length)
			return;

		size_t leftLength = p;
		size_t rightLength = _length - 1 - p;
		if (leftLength > 1) QuickSort(_data, leftLength, compare);
		if (rightLength > 1) QuickSort(_data + p + 1, rightLength, compare);
	}
}
