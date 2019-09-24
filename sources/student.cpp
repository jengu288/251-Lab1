//student.cpp to implement classes
#include <iostream>
#include <string>
#include <student.h>

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
//Function Name: getCountry()
//Author: Jennifer Gu
//Date Created: September 19, 2019
//Date Update:
//Inputs: object of class student
//Outputs:  string country
//Purpose: Retrieves the country member of the International Student Object
//---------------------------------------------------------


void Student::checkCGPA() {
    //TODO:Code cgpa checker, needs to be sfu 4.3 scale valid
    if (cgpa < 0 || cgpa > 4.3)
    {
        cout<<"you have an invalid cgpa.";
        exit(1);
    }
}


void Student::checkresearchScore() {
    //TODO: Code researchScore checker, needs to be 0-100 integers only
    if (researchScore < 0 || researchScore > 100)
    {
        cout<<"you have an invalid research score.";
        exit(1);
    }
}
//Default Constructors


Student::Student() {

}




//TODO:Constructors


Student::Student(string firstName, string lastName, float cgpa, int researchScore) {
    firstName = firstName;
    lastName = lastName;
    cgpa = cgpa;
    researchScore = researchScore;
}





//Conor does not know what the hell was wrong, as everything worked perfectly fine without any problems
//nothing to install. This was useless.