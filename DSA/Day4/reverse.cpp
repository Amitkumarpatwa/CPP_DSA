//reverse of number like we have 1234 we have print 4321

#include<iostream>
using namespace std;
int main()
{
    int number,sum=0,digit;
    cin>>number;

    while(number!=0)
    {
      digit=number%10;
      number/=10;
      sum=sum*10+digit;
    }
    cout<<sum;


    return 0;
}