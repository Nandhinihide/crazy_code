#include<iostream>
using namespace std;
main()
{
  char mychar;
  cout<<"Enter the character"<<endl;
  cin>>mychar;
  if(mychar=='a'||'e'||'i'||'o'||'u')
    cout<<"vowel";
  else
    cout<<"Invalid";
}
