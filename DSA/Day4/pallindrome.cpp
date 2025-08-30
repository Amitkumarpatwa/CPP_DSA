#include<iostream>
using namespace std;
int main()
{
    int number,sum=0,digit;
    cin>>number;
    int originalNumber=number;

    while(number!=0)
    {
        digit=number%10;
        sum=sum*10+digit;
        number=number/10;

    }

    if(originalNumber==sum)
    cout<<originalNumber<<" is  pallindrome number.";
    else
    cout<<originalNumber<<" is not pallindrome number.";

    
    return 0;
}