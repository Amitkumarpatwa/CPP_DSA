#include<iostream>
using namespace std;
int main()
{
    // int totalNoRows;
    // cin>>totalNoRows;
    // for( int row=1;row<=totalNoRows;row++)
    // {
    //     //for space 
    //     for(int space=1;space<=totalNoRows-row;space++)
    //     {
    //         cout<<" ";
    //     }
    //     // for star
    //     for( int col=1;col<=row;col++)
    //     {
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }
    int totalNoRow;
    cin>>totalNoRow;
    for(int row=1;row<=totalNoRow;row++)
    {
        for ( int space=1;space<=totalNoRow-row;space++)
        {
            cout<<"_";
        }
        for( int col=1;col<=row;col++)
        {
            cout<<"*_";
        }
        cout<<endl;
    }
    return 0;
}