#include "vector.hpp"

vector::vector()
	: m_array{ nullptr }
	, m_capacity{ 1 }
	, m_size{ m_capacity }
{
}