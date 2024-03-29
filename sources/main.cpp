//main.cpp, put your driver code here, 
//you can manipulate your class objects here
#include <iostream> //cin and cout
#include <fstream> //file processing
#include <sstream> //formatted string processing
#include <cstdlib> //atof and atoi
#include <string>
#include "includes/InternationalStudent.h"
#include "includes/DomesticStudent.h"
//#pragma  once

int main(){
    //Read the domestic-stu.txt file and exit if failed
    string line;
    ifstream domesticFile("domestic-stu.txt");
    if(!domesticFile.is_open()) {
        cout << "Unable to open file domestic-stu.txt" << endl;
        return -1;
    }

    //Read the international-stu.txt file, exits if fails
    ifstream internationalFile("international-stu.txt");
    if(!internationalFile.is_open()) {
        cout << "Unable to open file international-stu.txt" << endl;
        return -1;
    }
/*
 * Reads how many students are in the file, creates array of objects with size = #of students in file,
 * returns to beginning of file to read data
 */
//Domestic Student list creation
    int domestics = -1;
    while(getline(domesticFile,line)){
        domestics++;
    }
    domesticFile.clear();
    domesticFile.seekg(0, ios::beg);
    DomesticStudent fileDomestics[5];

//International Student list creation
    int internationals = -1;
    while(getline(internationalFile,line)){
        internationals++;
    }
    internationalFile.clear();
    internationalFile.seekg(0, ios::beg);
    InternationalStudent fileInternationals[5];

//Generates a unique student ID for each student in the combined domestic and international files
    int totalStudents = domestics + internationals;
    int idValue = 202000000;
    int idValuelist[totalStudents];
    for (int i=0; i<totalStudents; i++){
       idValue = idValue + 1;
        idValuelist[i] = idValue;
        cout << idValue << endl;
    }
//Read the first line of domestic-stu.txt, which specifies
//the file format. And then print it out to the screen
    getline(domesticFile, line);
    cout << "File format: " << line << endl;


/*Keep reading the rest of the lines in domestic-stu.txt.
 *In the example code here, I will read each data separated
 *by a comma, and then print it out to the screen.
 *In your lab assignment 1, you should use these read data
 *to initialize your DomesticStudent object. Then you can
 *use get and set functions to manipulate your object, and
 *print the object content to the screen
 */
    int stu_count = 1;
    while( getline(domesticFile, line) ) {
    /*process each line, get each field separated by a comma.
     *We use istringstream to handle it.
     *Note in this example code here, we assume the file format
     *is perfect and do NOT handle error cases. We will leave the
     *error and exception handling of file format to Lab Assignment 4
     */
        istringstream ss(line);

        string firstName, lastName, province, s_cgpa, s_researchScore;
        float cgpa;
        int researchScore;

    //get firstName separated by comma
        getline(ss, firstName, ',');

    //get lastName separated by comma
        getline(ss, lastName, ',');

    //get province separated by comma
        getline(ss, province, ',');

    //get cpga separated by comma, and convert string to float
        getline(ss, s_cgpa, ',');
        cgpa = atof(s_cgpa.c_str());

    //get researchScore separated by comma, and convert it to int
        getline(ss, s_researchScore, ',');
        researchScore = atoi(s_researchScore.c_str());

    //print the student info to the screen
        cout << "Domestic student " << stu_count << " " << firstName << " "
             << lastName << " from " << province << " province has cgpa of "
             << cgpa << ", and research score of " << researchScore << endl;

        stu_count++;
    }
DomesticStudent test("bob", "dylan", 3.4, 5, "BC");
string test1 = test.getProvince();
cout << test1 << endl <<"test";
//close your file
    domesticFile.close();

    return 0;
}
//test
