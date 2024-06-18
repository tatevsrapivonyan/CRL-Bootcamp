#ifndef VECTOR_HPP
#define VECTOR_HPP

#include <iostream>
#include <initializer_list>

class vector
{
public:
	vector();
	vector(size_t);
	vector(const std::initializer_list<int>&);
	vector(const vector&);
	vector(vector&&);
	vector& operator=(const vector&);
	vector& operator=(vector&&);
	~vector();

public:
	int& operator[](size_t);
	const int& operator[](size_t) const;
	int& at(size_t);
	const int& at(size_t) const;
	const size_t get_size() const;
	const size_t get_capacity() const;
	bool is_empty() const;
	void push_back(int);
	void insert(int, int);
	void pop_back();
	void erase(int);
	void clear();
	void resize(size_t);
	void reserve(size_t);

private: 
	void copy(const vector&);
	void move(vector&);
	void index_check(size_t) const;

private:
	size_t m_capacity;
	size_t m_size;
	int* m_array;
};

#endif //VECTOR_HPP