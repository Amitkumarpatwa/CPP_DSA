#include<iostream>
using namespace std; 
int fact(int a)
{
  if (a==0||a==1)
  {
    return 1;
  }
  else{
    int res=a*fact(a-1);
    return res;
  }
} 
int main ()
{ 
  int n;
  cout<<"Enter a number :";
  cin>>n;
  int res=fact(n);
  cout<<"Factotial:"<<res;

  return 0;
}