#include "graph.h"

graph::graph(const size_t& size){
	this->size = size;
	adj_matrix = new bool*[this->size];
	
	for (int i = 0; i < this->size; i++){
		adj_matrix[i] = new bool[this->size];
		for (int j = 0; j < this->size; j++){
			adj_matrix[i][j] = false;
		}
	}
}

graph::~graph(){
	for (int i = 0; i < this->size; i++){
		delete adj_matrix[i];
	}
	delete[] adj_matrix;
}

void graph::add_edge(const int& u, const int& v){
	
	if ((u >= 0) && (u < size) && (v >= 0) && (v < size) && (u != v)){
		adj_matrix[u][v] = true;
		adj_matrix[v][u] = true;
	}
	
}

void graph::remove_edge(const int& u, const int& v){
	
	if ((u >= 0) && (u < size) && (v >= 0) && (v < size) && (u != v)){
		adj_matrix[u][v] = false;
		adj_matrix[v][u] = false;
	}
	
}

bool graph::is_adjacent(const int& u, const int& v){
	
	if ((u >= 0) && (u < size) && (v >= 0) && (v < size)){
		return adj_matrix[u][v];
	}
	return false;
}
