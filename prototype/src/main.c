#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

typedef struct
{
    float temperature; // in celsius
    int heartRate;     // bpm
} PatientData;


void generateMockData(PatientData *data);
void logData(PatientData *data);

int main()
{
    srand(time(NULL));
    PatientData patientData;

    // data stream
    while (1)
    {
        generateMockData(&patientData);
        logData(&patientData);
        // simulate delay
        sleep(1);
    }
    return 0;
}

void generate_data(PatientData *data)
{
    data->temperature = 36.5 + (rand() % 10) / 10.0; // random temp between 36.5 and 37.4
    data->heartRate = 60 + rand() % 40;              // Random heart rate between 60 and 100 bmp
}

void log_data(PatientData *data)
{
    printf("Temperature: %.1f °C\nHeart Rate: %d bmp\n", data->temperature, data->heartRate);
}
