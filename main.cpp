#include <iostream>
#include <stdlib.h>
using namespace std;
int plus1(int a, int b) 
{
  return a + b;
}

void take(int& num1,int& num2)
{
  cout << "Enter the first number: ";
  cin >> num1;
  cout << "\n";
  cout << "Enter the second number: ";
  cin >> num2;
  cout << "\n";
}
  int minus1(int a, int b)
    {
      return a - b;
    }

  int main()
  {
    start_first:
    int wh = 0,num1 = 0,num2 = 0;
    char try1 = 'n';
    cout << "What do you want to do? 1-plus 2-minus: " << endl;
    cin >> wh;
    switch(wh)
      {				
      case 1:			
	take(num1,num2);
	cout <<"The answer is: " <<  plus1(num1,num2) << endl;
	break;
      case 2:
	take(num1,num2);
	cout <<"The answer is: " << minus1(num1,num2) << endl;
	break;
      }
    cout << "Do you want to calculate another time? y/n" << endl;
      cin >> try1;
      switch(try1)
	{
	case 'y':
	case 'Y':
	  system("clear");
	  goto start_first;
	  break;
	default:
	  exit(0);
	}

    return 0;
  }
