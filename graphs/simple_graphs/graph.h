/*
* This solution uses an adjacency matrix, effectively a bool[][], but because
* the two-dimensional array is dynamically allocated, the array (in both dimensions)
* decays to a pointer, giving bool** (you can kind of replace a [] with a *).
*/

#ifndef GRAPH_H
#define GRAPH_H

#include <vector>

class graph {
	
	private:
	
	//Just for fun, an awful way to do it.
	bool** adj_matrix;
	std::size_t size;
	
	public:
	
	graph(const size_t&);
	~graph();
	
	void add_edge(const int&, const int&);
	void remove_edge(const int&, const int&);
	
	bool is_adjacent(const int&, const int&);
	
};

#endif
