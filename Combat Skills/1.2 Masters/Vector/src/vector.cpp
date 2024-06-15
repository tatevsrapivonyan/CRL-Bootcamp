#include "vector.hpp"

vector::vector()
	: m_capacity{ }
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

vector::vector(const std::initializer_list<int>& lst)
	: m_capacity{ lst.size() }
	, m_size{ lst.size() }
	, m_array{ new int[m_capacity] }
{
	size_t i = 0;
	for (auto l : lst)
	{
		m_array[i] = l;
		++i;
	}
}

vector::vector(const vector& vec)
	: m_capacity{ vec.get_capacity() }
	, m_size{ vec.get_size() }
	, m_array{ new int[m_capacity] }
{
	copy(vec);
}

vector& vector::operator=(const vector& vec)
{
	if (this != &vec)
	{
		delete m_array;

		m_capacity = vec.get_capacity();
		m_size = vec.get_size();
		m_array = new int[m_capacity];

		copy(vec);
	}
	return *this;
}

vector::~vector()
{
	delete m_array;
	m_array = nullptr;
}

const size_t vector::get_capacity() const
{
	return m_capacity;
}

const size_t vector::get_size() const
{
	return m_size;
}

void vector::copy(const vector& vec)
{
	for (size_t i = 0; i < this->m_size; ++i)
	{
		this->m_array[i] = vec.m_array[i];
	}
}