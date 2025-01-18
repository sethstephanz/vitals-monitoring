#ifndef PATIENT_DATA_H
#define PATIENT_DATA_H

typedef struct
{
    float temperature;       // in Fahrenheit
    int heartRate;           // bpm
    float oxygen_percentage; // blood oxygen percentage
} PatientData;

#endif // PATIENT_DATA_H
