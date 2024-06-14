#include "vector.hpp"

vector::vector()
	: m_capacity{ 1 }
	, m_size{ m_capacity }
	, m_array{ nullptr }
{
}

vector::vector(size_t size)
	: m_capacity{ size }
	, m_size{ size }
	, m_array {new int[m_capacity]}
{
}

vector::vector(const vector& vec)
	: m_capacity{ vec.get_capacity() }
	, m_size{ vec.get_size() }
	, m_array{ new int[m_capacity] }
{
	for (size_t i = 0; i < m_size; ++i)
	{
		m_array[i] = vec.m_array[i];
	}
}