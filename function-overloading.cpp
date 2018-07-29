#include<iostream>
using namespace std;
void number(float x)
{
  cout <<"This is float" <<x;
}
void number(int x)
{
  cout<<"This is int" <<x;
}
int main()
{
  int x=100;
  float y=58.089;
  number(x);
  number(y);
 }
  
  
