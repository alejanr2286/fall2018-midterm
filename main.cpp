/**

Description: This program will ask the user for a string input in one function. and in the other function if will take that string and
count how many letters gs are in that string and output it on screen.
Filename: main.cpp
Author:alejandro rodriguez
Date:10/18/2018
email: alejanr2286@students.vvc.edu
*/

#include<iostream>
#include<string>

using namespace std;

string get_string ( string prompt ); // function 1 which will ask user for string input.

int get_count ( string x, char c); //this is function 2 which will cheak how many gs there are in the string usind a loop.

int main()
{
  int new_count;
  char c;
  string s;

  s = get_string ( "please input your string." );

  new_count = get_count ( s , c );

  cout << "your string has this many g's:  " << new_count << endl;

  return 0;
}

string get_string ( string prompt )
{
  string value;
  cout << prompt;
  cin >> value;
  return value; // this retuns the user input string. which is later set to s in main.
}

int get_count ( string s , char c )
{
  int count = 0;
  for ( int i=0; i < s.size(); i++ ) //this loop looks at all the character is string s and if any are eqaul to g it adds 1 to the varible count.
  {
     c = s.at(i);
    if ( c == 'g')
    {
      count++;
    }
  }
  return count; // the number of how many gs are returned.
}


