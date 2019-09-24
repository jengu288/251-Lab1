//
// Created by Aliyah N on 2019-09-23.
//

#pragma once

#include "student.h"

class ToeflScore
{
public:
    //TODO: input function call checkScore inside
    //default constructor, and constructor with all parameters
    ToeflScore(); //---default
    ToeflScore(int reading, int listening, int speaking, int writing); //--fully initializes
    void setScore(int newReading, int newListening, int newSpeaking, int newWriting);
private:
    bool checkScore(int newReading, int newListening, int newSpeaking, int newWriting);
    int reading;
    int listening;
    int speaking;
    int writing;
    int totalScore; //where does this get dealt with???
};

