//header file student.hpp to declare your classes
#include <iostream>
#include <string>
#pragma once
using namespace std;




class Student
{
public:
    //TODO: make get and set functions for student members in one long thing for each
    //TODO: make overloaded set functions for everything able to be set
    Student(); //default constructor
    Student(string firstName, string lastName, float cgpa, int researchScore); //constructor with all parameters
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





