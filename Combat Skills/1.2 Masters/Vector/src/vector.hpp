#pragma once

#include <iostream>
#include <initializer_list>

class vector
{
public:
	vector();
	vector(size_t);
	vector(const std::initializer_list&);
	vector(const vector&);
	vector(vector&&);
	vector& operator=(const vector&);
	vector& operator=(vector&&);
	~vector();

public:
	vector& operator[](size_t);
	const vector operator[](size_t) const;
	vector& at(size_t);
	const vector at(size_t) const;
	size_t get_size() const;
	void set_size(size_t);
	size_t get_capacity() const;
	void set_capacity(size_t);
	bool is_empty() const;
	void push_back(int);
	void insert(int, int);
	void pop_back();
	void erase(int);
	void clear();
	void resize(size_t);
	void reserve(size_t);

private:
	int* m_array;
	size_t m_capacity;
	size_t m_size;
};