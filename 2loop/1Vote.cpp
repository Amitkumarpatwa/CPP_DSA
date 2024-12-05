#include<iostream>
using namespace std;
int main ()
{
  int age;
  char citizen;
  cout<<"Are you from India ?(y/n):";
  cin>> citizen;

  if(citizen=='y'|| citizen=='Y')
  {
    cout<<"Enter your age :";
    cin>>age;

    if(age>=18)
    {
      cout<<"You are eligible for vote. ";
    }
    else
    {
      cout<<"You are not eligible for vote. ";
    }
    
  }
  else{
    cout<<"You are not eligible for vote. ";
  }


  return 0;
}