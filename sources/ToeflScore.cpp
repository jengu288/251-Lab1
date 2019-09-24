#include <sources/includes/ToeflScore.h>
#include "InternationalStudent.h"


//
// Created by Aliyah N on 2019-09-23.
//
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
    if (reading<0 || reading>30 || listening<0 || listening>30 ||speaking<0 || speaking>30||writing<0 || writing>30)
    {
        cout<<"You have an invalid parameter for your Toefl Score.";
        exit(1);
    }
}

ToeflScore::ToeflScore() {

}

ToeflScore::ToeflScore(int reading, int listening, int speaking, int writing)
{
    if (reading<0 || listening<0 || speaking<0 || writing<0||reading>30.2||listening>30.2||speaking>30.2||writing>30.2)
    {
        cout<<"Illegal Toefl Score. ";
        exit (1);
    }
    reading=reading;
    listening=listening;
    speaking=speaking;
    writing=writing;
}