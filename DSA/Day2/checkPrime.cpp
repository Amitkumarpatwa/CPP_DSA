// check number is prime or not
#include<iostream>
using namespace std;
int main()
{
    int num,check=false;
    cout<<"Enter a number:";
    cin>>num;
    if(num>1)
    {
        for(int i=2;i<num;i++)
        {
            if(num%i==0)
            {   check=true;
                cout<<num<<" is not a prime number.";
                break;
                
            }
            
        }
        if(check==false)
        {
            cout<<num<<" is a prime number.";
        }
        
        

    }
    else
    {
      cout<<num<<" is not a prime number.";
    }
    return 0;
}