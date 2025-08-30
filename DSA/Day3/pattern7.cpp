#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    
    for(int row=1;row<=n;row++)
    {  
        int count=row;
        for(int sp=1;sp<=row-1;sp++)
        {
            cout<<"  ";
        }
        for(int col=1;col<=n-row+1;col++)
        {
            cout<<count<<" ";  
            count++;
        }
        cout<<endl;
    }
    return 0;
}