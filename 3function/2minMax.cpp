// Online C++ compiler to run C++ program onl
#include <iostream>
using namespace std;
void minMax(int a,int b)
{
  
    if(a==b){
        cout<<"Number is equal.";
    }
    else
    {
        if(true)
        {
            if(a>b)
            {
                cout<<a<<"is max"<<endl;
            }
            else
            {
                cout<<b<<" is max"<<endl;
            }
        }
        if(true)
        {
            if(a<b)
            {
                cout<<a<<"is min"<<endl;
            }
            else{
                cout<<b<<"is min"<<endl;
            }
        }
    }
}

int main() {
    
      int a,b;
      cout<<"Enter your first number:";
    cin>>a;
    cout<<"Enter your second number:";
    cin>>b;
    minMax(a,b);

    return 0;
}