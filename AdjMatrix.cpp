#include <iostream>
using namespace std;
#define V 5

class AdjMatrix {
 public :
  void addedge( int graph[][V], int u, int v ){
   graph[u][v] = 1;
  }

};

int main(){
 int graph[V][V] = { 0 };
 AdjMatrix obj;
obj.addedge( graph, 1, 2 );
obj.addedge( graph, 2, 2 );
obj.addedge( graph, 4, 2 );
obj.addedge( graph, 0, 2 );
obj.addedge( graph, 3, 2 );
obj.addedge( graph, 1, 4 );
obj.addedge( graph, 2, 3 );
obj.addedge( graph, 1, 4 );
 obj.addedge( graph, 4, 3 );
 
 
 for( int i = 0; i < V; i++ ){
  for( int j = 0; j < V; j++ ){
   cout<<graph[i][j]<<" ";
  }
  cout<<endl;
 }
 
return 0;
}
