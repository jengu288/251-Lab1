//student.cpp to implement classes
#include "student.hpp"
#include <iostream>
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

//Conor does not know what the hell was wrong, as everything worked perfectly fine without any problems
//nothing to install. This was useless.