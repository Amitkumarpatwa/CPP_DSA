#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int number,decimalNumber=0,i=0;
    cin>>number;

    while(number!=0)
    {
        int digit=number%10;
        decimalNumber=decimalNumber+(digit*pow(2,i)); //1<<i which faster and i dont know the logic so i dont use it
        i++;
        number/=10;

    }
    cout<<decimalNumber;
    return 0;
}