#include<iostream>
using namespace std;
int main()
{
    int number,count=0,i=10,digit=1;
    cin>>number;

    while (number>0)
    {
        number/=i;
        // cout<<number<<endl;
        count++;
        // i*=10;
    }
    cout<<count;
    
    // while(number>0)
    // {
    //     number/=i;
    //     // cout<<number<<endl;
    //     count=i;
    //     i*=10;

    // }
    // cout<<i;

    // for(int in=1;in>0;in++)
    // {
    //     if(number/i==0)
    //     {
    //         cout<<digit;
    //         return 0;
    //     }
    //     i*=10;
    //     digit++;
    // }

    return 0;
}