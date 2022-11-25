#include<iostream>
#include<vector>
#include<queue>
#include<list>

using namespace std;

class Graph{
private:
	int num_vertex;
	vector<list<int>> AdjList;
	int *color,
	    *distance,
	    *predecessor;
public:
	Graph():num-vertex(0){};
	Graph(int N):num_vertex(N)
}
