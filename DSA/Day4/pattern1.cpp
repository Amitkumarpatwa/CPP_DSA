#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for (int row =1;row<=n;row++)
    {   //for space
        for(int sp=1;sp<=n-row;sp++)
        {
            cout<<" ";
        }
        // for stars
        for(int col=1;col<=2*row-1;col++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}