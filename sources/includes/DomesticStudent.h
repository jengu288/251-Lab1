//
// Created by Aliyah N on 2019-09-23.
//

#include "student.h"

class DomesticStudent : public Student
{
public:
    //TODO: make get and set functions for domestic student members in one long thing for each
    //TODO: create input function to use in main to input students
    DomesticStudent();
    DomesticStudent(string firstName, string lastName, float cgpa, int researchScore,
                    string province);
    string getProvince();
    void setProvince(string newProvince);
private:
    string province;
};

