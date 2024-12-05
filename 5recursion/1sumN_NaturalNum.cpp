#include<iostream>
using namespace std;
int sum(int a)
{
  if(a==0)
  {
    return 0;
  }
  else{
    int sum1=a+sum(a-1);
    return sum1;
  }
}
int main ()
{
  int n;
  cout<<"Enter a number :";
  cin>>n;

  int res=sum(n);
  cout<<"Sum="<<res;

  return 0;
}