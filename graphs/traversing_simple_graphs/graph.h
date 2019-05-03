#ifndef GRAPH_H
#define GRAPH_H

#include <vector>
#include <stack>
#include <queue>

class graph {
	
	private:
	
	//A much less awful way of doing it.
	std::vector<std::vector<bool> > adj_matrix;
	std::size_t size;
	
	public:
	
	graph(const size_t&);
	~graph();
	
	void add_edge(const int&, const int&);
	void remove_edge(const int&, const int&);
	
	bool is_adjacent(const int&, const int&);
	
	std::vector<int> dft(const int&) const;
	std::vector<int> bft(const int&) const;
	
};

#endif
