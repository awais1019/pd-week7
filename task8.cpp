#include<iostream>
using namespace std;
void price(float);
main()
{
  float number;
  cout<<"Enter number:";
  cin>>number;
  price(number);



}
void price(float number)
{
  float ton_by_bus=0,ton_by_train=0,ton_by_truck=0,sum=0;
  float ton;
  float bus_price=200;
  float truck_price=175;
  float train_price=120;
  for(int i=1;i<=number;i++)
  {
    cin>>ton;

    if(ton<=3)
    {
    ton_by_bus=ton_by_bus+ton;
    }
     if(ton>3&&ton<=11)
    {
    ton_by_truck=ton_by_truck+ton;
    }
     if(ton>11)
    {
    ton_by_train=ton_by_train+ton;
    }
  }   
    sum=sum+(ton_by_bus+ton_by_train+ton_by_truck);
    float percentage2=(ton_by_bus/sum)*100;
    float percentage3=(ton_by_truck/sum)*100;
    float percentage4=(ton_by_train/sum)*100;
    float percentage1=(ton_by_bus*bus_price+ton_by_train*train_price+ton_by_truck*truck_price)/sum;
    cout<<percentage1<<endl;
    cout<<percentage2<<endl;
    cout<<percentage3<<endl;
    cout<<percentage4<<endl;

}    
