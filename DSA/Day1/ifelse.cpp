#include<iostream>
using namespace std;
int main()
{   int age;
    cout<<"Enter your age:";
    cin>>age;
    // if age is less then 18 not allowed to vote
    if(age>=0 && age<18)
    {
        cout<<"Sorry! Not allowed to vote.";
    }
    else
    cout<<"Allowed to vote";

    return 0;

}
