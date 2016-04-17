#include <iostream>
#include "COP3503F.h"
#include "newUser.h"
#include <string>
#include "Login.h"

using namespace std;

void newUser::writeToFile(string name, int day, int month, int year, int feet, int inches, string gender,
                          string color)
{
    ofstream myfile;
    myfile.open ("user.csv");
    myfile << name << ",";
    myfile << day << "/" << month << "/" << year << ",";
    myfile << feet << " " << inches << ",";
    myfile << gender << ",";
    myfile << color << endl;

    myfile.close();

}

string name = "";
int day = 0;
int month = 0;
int year = 0;
int feet = 0;
int inches = 0;
string gender = "";
string color = "";
int n = 0;

int main()
{


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
        cout << "Ready to create a new user!" << endl;
        cout << "Please type in a username that is between 1 and 15 characters inclusive";
        cin >> name;
        while(name.length() > 15 || name.length()< 1)
        {
            if(name.length() > 15)
            {
               cout << "That username is too long!";
                cout << endl;
                cout << "Please type in a username that is between 1 and 15 characters inclusive";
                cout << endl;
                cin >> name;
                cin.clear();
            }
            else
            {
                cout << "That username is too short!";
                cout << endl;
                cout << "Please type in a username that is between 1 and 15 characters inclusive";
                cout << endl;
                cin >> name;
                cin.clear();
            }

        }
        cin.clear();
        ////////////////////////////
        //checks for day of birth//
        //////////////////////////
        cout << "Please type the day you were born";
        cout << endl;
        cout << "For example, a person born on the 22nd day of the month would enter the number 22";
        cout << endl;

        //check individual months
        while(true)
        {

            cin >> day;
            //checks for letters
            if(cin.fail())
            {

                cin.clear();
                cin.ignore(1000, '\n');
                cout << "Please enter a number that is a day of the month" << endl;
                continue;

            }
                //checks for decimals
            else if(day != (int)day)
            {
                cin.clear();
                cin.ignore(1000, '\n');
                cout << "Please enter a number that is a day of the month" << endl;
                continue;
            }
            //checks for range/odd
            n = day;

            if(n%2 != 1 || n < 1 || n > 31)
            {

                cout<< "Please enter a number that is a day of the month";
                cout << endl;
                cin.clear();
                cin.ignore(1000, '\n');
                continue;

            }

                //double checks for decimals and leaves while with proper input
            else if(n == (int) day)
            {
                n = day;
                break;
            }


        }

        ///////////////////////////
        ////asks user for month////
        //////////////////////////

        cout << "Please enter the numeric value of the month you were born in";
        cout << endl;
        cout << "\tFor example, a user born in April would enter the number 4"
        while(true)
        {

            cin >> month;
            //checks for letters
            if(cin.fail())
            {

                cin.clear();
                cin.ignore(1000, '\n');
                cout << "Please enter a number that is between 1 and 12 inclusive" << endl;
                continue;

            }
                //checks for decimals
            else if(day != (int)day)
            {
                cin.clear();
                cin.ignore(1000, '\n');
                cout << "Please enter a number that is between 1 and 12 inclusive" << endl;
                continue;
            }
            //checks for range/odd
            n = day;

            if(n%2 != 1 || n < 1 || n > 12)
            {

                cout<< "Please enter a number that is between 1 and 12 inclusive";
                cout << endl;
                cin.clear();
                cin.ignore(1000, '\n');
                continue;

            }

                //double checks for decimals and leaves while with proper input
            else if(n == (int) day)
            {
                n = day;
                break;
            }


        }
        newUser user = newUser();

        user.writeToFile(name, day, month, year, feet, inches, gender, color);

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
