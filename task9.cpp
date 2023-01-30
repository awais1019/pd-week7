#include <iostream>
using namespace std;
void star(int rows);

main(){

int rows;
cout<<"enter your number of rows";
cin>>rows;

star(rows);

}
void star(int rows)
{
    for (int i = 1; i <=rows; i++)
    {
        for (int j = 1; j <=i; j++)
        {
            cout<<"*";
        }
        for (int j = rows; j >=i; --j)
        {
            cout << "  ";
        }
        for (int k = 1; k <= i; k++)
        {
            cout << "*";
        }
        cout<<endl;
      
    }
      
    
    
}