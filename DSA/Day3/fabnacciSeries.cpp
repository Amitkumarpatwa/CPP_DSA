#include<iostream>
using namespace std;
int main()
{   int n;
    cin>>n;

    int first_number=0;
    int second_number=1;
    int current_number;
    if(n==1)
    {
        cout<<first_number;
    }
    else if(n==2)
    {
        cout<<second_number;
    }
    else
    {  
        for(int i=3;i<=n;i++)
    {
        current_number=first_number+second_number;
        first_number=second_number;
        second_number=current_number;
    }
    cout<<current_number;
}

    return 0;
}