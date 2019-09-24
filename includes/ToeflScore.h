//
// Created by Aliyah N on 2019-09-23.
//

#ifndef LAB1_DOWNLOAD_TOEFLSCORE_H
#define LAB1_DOWNLOAD_TOEFLSCORE_H

#endif //LAB1_DOWNLOAD_TOEFLSCORE_H
#pragma once

#include "student.h"

class ToeflScore
{
public:
    //TODO: input function call checkScore inside
    //default constructor, and constructor with all parameters
    ToeflScore(); //---default
    ToeflScore(int reading, int listening, int speaking, int writing); //--fully initializes
    //can i change the above line's parameters to red, write, speak and listen for clarity on whats in the private section
private:
    void checkScore();
    int reading;
    int listening;
    int speaking;
    int writing;
    int totalScore; //where does this get dealt with???
};
