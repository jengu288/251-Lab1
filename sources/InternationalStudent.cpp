//
// Created by Aliyah N on 2019-09-23.
//
#include "includes/InternationalStudent.h"

//full constructor. deals with all parameters
InternationalStudent::InternationalStudent(string firstName, string lastName, float cgpa,
                                           int reasearchScore,
                                           string country, ToeflScore Toefl) {

}
//default constructor
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
//---------------------------------------------------------
//Function Name: setCountry()
//Author: Aliyah Nanji
//Date Created: September 23, 2019
//Date Update:
//Inputs: string with the name of new country
//Outputs:  void
//Purpose: allows for setting of the new country
//---------------------------------------------------------
void InternationalStudent::setCountry(string newCountry)
{
    country=newCountry;
};

//---------------------------------------------------------
//Function Name: setToefl()
//Author: Aliyah Nanji
//Date Created: September 23, 2019
//Date Update:
//Inputs: Toefl score with values of (new) Toefl score
//Outputs:  void
//Purpose: allows for setting of the new toefl score
//---------------------------------------------------------
void InternationalStudent::setToefl (ToeflScore newToeflScore){
    Toefl=newToeflScore;
}

//---------------------------------------------------------
//Function Name: InternationalInput()
//Author: Aliyah Nanji
//Date Created: September 23, 2019
//Date Update:
//Inputs: Toefl score with values of (new) Toefl score
//Outputs:  void
//Purpose: allows for setting of the new toefl score
//---------------------------------------------------------
void InternationalStudent::InternationalInput() {

}