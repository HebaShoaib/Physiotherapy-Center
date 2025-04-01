#pragma once
#include <iostream> 
using namespace std;
#include <string>
class Patient
{
    int PID;   
    int PT;
    int VT;
    string type;   
    string status;
    char treatmentTypes[3]; 
    int treatmentDurations[3];
    int treatmentCount;

public:
    Patient(int id, int pt, int vt, string t);
    int getPT() const;
    int getVT() const;
    string getType() const;
    string getStatus() const;
    void printInfo();
    void addTreatment(char type, int duration);
    int getTreatmentCount() const;
    char getTreatmentType(int index) const;
    int getTreatmentDuration(int index) const;
};

