#include<iostream>
using namespace std;
 int main ()
 {
int n1,n2,n3;
cout<<"Enter three number"<<endl;
cin>>n1>>n2>>n3;

int res=n1>n2?(n1>n3?n1:n3):(n2>n3?n2:n3);

if ((res==n1&&res==n2)||(res==n1&&res==n3)||(res==n2&&res==n3)
)
{
  
   if (res==n1 && res==n2 &&res==n3)
{
  cout<<"All numbers are equal!";
}
else {
  cout<<"Two number are equally the largest!";
}
}

else{
  cout<<"The largest number is "<<res;
}

  return 0;
 }