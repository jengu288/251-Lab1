//
// Created by Aliyah N on 2019-09-23.
//

#include "includes/DomesticStudent.h"

DomesticStudent::DomesticStudent(string firstName, string lastName, float cgpa, int researchScore, string province)
        :Student(firstName, lastName, cgpa, researchScore)
{
    province = province;

}

DomesticStudent::DomesticStudent()
        :Student()
{

}
//---------------------------------------------------------
//Function Name: getProvince()
//Author: Jennifer Gu
//Date Created: September 19, 2019
//Date Update:
//Inputs: object of class student
//Outputs:  string province
//Purpose: Retrieves the province member of the Domestic Student Object
//---------------------------------------------------------
string DomesticStudent::getProvince(){

    return province;
}
