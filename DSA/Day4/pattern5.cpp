// //butterfly
// #include<iostream>
// using namespace std;
// int main()
// {
//     int totalNoRows;
//     cin>>totalNoRows;
//     int newRow;
//     newRow=totalNoRows-1;
//     int count=newRow;
    


//     for(int row=1;row<=totalNoRows;row++)
//     {
//         //star
//         for(int col=1;col<=row;col++)
//         {
//             cout<<"*";
//         }
//         //space
//         for(int space=1;space<=2*totalNoRows-2*row;space++)
//         {
//             cout<<" ";
//         }
//         //star
//         for(int col=1;col<=row;col++)
//         {
//             cout<<"*";
//         }


//         cout<<endl;

//     }

//     for(int row=1;row<=newRow;row++)
//     {
//         //star
//         for(int col=1;col<=count;col++)
//         {
//             cout<<"*";
//         }
//         //space
//         for(int space=1;space<=2*row;space++)
//         {
//             cout<<" ";
//         }
//         //star
//         for(int col=1;col<=count;col++)
//         {
//             cout<<"*";
//         }
//         count--;
//         cout<<endl;
//     }
//     return 0;
// }

#include<iostream>
using namespace std;
int main()
{
    int totalNoRows;
    cin>>totalNoRows;
    
    for(int row=1;row<=totalNoRows;row++)
    {
        //star
        for(int col=1;col<=row;col++)
        {
            cout<<"*";
        }
        //space
        for(int space=1;space<=2*(totalNoRows-row);space++)
        {
            cout<<" ";
        }
        //star
        for(int col=1;col<=row;col++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    int newRows=totalNoRows-1;

    for(int row=1;row<=newRows;row++)
    {
        //Star
        for(int col=1;col<=totalNoRows-row;col++)
        {
            cout<<"*";
        }
        //space
        for(int space=1;space<=2*row;space++)
        {
            cout<<" ";
        }
        //Star
        for(int col=1;col<=totalNoRows-row;col++)
        {
            cout<<"*";
        }
        cout<<endl;
        
    }
    return 0;
}