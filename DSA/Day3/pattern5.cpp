#include<iostream>
using namespace std;
int main()
{ 
    // for(char row='a';row<='e';row++)
    // {
    //     for(char col='a';col<='e';col++)
    //     {
    //         cout<<row<<" ";
    //     }
    //     cout<<endl;
    // }

     for(int row=1;row<=5;row++)
    {
        for(int col=1;col<=5;col++)
        {
            cout<<char(97+row-1)<<" ";
        }
        cout<<endl;
    }
    return 0;
}