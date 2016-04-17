#include <iostream>
#include "COP3503.h"
#include "Login.h"

using namespace std;

int main()
{
  cout << "butts" << endl;

  cout << "=====================================================================";
  cout << endl;
  cout << endl;
  cout << "Welcome to the Computer Vision Recognition System Acquisition Mission";
  cout << endl;
  cout << endl;
  cout << "1. Login";
  cout << endl;
  cout << "2. Add User";
  cout << endl;
  cout << "3. Exit";
  cout << endl;
  cout << endl;
  cout << "================================";
  cout << endl;
  cout << endl;

  cout << "Choose an option: ";
  int n;
  cin >> n;
  cout << endl;

  bool statement = true;
  do {
    if (n == 1)
    {
      int l;
      loginMenu(l);
    }

    else if (n == 2)
    {

    }

    else if (n == 3)
    {
      cout << "================================";
      cout << endl;
      cout << endl;
      cout << "Thanks for coming! See you next time!";
      cout << endl;
      cout << endl;
      cout << "=====================================================================";
      cout << endl;
      statement = false;
    }
  } while (statement == true);

  return 0;
}
