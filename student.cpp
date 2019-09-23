//student.cpp to implement classes
#include "student.hpp"
#include <iostream>
#include <string>
using namespace std;

//---------------------------------------------------------
//Function Name: getFirstName()
//Author: Jennifer Gu
//Date Created: September 19, 2019
//Date Update:
//Inputs: object of class student
//Outputs: string firstName
//Purpose: Retrieves the firstName member of the Student Object
//---------------------------------------------------------
string Student::getFirstName() {
    return firstName;
}
//---------------------------------------------------------
//Function Name: getLastName()
//Author: Jennifer Gu
//Date Created: September 19, 2019
//Date Update:
//Inputs: object of class student
//Outputs: string lastName
//Purpose: Retrieves the lastName member of the Student Object
//---------------------------------------------------------
string Student::getLastName(){
    return lastName;
}

//---------------------------------------------------------
//Function Name: getCGPA()
//Author: Jennifer Gu
//Date Created: September 19, 2019
//Date Update:
//Inputs: object of class student
//Outputs:  float cgpa
//Purpose: Retrieves the cgpa member of the Student Object
//---------------------------------------------------------
float Student::getCGPA(){
    return cgpa;
}

//---------------------------------------------------------
//Function Name: getresearchScore()
//Author: Jennifer Gu
//Date Created: September 19, 2019
//Date Update:
//Inputs: object of class student
//Outputs:  int researchScore
//Purpose: Retrieves the researchScore member of the Student Object
//---------------------------------------------------------
int Student::getresearchScore(){

    return researchScore;
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
//Function Name: getToefl()
//Author: Jennifer Gu
//Date Created: September 19, 2019
//Date Update:
//Inputs: object of class student
//Outputs:  ToeflScore Toefl
//Purpose: Retrieves the Toefl member of the International Student Object
//---------------------------------------------------------
ToeflScore InternationalStudent::getToefl(){

    return Toefl;
}

//---------------------------------------------------------
//Function Name: getScore()
//Author: Jennifer Gu
//Date Created: September 19, 2019
//Date Update:
//Inputs: object of class student
//Outputs:  void
//Purpose: Checks if Toefl Score is valid
//---------------------------------------------------------
void ToeflScore::checkScore(){
    //TODO:Code ToeflScore Checker, each parameter is an int 0-30
}

void Student::checkCGPA() {
    //TODO:Code cgpa checker, needs to be sfu 4.3 scale valid
    if (cgpa < 0 || cgpa > 4.3){

    }
}


void Student::checkresearchScore() {
    //TODO: Code researchScore checker, needs to be 0-100 integers only
    if (researchScore < 0 || researchScore > 100){

    }
}
//Default Constructors
ToeflScore::ToeflScore() {

}

Student::Student() {

}

DomesticStudent::DomesticStudent()
:Student()
{

}

InternationalStudent::InternationalStudent()
:Student()
{

}

//TODO:Constructors
ToeflScore::ToeflScore(int reading, int listening, int speaking, int writing){

}

Student::Student(string firstName, string lastName, float cgpa, int researchScore) {
    firstName = firstName;
    lastName = lastName;
    cgpa = cgpa;
    researchScore = researchScore;
}

DomesticStudent::DomesticStudent(string firstName, string lastName, float cgpa, int researchScore, string province)
                :Student(firstName, lastName, cgpa, researchScore)
{
    province = province;

}

InternationalStudent::InternationalStudent(string firstName, string lastName, float cgpa, int reasearchScore,
                                           string country, ToeflScore Toefl) {

}

