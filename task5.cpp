#include<iostream>
using namespace std;
int dots(int);
main()
{
    int number;
    cout<<"triangel:";
    cin>>number;
   int result= dots(number);
   cout<<result;
}
int dots(int number)
{
   int dot=0,difference=2;
   int dots;
   int first_digit=1; 
  for(int i=1;i<=number;i++)
  {
    dots=dot+first_digit;   
    first_digit=difference+dots;
    difference++;
  }
  return dots;
}