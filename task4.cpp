#include <iostream>
using namespace std;
void sequence(int number);

main()
{

  int number;
  cout << "Enter your number";
  cin >> number;
  sequence(number);
}
void sequence(int number)
{

  for (int i = 1; i <= number; i++)
  {
    int temp = i;
    if (i % 4 == 0)
    {
      i  = i * 10;
    }
      
    cout << i<<endl;
    i = temp;
  
  }

}