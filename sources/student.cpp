//student.cpp to implement classes
#include <iostream>
#include <string>
#include "includes/student.h"

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
//Function Name: checkCGPA();
//Author: Aliyah Nanji
//Date Created: September 23, 2019
//Date Update:
//Inputs: object of class student
//Outputs:  boolean value
//Purpose: Decides if GPA is a valid value
//---------------------------------------------------------

bool Student::checkCGPA(float cCgpa) {
    //TODO:Code cgpa checker, needs to be sfu 4.3 scale valid
    if (cCgpa < 0 || cCgpa > 4.3)
    {
        cout<<"you have an invalid cgpa.";
        return false;
    }
    else{
        cgpa=cCgpa;
        return true;
    }
}

//---------------------------------------------------------
//Function Name: checkreasearchScore();
//Author: Aliyah Nanji
//Date Created: September 23, 2019
//Date Update:
//Inputs: object of class student
//Outputs:  boolean value
//Purpose: Decides if research score is a valid value
//---------------------------------------------------------
bool Student::checkresearchScore(int CresearchScore) {
    //TODO: Code researchScore checker, needs to be 0-100 integers only
    if (CresearchScore < 0 || CresearchScore > 100)
    {
        cout<<"you have an invalid research score.";
        return false;
    }
    else
    {
        researchScore=CresearchScore;
        return true;
    }
}
//---------------------------------------------------------
//Function Name: Student();
//Author: Aliyah Nanji
//Date Created: September 23, 2019
//Date Update:
//Inputs:
//Outputs:
//Purpose: DEFAULT CONSTRUCTOR
//---------------------------------------------------------
//Default Constructor.
Student::Student() {

}


//TODO:Constructors
//---------------------------------------------------------
//Function Name: checkreasearchScore();
//Author: Aliyah Nanji
//Date Created: September 23, 2019
//Date Update:
//Inputs: object of class student
//Outputs:
//Purpose: CONSTRUCTOR---INITIALIZES ALL VALUES
//---------------------------------------------------------
//constructor that initializes all values. sets all the things
Student::Student(string newFirstName, string newLastName, float newCgpa, int newResearchScore) {
    firstName = newFirstName;
    lastName = newLastName;
    cgpa = newCgpa;
    researchScore = newResearchScore;
}



//---------------------------------------------------------
//Function Name: setCGPA()
//Author: Aliyah Nanji
//Date Created: September 23, 2019
//Date Update:
//Inputs: object of class student
//Outputs: void
//Purpose:sets the value cgpa to cgpa if its value is valid
//---------------------------------------------------------

//setCGPA function
void Student::setCGPA(float new_cgpa)
{
    if (checkCGPA(new_cgpa))
    {
        cgpa=new_cgpa;
    }

}

//---------------------------------------------------------
//Function Name: setReasearchScore()
//Author: Aliyah Nanji
//Date Created: September 23, 2019
//Date Update:
//Inputs: object of class student
//Outputs: void
//Purpose:sets the value researchscore to researchscore if it's value is valid
//---------------------------------------------------------

void Student::setResearchScore(int new_researchScore) {
    if (checkresearchScore(new_researchScore))
    {
        researchScore = new_researchScore;
    }

}


//Conor does not know what the hell was wrong, as everything worked perfectly fine without any problems
//nothing to install. This was useless.