//Authors:Maxwell Palmer
#include<iostream>
#include<string>

using namespace std;

int main()
{
  //declare variables
  string fname;
  string lname;

  //get user input
  cout<<"What is your first name?"<<endl;
  cin>> fname;
  cout<<"What is you last name"<<endl;
  cin>> lname;
  cout<<"Welcome "<<fname[0]<<"."<<lname[0]<<". here is your fortune..."<<endl;

  //tell fortune

  return 0;
}
