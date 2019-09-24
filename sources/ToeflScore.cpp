

#include "includes/ToeflScore.h"
#include "includes/InternationalStudent.h"

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
bool ToeflScore::checkScore(int newReading, int newListening, int newSpeaking, int newWriting){
    //TODO:Code ToeflScore Checker, each parameter is an int 0-30
    if (newReading<0 || newReading>30 || newListening<0 || newListening>30 ||newSpeaking<0 || newSpeaking>30||newWriting<0 || newWriting>30)
    {
        cout<<"You have an invalid parameter for your Toefl Score.";
        return false;
    } else{
        return true;
        //should this also set? i think no???
    }

}

//default constructor
ToeflScore::ToeflScore() {

}
//regular constructor
//TODO: get rid of error checking here (just delete). we have another error checking function we can call.


ToeflScore::ToeflScore(int newReading, int newListening, int newSpeaking, int newWriting)
{
   if(checkScore(newReading, newListening, newSpeaking, newWriting)) {
       reading = newReading;
       listening = newListening;
       speaking = newSpeaking;
       writing = newWriting;
   }
}

void ToeflScore::setScore(int newReading, int newListening, int newSpeaking, int newWriting) {
    if(checkScore(newReading, newListening, newSpeaking, newWriting)) {
        reading = newReading;
        listening = newListening;
        speaking = newSpeaking;
        writing = newWriting;
}