#include <iostream>
#include "COP3503.h"

using namespace std;

int main()
{
  cout << "butts" << endl;

  cout << "=====================================================================\n\n";
  cout << "Welcome to the Computer Vision Recognition System Acquisition Mission\n\n";
  cout << "1. Login\n";
  cout << "2. Add User\n";
  cout << "3. Exit\n\n";
  cout << "================================\n\n";

  cout << "Choose an option: ";
  int n;
  cin >> n;
  cout << endl;

  bool statement = true;
  do {
    if (n == 1)
    {

    }

    else if (n == 2)
    {

    }

    else if (n == 3)
    {
      cout << "================================\n\n";
      cout << "Thanks for coming! See you next time!\n\n";
      cout << "=====================================================================\n";
      statement = false;
    }
  } while (statement == true);

  return 0;
}
