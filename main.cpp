#include <iostream>
using namespace std;

// <-- ADD YOUR FUNCTION PROTOTYPE HERE
void swap(int &x, int &y);
void order(int &x, int &y, int &z);
int main()
{
  //DO NOT CHANGE WITHIN THIS AREA...
  int red;
  int blue;
  int green;
  cout<<"Enter Red, Green, and Blue values: ";
  cin>>red>>green>>blue;
  //...END OF "DO NOT CHANGE" AREA


  // <-- ADD YOUR FUNCTION CALL HERE
  order(red,green,blue);

  //DO NOT CHANGE WITHIN THIS AREA...
  cout<<"Rearranged....\n";
  cout<<"RGB: "<<red<<","<<green<<","<<blue<<endl;
  return 0;
  //...END OF "DO NOT CHANGE" AREA
}

// <-- ADD YOUR FUNCTION DEFINITON HERE
void swap(int &x, int &y)
{
  int temp;

  temp = x;
  x = y;
  y = temp;
  return; 
}  

void order(int &x, int &y, int &z)
{ 
  if (z>x)
  {
    swap(x,z);
  }  
  if (y>x)
  {
    swap(y,x);
  } 
  if (z>y)
  {        
    swap(z,y);
  }
  return;
}  




