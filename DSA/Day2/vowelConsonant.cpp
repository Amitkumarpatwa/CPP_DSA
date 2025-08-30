#include<iostream>
using namespace std;
int main()
{
    char val;
    cout<<"Enter Alphabet :";
    cin>>val;

    if(val=='a'|| val=='e'|| val=='i'|| val=='o'|| val=='u')
    {
        cout<<"Alphabet is vowel";
    }
    else
    {
        cout<<"Alphabet is consonant";

    }
    return 0;
}