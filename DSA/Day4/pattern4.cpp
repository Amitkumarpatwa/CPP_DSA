#include<iostream>
using namespace std;
int main()
{
    int totalNoRows;
    cin>>totalNoRows;
    int count=totalNoRows;
    for(int row=1;row<=totalNoRows;row++)
    {
        //for space 
        for(int space=1;space<=row-1;space++)
        {
            cout<<" ";
        }
        // for star
        for(int col=1;col<=count;col++)
        {
            cout<<"* ";
        }
        count--;
        cout<<endl;
    }
    return 0;
}