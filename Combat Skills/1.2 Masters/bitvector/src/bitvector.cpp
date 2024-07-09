#include "bitvector.hpp"

bitvector::bitvector()
	: m_size{ 0 }
	, m_array{ nullptr }
{
}

bitvector::bitvector(size_t size)
	: m_size{ size / sizeof(int) + (size % 32 == 0 ? 0 : 1) }
	, m_array {new int[m_size]}
{
}

bitvector::bitvector(const bitvector& bv)
{
	m_size = bv.m_size;
	m_array = new int[m_size];

	for (size_t i = 0; i < m_size; ++i)
	{
		m_array[i] = bv.m_array[i];
	}
}

bitvector& bitvector::operator=(const bitvector& bv)
{
	bitvector temp;
	swap(bv);
	return *this;
}

bitvector::bitvector(bitvector&& bv) noexcept
{
}

bitvector& bitvector::operator=(bitvector&& bv) noexcept
{
}

bitvector::~bitvector()
{
	delete[] m_array;
	m_array = nullptr;
}

void bitvector::set(size_t index)
{
}

void bitvector::reset(size_t index)
{
}

void bitvector::resetall()
{
}

void bitvector::setall()
{
}

void bitvector::toggle(size_t index)
{
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