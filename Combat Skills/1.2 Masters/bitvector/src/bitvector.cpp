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

bitvector& bitvector::operator=(const bitvector&)
{
	// TODO: insert return statement here
}

bitvector::bitvector(bitvector&&) noexcept
{
}

bitvector& bitvector::operator=(bitvector&&) noexcept
{
	// TODO: insert return statement here
}

bitvector::~bitvector()
{
}

void bitvector::set(size_t)
{
}

void bitvector::reset(size_t)
{
}

void bitvector::resetall()
{
}

void bitvector::setall()
{
}

void bitvector::toggle(size_t)
{
}

unsigned int bitvector::get_bit(size_t)
{
	return 0;
}

bool bitvector::is_set(size_t)
{
	return false;
}

bool bitvector::is_reset(size_t)
{
	return false;
}

size_t bitvector::count_sets()
{
	return size_t();
}

size_t bitvector::count_resets()
{
	return size_t();
}

size_t bitvector::first_set()
{
	return size_t();
}

size_t bitvector::last_set()
{
	return size_t();
}