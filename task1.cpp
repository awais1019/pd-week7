#include<iostream>
using namespace std;
void pattern(int);
main()
{
    int rows;
    cout<<"Enter rows:";
    cin>>rows;
    pattern(rows);



}
void pattern(int rows)
{
    int i,j;
  for (i=1;i<=rows;i++)
  {
    for(j=1;j<=i;j++)
    {
      cout<<"*";

    }
    cout<<endl;




  }




}