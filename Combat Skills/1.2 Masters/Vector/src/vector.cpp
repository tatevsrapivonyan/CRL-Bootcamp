#include "vector.hpp"
#include <utility>

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
	: m_capacity{ vec.m_capacity }
	, m_size{ vec.m_size }
	, m_array{ new int m_capacity }
{
	copy(vec);
}

vector::vector(vector&& vec) noexcept
	:vector()
{
	swap(*this, vec);
}

vector& vector::operator=(vector&& vec) noexcept
{
	swap(*this, vec);
	return *this;
}

vector& vector::operator=(const vector& vec)
{
	vector temp(vec);
	swap(temp);
	return *this;
}

vector::~vector()
{
	clear();
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

void vector::resize(size_t new_size)
{
	if (new_size > m_capacity)
	{
		m_capacity = new_size * 2;
		int* new_array = new int[m_capacity];

		for (size_t i = 0; i < m_size; ++i)
		{
			new_array[i] = m_array[i];
		}

		delete[] m_array;
		m_array = new_array;
	}
	m_size = new_size;
}

void vector::push_back(int new_item)
{
	if (m_size >= m_capacity)
	{
		resize(m_size);
	}
	m_array[m_size++] = new_item;
}

void vector::pop_back()
{
	--m_size;
}

void vector::clear() noexcept
{
	delete[] m_array;
	m_array = nullptr;
	m_size = m_capacity = 0;
}

void vector::insert(int index, int item)
{
	index_check(index);

	if (m_size >= m_capacity)
	{
		resize(m_size + 1);
	}
	
	for (size_t i = m_size; i > index; --i)
	{
		m_array[i] = m_array[i - 1];
	}
	m_array[index] = item;
	++m_size;
}

void vector::copy(const vector& vec)
{
	for (size_t i = 0; i < this->m_size; ++i)
	{
		this->m_array[i] = vec.m_array[i];
	}
}

void vector::move(vector&& vec) noexcept
{
	m_capacity = std::exchange(vec.m_capacity, 0);
	m_size = std::exchange(vec.m_size, 0);
	m_array = std::exchange(vec.m_array, nullptr);
}

void vector::swap(vector& vec) noexcept
{
	std::swap(m_capacity, vec.m_capacity);
	std::swap(m_size, vec.m_size);
	std::swap(m_array, vec.m_array);
}

void vector::index_check(size_t index) const
{
	if (index >= m_size)
	{
		throw std::out_of_range("Index is out of range.");
	}
}

void swap(vector& first, vector& secondd) noexcept
{
	first.swap(second);
}