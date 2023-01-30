#include<iostream>
using namespace std;
void pattern(int);
void pattern2(int);
main()
{
    int rows;
    cout<<"Enter rows:";
    cin>>rows;
    pattern(rows);
    pattern2(rows);



}
void pattern(int rows)
{
    int i,space,k;
  for ( i=1;i<=rows;i++)
  {
    for(space=rows;space>=i;space--)
    {
      cout<<" ";
    }
    for(k=0;k<i;k++)
    {
       cout<<"*";
       
       
    }
      cout<<endl;
  }
} 
  void pattern2(int rows)
  {
     int i,space,k;
    for (i=1;i<=rows;i++)
  {
    for(k=1;k<=i;k++)
    {
      cout<<" ";     
    }
    for(space=rows;space>=i;space--)
    {
       cout<<"*";
       
       
    }
      cout<<endl;
  }
  }

