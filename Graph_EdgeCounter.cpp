//finding edges in directed and undirected graph
#include <iostream>
using namespace std;

//Compiler version g++ 6.3.0

int main()
{
  cout<<"\n Enter \n 1 for directed graph \n"
  <<" 2 for Undirected Graph "<<endl;
  int choice ;
  cin>>choice;
  int ver, edge;
  switch(choice)
  {
    case 1:
      cout<<"Enter No. of vertices ";
      cin>>ver;
      edge=ver*(ver-1);
      cout<<"No. of edge in directed graph is "
      <<edge<<endl;
    break;
    
    case 2:
      cout<<"Enter No. of vertices ";
      cin>>ver;
      edge=ver*(ver-1)/2;
      cout<<"No. of edge in directed graph is "
      <<edge<<endl;
    break;
    
    default:break;
  }
  return 0;
}

//For Dense graph we use Adjacancy matrix
//For Sparese Grapgh we use adjacancy list 
