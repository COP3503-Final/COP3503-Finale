#include <string>
#include <iostream>

#include <string>
#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <vector>
#include <sstream>
#include <iomanip>
using namespace std;

using namespace std;

class newUser
{

private:
    string name="";
    int day = 0;
    int month = 0;
    int year = 0;
    int feet = 0;
    int inches = 0;
    string height = "";
    string gender = "";
    string color = "";
    string birthday = "";

public:


    void writeToFile();

    void setName(string name);
    string getName();

    void setBirthday(int day, int month, int year);
    string getBirthday();

    int getDay();
    int getMonth();
    int getYear();

    void setHeight(int feet, int inches);
    string getHeight();

    void setGender(string gender);
    string getGender();

    void setColor(string color);
    string getColor();
};