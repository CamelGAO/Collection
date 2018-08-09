#pragma once

#include"vector"

namespace MySort
{
	using namespace std;

	template<typename T, typename C>
	void StraightInsertionSort(vector<typename T>& _data, C _compare)
	{
		size_t _length = _data.size();

		if (_length < 2)
			return;

		for (size_t i = 1; i < _length; ++i)
		{
			for (size_t j = 0; j < i; ++j)
			{
				if (_compare(_data[j], _data[i]))
					continue;

				T temp = _data[i];
				for (size_t k = i; k > j; --k)
					_data[k] = _data[k - 1];
				_data[j] = temp;

				break;
			}
		}

	}
}



