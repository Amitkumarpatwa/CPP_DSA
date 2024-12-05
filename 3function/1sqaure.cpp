#include<iostream>
using namespace std;
int square(int a)
{
  return a*a;
}
int main ()
{
  int num,result;
  cout<<"Enter a number:";
  cin>>num;

  result=square(num);

  cout<<"Square of "<<num<<" is "<<result;

  return 0;
}