#include <iostream>
#include "newUser.h"
#include <string>

using namespace std;

newUser::newUser()
{

}



void newUser::setName(string name)
{
  this->name = name;
}

string newUser::getName()
{
  return this->name;
}

void newUser ::setBirthday(int day, int month, int year)
{
  this->birthday = to_string(day) + "/" + to_string(month) + "/" + to_string(month);
}

string newUser::getBirthday()
{
  return this->birthday;
}

void newUser ::setHeight(int feet, int inches)
{
  this->height = to_string(feet) + "\'"  + to_string(inches) + "\"";
}

string newUser :: getHeight()
{
  return this->height;
}

void newUser ::setGender(string gender)
{
  this->gender = gender;
}

string newUser ::getGender()
{
  return this->gender;
}

void newUser::setColor(string color)
{
  this->color = color;
}

string newUser::getColor()
{
  return this->color;
}

int newUser::getDay()
{
  return this->day;
}

int newUser ::getMonth()
{
  return this->month;
}


void newUser::writeToFile()
{
  ofstream myfile;
  myfile.open("user.csv", ofstream :: app);
  myfile << this->name <<",";
  myfile << this->day << "/" << this->month << "/" << this->year << ",";
  myfile << this->feet << "\' " << this->inches << "\"" << ",";
  myfile << this->gender << ",";
  myfile << this->color << endl;

  myfile.close();

}

