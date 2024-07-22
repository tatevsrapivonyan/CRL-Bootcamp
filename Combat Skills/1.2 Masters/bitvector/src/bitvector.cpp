#include "bitvector.hpp"

static void my_swap(bitvector& first, bitvector& second) noexcept
{
	first.swap(second);
}

bitvector::bitvector()
	: m_size{ 0 }
	, m_array{ nullptr }
{
}

bitvector::bitvector(size_t size)
	: m_size{ size / BIT + (size % BIT == 0 ? 0 : 1) }
	, m_array { new std::byte[m_size] }
{
}

bitvector::bitvector(const bitvector& bv)
{
	m_size = bv.m_size;
	m_array = new std::byte[m_size];

	for (size_t i = 0; i < m_size; ++i)
	{
		m_array[i] = bv.m_array[i];
	}
}

bitvector& bitvector::operator=(const bitvector& bv)
{
	bitvector temp(bv);
	swap(temp);
	return *this;
}

bitvector::bitvector(bitvector&& bv) noexcept
	:bitvector()
{
	my_swap(*this, bv);
}

bitvector& bitvector::operator=(bitvector&& bv) noexcept
{
	my_swap(*this, bv);
	return *this;
}

bitvector::~bitvector()
{
	delete[] m_array;
	m_array = nullptr;
}

void bitvector::set(size_t index)
{
	index_check(index);
	std::byte mask = std::byte(0b1) << (BIT - index % BIT- 1);
	m_array[index / sizeof(std::byte)] = m_array[index / sizeof(std::byte)] | mask;
}

void bitvector::reset(size_t index)
{
	index_check(index);
	std::byte mask = std::byte(0b1) << (BIT - index % BIT- 1);
	m_array[index / sizeof(std::byte)] = m_array[index / sizeof(std::byte)] & mask;
}

void bitvector::resetall()
{

}

void bitvector::setall()
{

}

void bitvector::toggle(size_t index)
{
	index_check(index);
	std::byte mask = std::byte(0b1) << (BIT - index % BIT- 1);
	m_array[index / sizeof(std::byte)] = m_array[index / sizeof(std::byte)] ^ mask;
}

unsigned int bitvector::get_bit(size_t index)
{
}

bool bitvector::is_set(size_t index)
{
}

bool bitvector::is_reset(size_t index)
{
}

size_t bitvector::count_sets()
{
}

size_t bitvector::count_resets()
{
}

size_t bitvector::first_set()
{
}

size_t bitvector::last_set()
{
}

void bitvector::swap(bitvector& bv) noexcept
{
	std::swap(m_size, bv.m_size);
	std::swap(m_array, bv.m_array);
}

void bitvector::index_check(size_t index)
{
	if (index > m_size)
	{
		throw std::out_of_range("Index is out of range!");
	}
}
