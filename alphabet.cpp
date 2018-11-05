#include<iostream>
using namespace std;
main()
{
  char alph;
  cout<<"Enter the character";
  cin>>alph;
  if((alph>='a' && alph<='z')||(alph>='A' && alph<='Z'))
    cout<<"Alphabet";
  else
    cout<<"No";
}
