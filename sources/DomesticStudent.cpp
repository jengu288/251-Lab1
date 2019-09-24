//
// Created by Aliyah N on 2019-09-23.
//

#include "includes/DomesticStudent.h"
//fully defined. manages all parameters
DomesticStudent::DomesticStudent(string newFirstName, string newLastName, float newCgpa, int newResearchScore,
                                 string newProvince)
        :Student(newFirstName, newLastName, newCgpa, newResearchScore)
{
    province = newProvince;

}
//default
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
//---------------------------------------------------------
//Function Name: newProvince()
//Author: Aliyah Nanji
//Date Created: September 23, 2019
//Date Update:
//Inputs: object of class student
//Outputs:  void
//Purpose: allows you to set province value
//---------------------------------------------------------
void DomesticStudent::setProvince(string newProvince)
{
    province=newProvince;
}