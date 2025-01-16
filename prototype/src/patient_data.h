#ifndef PATIENT_DATA_H
#define PATIENT_DATA_H

typedef struct
{
    float temperature;       // in Celsius
    int heartRate;           // bpm
    float oxygen_percentage; // percentage
} PatientData;

#endif // PATIENT_DATA_H