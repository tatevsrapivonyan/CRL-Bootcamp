#pragma once

class bitvector
{
public:
	bitvector();
	bitvector(size_t);
	bitvector(const bitvector&);
	bitvector& operator=(const bitvector&);
	bitvector(bitvector&&) noexcept;
	bitvector& operator=(bitvector&&) noexcept;
	~bitvector();

public:
	void set(size_t);
	void reset(size_t);
	void resetall();
	void setall();
	void toggle(size_t);
	unsigned int get_bit(size_t);
	bool is_set(size_t);
	bool is_reset(size_t);
	size_t count_sets();
	size_t count_resets();
	size_t first_set();
	size_t last_set();

private:
	size_t m_size;
	unsigned int* m_array;
};