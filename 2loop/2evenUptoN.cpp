#include<iostream>
using namespace std;
int main ()
{
  int n;
  cout<<"Enter a number where you want to print even number:";
  cin>> n;

 for(int i=0;i<=n;i+=2)
 {
   cout<<i<<endl;
 }
  return 0;
}