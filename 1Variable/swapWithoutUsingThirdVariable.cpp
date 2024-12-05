#include<iostream>
using namespace std;
int main ()
{
  int num1,num2;
  cout<<"Enter the value of A:";
  cin>>num1;
  cout<<"Enter the value of B:";
  cin>>num2;

  cout<<"Value before swapping A:"<<num1 <<" and B:"<<num2<<endl;

  // without using third variable

  num1=num1*num2;
  num2=num1/num2;
  num1=num1/num2;

  cout<<"Value after swapping A:"<<num1<<" and B:"<<num2;

  return 0;

}