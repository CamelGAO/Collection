#pragma once

#include"vector"

namespace MySort
{
	using namespace std;

	template<typename T, typename C>
	void StraightInsertionSort(vector<typename T>& _data, const C _compare)
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

	template<typename T, typename C>
	void StraightInsertionSort(T* _data, const size_t _length, const C _compare)
	{
		if (_length < 2 || _data == nullptr)
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



