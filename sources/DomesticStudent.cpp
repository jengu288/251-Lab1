//
// Created by Aliyah N on 2019-09-23.
//

#include "includes/DomesticStudent.h"

DomesticStudent::DomesticStudent(string newFirstName, string newLastName, float newCgpa, int newResearchScore,
                                 string newProvince)
        :Student(newFirstName, newLastName, newCgpa, newResearchScore)
{
    province = newProvince;

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

void DomesticStudent::setProvince(string newProvince)
{
    province=newProvince;
}