//header file student.hpp to declare your classes
#include <iostream>
#include <string>
using namespace std;


class ToeflScore
{
public:
    //TODO: input function call checkScore inside
    ToeflScore();
    ToeflScore(int reading, int listening, int speaking, int writing);
private:
    void checkScore();
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
    Student();
    Student(string firstName, string lastName, float cgpa, int researchScore);
    string getFirstName();
    string getLastName();
    float getCGPA();
    int getresearchScore();
private:
    void checkCGPA();
    void checkresearchScore();

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
    DomesticStudent();
    DomesticStudent(string firstName, string lastName, float cgpa, int researchScore, string province);
    string getProvince();
private:
    string province;
};

class InternationalStudent : public Student
{
public:
        //TODO: make get and set functions for domestic student members
        //TODO: create input function to use in main to input students
        InternationalStudent();
        InternationalStudent(string firstName, string lastName, float cgpa, int reasearchScore,
                             string country, ToeflScore Toefl);
        string getCountry();
        ToeflScore getToefl();
private:
    string country;
    ToeflScore Toefl;
};

