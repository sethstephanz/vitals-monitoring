#ifndef PATIENT_DATA_H
#define PATIENT_DATA_H

typedef struct
{
    int temperature;       // in Fahrenheit
    int heartRate;         // bpm
    int oxygen_percentage; // blood oxygen percentage
} PatientData;
//
typedef struct {
    int user_id;
    PatientData patient_data;
} User;

#endif // PATIENT_DATA_H
