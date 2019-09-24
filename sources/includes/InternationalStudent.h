//
// Created by Aliyah N on 2019-09-23.
//

#ifndef LAB1_DOWNLOAD_INTERNATIONALSTUDENT_H
#define LAB1_DOWNLOAD_INTERNATIONALSTUDENT_H

#endif //LAB1_DOWNLOAD_INTERNATIONALSTUDENT_H
#pragma once

#include "student.h"
#include "ToeflScore.h"

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