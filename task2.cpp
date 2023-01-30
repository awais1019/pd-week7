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
    for(j=i;j<=rows;j++)
    {
      cout<<"*";

    }
    cout<<endl;

  }
}