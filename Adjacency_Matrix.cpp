
#include <iostream>
using namespace std;
#define V 5
void addedge( int graph[][V], int u, int v ){
  graph[u][v] = 1;
  graph[v][u] = 1;
}
int main(){
  cout<<"Enter the no. of vertices in graph "<<endl;
  
  int graph[V][V] ;
  
  for(int i = 0; i < V; i++ ){
    for( int j = 0; j < V; j++ ){
      graph[i][j] = 0;
    }
  }
  
  addedge(graph, 2, 3);
  addedge(graph, 1, 3);
  addedge(graph, 2, 1);
  addedge(graph, 2, 0);
  addedge(graph, 1, 1);
  addedge(graph, 0, 0);
  
  cout<<"The Adjacency Matrix is "<<endl<<endl;
  for(int i = 0; i < V; i++ ){
    for( int j = 0; j < V; j++ ){
      cout<<graph[i][j]<<" ";
    }
    cout<<endl;
  }
  return 0;
}
