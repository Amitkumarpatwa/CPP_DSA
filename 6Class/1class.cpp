#include<iostream>
#include<string>
using namespace std;
class singup
{
  public:
  string firstname;
  string email;
  string password;

void displayInfo()
{
  cout<<"firstname-"<<firstname<<endl;
  cout<<"email-"<<email<<endl;
}
};
int main ()
{
  string a;

  singup user;
  cout << "Enter your name : ";
  cin>>a;//its take first name only like amit kumar output-amit
  // getline(cin,a); // its take all name like amit kumar patwa op-amit kumar patwa
  user.firstname=a;
  user.email="amitpatwa@yopmail.com";
  user.password="pass123";

  user.displayInfo();

  return 0;
}