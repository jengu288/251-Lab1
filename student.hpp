//header file student.hpp to declare your classes
#include <iostream>
#include <string>
using namespace std;


class ToeflScore
{
public:
private:
    int reading;
    int listening;
    int speaking;
    int writing;
    int totalScore;
};

class Student
{
public:
    //TODO: make get and set functions for student members in one long thing for each
    //TODO: make overloaded set functions for everything able to be set
    string getFirstName();
    string getLastName();
    float getCGPA();
    int getresearchScore();
private:
    string firstName;
    string lastName;
    float cgpa;
    int researchScore;
};

class DomesticStudent : public Student
{
public:
    //TODO: make get and set functions for domestic student members in one long thing for each
    //TODO: create input function to use in main to input students
    string getProvince();
private:
    string province;
};

class InternationalStudent : public Student
{
public:
        //TODO: make get and set functions for domestic student members
        //TODO: create input function to use in main to input students
        string getCountry();
        ToeflScore getToefl();
private:
    string country;
    ToeflScore Toefl;
};

