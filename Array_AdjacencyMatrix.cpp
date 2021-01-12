



// A D J A C E N C Y   L I S T

#include <iostream>
using namespace std;
#define V 5

void addedge( int graph[][V], int u, int v ){
  graph[u][v] = 1;
  graph[v][u] = 1;
}


int main()
{
  int graph[V][V] = {0};
  int u, v;
  cout<<"The available edges set of edges are "<<endl;
  for( int i = 0; i < V; i++ ){
    cout<<"-"<<i;
  }
  cout<<endl;
  
  cout<<"How many connections you want to make"<<endl;
  int n;
  cin>>n;
  
  for(int i = 0; i < n; i++ ){
     
  cout<<"Now Enter the pair of edges"
      <<" for connection "<<endl;
  cin>>u>>v;
  addedge( graph, u, v );
  }
  
  
  for(int i = 0; i < V; i++ ){
    for( int j = 0; j < V; j++ ){
      cout<<graph[i][j]<<" ";
    }
    cout<<endl;
  }
  
  return 0;
  
}
