// Set.h
// SubsetSum skeleton code
//
// Created by Anand Venkataraman on 3/23/19.
// Copyright © 2019 Anand Venkataraman. All rights reserved.
//
// Pedantic: Set is not technically a set because it can support duplicate
// elements.
//
// Each Set has a pointer to a universal list of possible elems (master)
// and a vector of elems. The master is a vector of elements and elems is
// a vector of integer indices into the master vector. Each Set also tracks
// the sum of its elements. Define this sum however you like, but make sure
// it evaluates to a representative integer for a given Set.
//
// Student ID: ******** - replace this with your ID if you want this
// submission to be recorded.

#ifndef Set_h
#define Set_h

#include <vector>
#include <sstream>

using namespace std;

template <typename T>
class Set
{
private:
	vector<T> *master_ptr;
	vector<size_t> elems; // List of indices into this->master
	size_t sum;

public:
	Set(vector<T> *mast_ptr = nullptr) : master_ptr(mast_ptr), sum(0) {}

	const size_t size() const { return elems.size(); }
	const vector<T> *get_master_ptr() const { return master_ptr; }
	const size_t get_sum() const { return sum; }

	bool add_elem(size_t n); // n is the index in master
	bool add_all_elems();    // Add everything in the master

	// This is the alg (BTW, _le = less or equal)
	Set<T> find_biggest_subset_le(size_t target);

	// Don't change this method 'cuz my tests depend on it.
	friend ostream& operator<<(ostream& os, const Set<T>& set)
	{
		const vector<T> *mast_ptr = set.get_master_ptr();
		os << "{\n";
		for (size_t index : set.elems)
			os << " " << mast_ptr->at(index) << "\n";
		return os << "}";
	}

	friend class Tests; // Don't remove this line
};

// Add the nth element in the master set into the current subset, updating
// sum. Return true on success, false otherwise.
template<class T>
bool Set<T>::add_elem(size_t n)
{
	//// TODO - Your code here
}

// Add (the indices of) all the elements in the master into this set.
template<class T>
bool Set<T>::add_all_elems()
{
	//// TODO - Your code here
}

// Find the subset of the current set whose elements have the
// greatest sum no bigger than target. (_le = less than or equal)
template<class T>
Set<T> Set<T>::find_biggest_subset_le(size_t target)
{
	//// TODO - Your code here
	return *best_subset;
}

#endif /* Set_h */