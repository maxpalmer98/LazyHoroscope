//Authors: Maxwell Palmer
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
  cout<<"What is your last name?"<<endl;
  cin>> lname;
  cout<<"Welcome, "<<fname[0]<<"."<<lname[0]<<"., here is your fortune..."<<endl;
  int lucky;
  lucky = (int)fname.length() + lname.length();
  
  //tell fortune
  cout<<"your lucky number is "<<lucky<<endl;
  if (fname[0] == 'E'||fname[0] == 'A'|| fname[0] == 'O'||fname[0] == 'I'||fname[0] == 'U'||fname[0] == 'a'||fname[0] == 'e'||fname[0] == 'i'||fname[0] == 'o'||fname[0] == 'u')
  {
  cout<<"you are destined to be famous "<<endl;
  cout<<"you have already met your true love"<<endl;
  cout<<"have a good day"<<endl;
  }
  else
  {
  cout<<"you should keep a low profile."<<endl;
  cout<<"have a good day!"<<endl;
  }

  return 0;
}
