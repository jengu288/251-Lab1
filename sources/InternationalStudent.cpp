//
// Created by Aliyah N on 2019-09-23.
//
#include "includes/InternationalStudent.h"

InternationalStudent::InternationalStudent(string firstName, string lastName, float cgpa, int reasearchScore,
                                           string country, ToeflScore Toefl) {

}
//default
InternationalStudent::InternationalStudent()
        :Student()
{

}

//---------------------------------------------------------
//Function Name: getCountry()
//Author: Jennifer Gu
//Date Created: September 19, 2019
//Date Update:
//Inputs: object of class student
//Outputs:  string country
//Purpose: Retrieves the country member of the International Student Object
//---------------------------------------------------------

string InternationalStudent::getCountry(){

    return country;
}


