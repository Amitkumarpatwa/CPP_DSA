#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter a number :";
    cin>>num;
    if(num>1)
    {    for(int i=2;i<num;i++)
    {
        if(num%i==0)
        {
            cout<<num<<" is not a prime number.";
            return 0;
        }
    }
    cout<<num<<" is a prime number";
    } 
    else
    {
     cout<<num<<" is not a prime number.";
    
    }
    return 0;
}