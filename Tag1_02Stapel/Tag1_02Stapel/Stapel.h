#pragma once
#include "StapelException.h"

class Stapel
{
private:
	int* data_;
	size_t size_;
	int index_;
	void init(const Stapel& other)
	{
		size_ = other.size_;
		data_ = new int[other.size_];
		index_ = other.index_;
		for (int i = 0; i < other.index_; ++i)
		{
			data_[i] = other.data_[i];
		}
	}

	void move(Stapel&& other)
	{
		data_ = other.data_;
		size_ = other.size_;
		index_ = other.index_;

		other.data_ = nullptr;
		other.size_ = 0;
		other.index_ = 0;
	}
public:
	Stapel(size_t size = 10):size_(size),data_(new int[size]),index_(0 ) {}

	Stapel(const Stapel& other) { // Copy-constructor

		init(other);
	};

	
	Stapel(Stapel&& other){ // Move-constructor
		
		move(std::move(other));
	};

	

	Stapel& operator = (const Stapel& other) {

		delete[] data_;
		init(other);

		return *this;

	};

	

	Stapel& operator = (Stapel&& other) {

		move(std::move(other));

		return *this;

	};

	virtual ~Stapel()
	{
		delete[] data_;
	}

	void push(int value)
	{
		if (is_full())
			throw StapelException("Overflow");
		data_[index_++] = value;

	}

	int pop()
	{
		if (is_empty())
			throw StapelException("Underflow");
		return data_[--index_];

	}

	bool is_empty() const noexcept
	{
		return index_ <= 0;
	}

	bool is_full() const noexcept
	{
		return index_ >= size_;
	}


	size_t get_size() const noexcept
	{
		return size_;
	}
};

// Goldene Regel Wenn entweder der Destruktor oder zuweisungoperator, kopiekonstruktor überschrieben wird müssen alle drei überschrieben werden