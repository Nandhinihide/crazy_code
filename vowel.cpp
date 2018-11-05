#include<iostream>
using namespace std;
main()
{
  char mychar;
  cout<<"Enter the character"<<endl;
  cin>>mychar;
  if(mychar=='a'||mychar=='e'||mychar=='i'||mychar=='o'||mychar=='u'||mychar=='A'||mychar=='E'||mychar=='I'||mychar=='O'||mychar=='U')
    cout<<"vowel";
  if else((mychar>='a' && mychar<='z')||(mychar>='A' && mychar<='Z'))
    cout<<"Consonant";
  else
    cout<<"Invalid";
}
