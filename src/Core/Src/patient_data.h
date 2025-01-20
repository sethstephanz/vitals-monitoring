#ifndef PATIENT_DATA_H
#define PATIENT_DATA_H

typedef struct
{
    int temperature;       // in Fahrenheit
    int heartRate;           // bpm
    int oxygen_percentage; // blood oxygen percentage
} PatientData;

#endif // PATIENT_DATA_H
