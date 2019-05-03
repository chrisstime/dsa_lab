#include "graph_adj_list.h"

graph::graph(const size_t& size){
	this->size = size;
	adj_list = new std::vector<int>[this->size];
}

graph::~graph(){
	delete[] adj_list;
}

void graph::add_edge(const int& u, const int& v){
	if ((u >= 0) && (u < size) && (v >= 0) && (v < size) && (u != v)){
		if (!is_adjacent(u, v)) {
			adj_list[u].push_back(v);
			adj_list[v].push_back(u);
		}
	}
}

void graph::remove_edge(const int& u, const int& v){
	
	if ((u >= 0) && (u < size) && (v >= 0) && (v < size) && (u != v)){
		for (int i = 0; i < adj_list[u].size(); ++i) {
			if (adj_list[u][i] == v) {
				adj_list[u].erase(adj_list[u].begin() + i)
			}
		}
		for (int i = 0; i < adj_list[v].size(); ++i) {
			if (adj_list[v][i] == u) {
				adj_list[v].erase(adj_list[v].begin() + i)
			}
		}
	}
}

bool graph::is_adjacent(const int& u, const int& v){
	if ((u >= 0) && (u < size) && (v >= 0) && (v < size)){
		for (int i = 0; i < adj_list[u].size(); ++i) {
			if (adj_list[u][i] == v) {
				return true;
			}
		}
	}
	return false;
}
