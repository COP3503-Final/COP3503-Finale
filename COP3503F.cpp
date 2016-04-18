#include <iostream>
#include <fstream>
#include "COP3503F.h"
#include "newUser.h"
#include <string>
#include "Login.h"
#include <vector>
#include <sstream>
#include <iomanip>

using namespace std;


void newUser::writeToFile(string name, int day, int month, int year, int feet, int inches, string gender,
                          string color)
{


    ofstream myfile;
    if(!myfile.is_open())
    {
        myfile.open("user.csv");
    }




    myfile << name <<",";
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
int height = 0;
string gender = "";
string color = "";


int main()
{


  ////////////////////////////
  ////Initializes Main Menu//
  //////////////////////////

  cout << "=====================================================================";
  cout << endl;
  cout << endl;
  //All of the '==' will be used to separate the menus for easier viewing
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

  ////////////////////////////
  //do while loop for main menu//
  //////////////////////////


    bool statement = true;
    do {

        cout << "Choose an option: ";
        cout << endl;
        int n;
        cin >> n;
        cout << endl;

    if (n == 1)
    {
      cout << "===";
      cout << endl;
      cout << endl;
      cout << "Login";
      cout << endl;
      cout << endl;
      cout << "1. Input User Name"; //Open OpenCV once they figure out how to implement it
      cout << endl;
      cout << "2. Exit";
      cout << endl;
      cout << endl;
      cout << "Choose an option: ";
      int n;
      cin >> n;
      cout << endl;
//
//
            if (n == 1)
            //facial recognition would pop up instead of asking for the username
            {
                              cout << "Username: ";
                              string n;
                              cin >> n;
                              cout << endl;
                              string a;
                              string b = "";
                              string c = "";
                              string d = "";
                              bool login = false;

                                          ifstream myFile("user.csv");
                                          string line;
                                            while (getline(myFile, line))
                                            {
                                              istringstream s(line);
                                              string field;
                                                  while (getline(s, field,','))
                                                  {
                                                    //cout << field << "\t";
                                                    if (field != n)
                                                    {
                                                      break;
                                                    }
                                                    else
                                                    {
                                                      login = true;
                                                      a = field;
                                                      while (getline(s, field,','))
                                                      {
                                                          if (b == "")
                                                          {
                                                            b = field;
                                                          }
                                                          else if (b != "" && c == "" && d == "")
                                                          {
                                                            c = field;
                                                          }
                                                          else
                                                          {
                                                            d = field;
                                                          }
                                                      }
                                                    }
                                                  }
                                            }
                              if (login == true){
                                            cout << "===";
                                            cout << endl;
                                            cout << endl;
                                            cout << "Welcome, you are now logged in as " << a;
                                            cout << endl;
                                            cout << endl;
                                            cout << "Information: ";
                                            cout << endl;
                                            cout << endl;
                                            cout << "Birth Date: " << b;
                                            cout << endl;
                                            cout << "Height: " << c;
                                            cout << endl;
                                            cout << "Favorite Color: " << d;
                                            cout << endl;
                                            cout << endl;

                                              bool optionStatement = true;
                                              do{

                                                cout << "===";
                                                cout << endl;
                                                cout << endl;
                                                cout << "1. Edit Information ";
                                                cout << endl;
                                                cout << "2. Logout";
                                                cout << endl;
                                                cout << endl;
                                                cout << "Choose an option : ";
                                                int option;
                                                cin >> option;
                                                cout << endl;

                                                    if (option == 1)
                                                    {
                                                      optionStatement = true;
                                                    }
                                                    else if (option == 2)
                                                    {
                                                      optionStatement = false;
                                                    }
                                              } while (optionStatement == true);

                              }
                              else
                              {
                                cout << "User could not be found!";
                                cout << endl;
                                cout << endl;
                              }
            }

            else if (n == 2)
            {
              cout << "=====================================================================";
              cout << endl;
              cout << endl;
              //All of the '==' will be used to separate the menus for easier viewing
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

              ///////////////////////////////
              //do while loop for main menu//
              //////////////////////////////
            }
    }

        else if (n == 2)
        {
            cout << "Ready to create a new user!" << endl;
            cout << "Please type in a username that is between 1 and 15 characters inclusive: ";
            cout << endl;
            cin >> name;
            while(name.length() > 15)
            {
                if(name.length() > 15)
                {
                    cout << "That username is too long!";
                    cout << endl;
                    cout << "Please type in a username that is between 1 and 15 characters inclusive: ";
                    cout << endl;
                    cin >> name;
                    cin.clear();
                }
                else
                {
                    cout << "That username is too short!";
                    cout << endl;
                    cout << "Please type in a username that is between 1 and 15 characters inclusive: ";
                    cout << endl;
                    cin >> name;
                    cin.clear();
                }

            }
            cin.clear();
            ////////////////////////////
            //checks for day of birth//
            ///////////////////////////
            cout << "Please type the day you were born";
            cout << endl;
            cout << "\tFor example, a person born on the 22nd day of the month would enter the number 22";
            cout << endl;


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

                //checks for range/odd
                n = day;

                if(n < 1 || n > 31)
                {

                    cout<< "Please enter a number that is a day of the month";
                    cout << endl;
                    cin.clear();
                    cin.ignore(1000, '\n');
                    continue;

                }

                    //double checks for decimals and leaves while with proper input
                else
                {
                    n = day;
                    false;
                    break;
                }


            }

            ///////////////////////////
            ////asks user for month////
            //////////////////////////

            cout << "Please enter the numeric value of the month you were born in";
            cout << endl;
            cout << "\tFor example, a user born in April would enter the number 4: ";
            cout << endl;
            true;
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

                n = month;

                if(n < 1 || n > 12)
                {

                    cout<< "Please enter a number that is between 1 and 12 inclusive";
                    cout << endl;
                    cin.clear();
                    cin.ignore(1000, '\n');
                    continue;

                }

                    //double checks for decimals and leaves while with proper input
                else
                {
                    n = month;
                    false;
                    break;
                }
            }

            cout << endl;


            ////////////////
            ///check year///
            ////////////////


            cout << "Please enter the year you were born in using 4 digits";
            cout << endl;
            cout << "\tFor example, a user born in 1998 would enter 1998 ";
            cout << endl;
            true;
            while(true)
            {

                cin >> year;
                //checks for letters
                if(cin.fail())
                {

                    cin.clear();
                    cin.ignore(1000, '\n');
                    cout << "Please enter the year you were born in using 4 digits" << endl;
                    continue;

                }
                //checks for decimals

                n = year;

                if(n < 1900 || n > 2016)
                {

                    if(n < 1900)
                    {
                        cout << "There's now way you can be over 116 years old!" << endl;
                        cout<< "Please enter the year you were born in using 4 digits";
                        cout << endl;
                        cin.clear();
                        cin.ignore(1000, '\n');
                        continue;
                    }
                    else
                    {
                        cout << "Are you from the future?";
                        cout << endl;
                        cout<< "Please enter the year you were born in using 4 digits";
                        cout << endl;
                        cin.clear();
                        cin.ignore(1000, '\n');
                        continue;
                    }


                }

                    //double checks for decimals and leaves while with proper input
                else
                {
                    n = year;
                    false;
                    break;
                }
            }


            //////////////////
            ///check height///
            //////////////////


            cout << "Please enter your height in feet and inches";
            cout << endl;
            cout << "\tFor example, a user who is exactly 5 feet would enter 5 for feet and 0 inches";
            cout << endl;
            true;
            while(true)
            {
                cout << "Feet: " << endl;

                cin >> feet;
                //checks for letters
                if (cin.fail()) {

                    cin.clear();
                    cin.ignore(1000, '\n');
                    cout << "Please enter your height in feet and inches" << endl;
                    continue;

                }
                //checks for decimals

                n = feet;

                if (n < 0 || n > 10) {
                    cout << "Please enter a reasonable height";
                    cout << endl;
                    cin.clear();
                    cin.ignore(1000, '\n');
                    continue;
                }

                    //double checks for decimals and leaves while with proper input
                else {
                    n = feet;
                    false;
                    break;
                }
            }
            ////////////////////////////
            ////gets inches of height///
            ///////////////////////////


            true;
            while(true)
            {
                cout << "Inches: " << endl;

                cin >> inches;
                //checks for letters
                if(cin.fail())
                {

                    cin.clear();
                    cin.ignore(1000, '\n');
                    cout << "Please enter a number that is between 0 and 11 inclusive" << endl;
                    continue;

                }
                //checks for decimals

                n = inches;

                if(n < 0 || n > 11)
                {

                    cout<< "Please enter a number that is between 0 and 11 inclusive";
                    cout << endl;
                    cin.clear();
                    cin.ignore(1000, '\n');
                    continue;

                }

                    //double checks for decimals and leaves while with proper input
                else
                {
                    n = inches;
                    false;
                    break;
                }

            }



            cout << "Please enter your gender as \"Male\", \"Female\", or \"Other\"";
            cout << endl;
            cin >> gender;
            cin.clear();
            while(true)
            {
                if(gender != "Male" && gender != "Female" && gender != "Other")
                {
                    cout << "Please enter your gender as \"Male\", \"Female\", or \"Other\"";
                    cout << endl;
                    cin >> gender;
                    cin.clear();
                }
                else
                {
                    false;
                    break;
                }
            }

            cout << endl;

            /////////////////////////
            ////asks for color//////
            ////////////////////////
            cout << "Please enter your favorite color: ";
            cout << endl;
            cin >> color;
            cin.clear();


            cout << endl;


            newUser users = newUser();

            users.writeToFile(name, day, month, year, feet, inches, gender, color);


            cout << "=====================================================================\n\n";
            cout << "Computer Vision Recognition System Acquisition Mission Menu\n\n";
            cout << "1. Login\n";
            cout << "2. Add User\n";
            cout << "3. Exit\n\n";
            cout << "===";

            cout << "Choose an option: ";
            cout << endl;

            cin >> n;
            cout << endl;

          }
    else if (n == 3)
    {
      cout << "===";
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
