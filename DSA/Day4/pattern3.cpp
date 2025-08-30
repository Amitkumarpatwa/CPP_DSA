#include<iostream>
using namespace std;
int main()
{
    int totalNoRows;
    cin>>totalNoRows;
    int count=totalNoRows;
    // cout<<count;
    for(int row=1;row<=totalNoRows;row++)
    {
        //space row-1
        for(int space=1;space<=row-1;space++)
        {
            cout<<" ";
        }
        //star
        for(int col=1;col<=2*count-1;col++)
        {
            cout<<"*";
        }
        count--;
        
        cout<<endl;
    }
    return 0;
}