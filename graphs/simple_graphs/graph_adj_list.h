/* 
* This solution uses an adjacency list approach, based on an array of vectors.
* Note that because we are dynamically allocating the array, the actual type of
* the variable is std::vector<int>* (remember that arrays decay to pointers).
*
* Notice the change in internal type here compared to the matrix solution - 
* the matrix stored bools - just true or false at a particular index pair for
* each edge.
*
* Here the index of the array is a vertex, but the index of the vector doesn't
* matter, it's the numbers stored in the vector that are the adjacent vertices.
*/

#ifndef GRAPH_H
#define GRAPH_H

#include <vector>

class graph {
	
	private:
	
	//Just for fun, an awful way to do it.
	std::vector<int>* adj_list;
	size_t size;
	
	public:
	
	graph(const size_t&);
	~graph();
	
	void add_edge(const int&, const int&);
	void remove_edge(const int&, const int&);
	
	bool is_adjacent(const int&, const int&);
	
};

#endif
