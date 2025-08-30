#include<iostream>
using namespace std;
int main()
{
    int number,sum=0,digit,binaryNumber=0;
    cin>>number;

    while(number!=0)
    {
        digit=number%2;
        sum=sum*10+digit;
        number/=2;
    }
    
    while(sum!=0)
    {
        int binaryDigit=sum%10;
        binaryNumber=binaryNumber*10+binaryDigit;
        sum/=10;
        
    }
    cout<<binaryNumber;

    return 0;
}