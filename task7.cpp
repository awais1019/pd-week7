#include<iostream>
using namespace std;
void percentage(float);
main()
{
    float number;
    cout<<"Enter number:";
    cin>>number;
    percentage(number);
}
 void percentage(float number)
 {
    int number1;
    float p1=0,p2=0,p3=0;
   for(float i=1;i<=number;i++)
   {
     cin>>number1;
    if(number1%2==0)
    {
     p1=p1+1;
    }
     if(number1%3==0)
    {
     p2=p2+1;
    }
    if(number1%4==0)
    {
     p3=p3+1;
    }

   }
   float percentage1=(p1/number)*100;
   float percentage2=(p2/number)*100;
   float percentage3=(p3/number)*100;

   cout<<percentage1<<endl;
   cout<<percentage2<<endl;
   cout<<percentage3<<endl;



 }
