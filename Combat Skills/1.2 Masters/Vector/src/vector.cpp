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

const size_t vector::capacity() const
{
	return m_capacity;
}

const size_t vector::size() const
{
	return m_size;
}

int& vector::operator[](size_t index)
{
	index_check(index);
	return m_array[index];
}

const int& vector::operator[](size_t index) const
{
	index_check(index);
	return m_array[index];
}

int& vector::at(size_t index)
{
	index_check(index);
	return m_array[index];
}

const int& vector::at(size_t index) const
{
	index_check(index);
	return m_array[index];
}

bool vector::is_empty() const
{
	if (m_size == 0)
	{
		return true;
	}
	return false;
}

void vector::copy(const vector& vec)
{
	for (size_t i = 0; i < this->m_size; ++i)
	{
		this->m_array[i] = vec.m_array[i];
	}
}

void vector::index_check(size_t index) const
{
	if (index >= m_size)
	{
		throw std::out_of_range("Index is out of range.");
	}
}