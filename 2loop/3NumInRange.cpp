#include<iostream>
using namespace std;
int main ()
{
  int n1,n2,find;
  cout<<"Enter a starting number of range:";
  cin>>n1;
cout<<"Enter a ending number of range:";
cin>>n2;
cout<<"Enter a number that you want to find:";
cin>>find;
if(find>=n1&&find<=n2)
{
  cout<<"Number lies in between the range.";
}
else{
 cout<<"Number don't lies in between the range.";
}

  return 0;
}