// Sum of first n number
#include<iostream>
using namespace std;
int main()

{   int num,sum=0;
    cout<<"Enter a number where u want to sum of n number:";
    cin>>num;
    
    // for(int i=1;i<=num;i++)
    // {
    //     sum+=i;

    // }
    // cout<<"Sum Of First N Number="<<sum<<endl;
    sum=(num*(num+1))/2;
    cout<<sum;
    return 0;
}