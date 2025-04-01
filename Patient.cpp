#include "Patient.h"

Patient::Patient(int id, int pt, int vt, string t)
    : PID(id), PT(pt), VT(vt), type(t), treatmentCount(0)

{
    for (int i = 0; i < 3; i++) 
    {
        treatmentTypes[i] = 'N0';  // Null character
        treatmentDurations[i] = 0;
    }
}

// Getter methods
int Patient::getPT() const
{
    return PT;

}

int Patient::getVT() const
{
    return VT;
}

string Patient::getType() const
{
        return type;
}

string Patient::getStatus() const
{
     return status; 
}

void Patient::printInfo()
{
    cout << "Patient ID: " << PID << ", Appointment Time " << PT << "visit Time " << VT
        << "Patient Type: " << type << ", treatments : ";

    for (int i = 0; i < treatmentCount; i++) 
    {
        cout << treatmentTypes[i] << "   " << treatmentDurations[i] << endl;
    }
}

void Patient::addTreatment(char type, int duration)
{
    if (treatmentCount > 3)
        cout << " Patient " << PID << " cannot have more than 3 treatments" << endl;
    for (int i = 0; i < treatmentCount; i++)
    {
        if (treatmentTypes[i] == type)
        {
            cout << "existing treatment type!" << endl;
            return;
        }
    }
        this->treatmentTypes[treatmentCount] = type;
        this->treatmentDurations[treatmentCount] = duration;
        ++treatmentCount;    
}

int Patient::getTreatmentCount() const
{
    return treatmentCount;
}

char Patient::getTreatmentType(int index) const
{
    return treatmentTypes[index];
}

int Patient::getTreatmentDuration(int index) const
{
    return treatmentDurations[index];
}


