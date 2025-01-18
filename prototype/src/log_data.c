#include <stdio.h>
#include "generate_data.h"
#include "patient_data.h"

void log_data(PatientData *data)
{
    int normal = 1;
    printf("Temperature: %.1f °C\nHeart Rate: %d bmp\nBlood oxygen level: %.1f\n", data->temperature, data->heartRate, data->oxygen_percentage);
    // printf("Temperature: %.1f °F\n", data->temperature);
    // printf("Heart Rate: %d bmp\n", data->heartRate);
    // printf("Blood oxygen level: %.1f\n", data->oxygen_percentage);
    if (data->temperature > 98)
    {
        printf("\033[0;31mALERT\033[0m: Fever detected.\n");
        normal = 0;
    }
    if (data->heartRate > 100)
    {
        printf("\033[0;31mALERT\033[0m: Tachycardia detected.\n");
        normal = 0;
    }
    if (data->oxygen_percentage < 90)
    {
        printf("\033[0;31mALERT\033[0m: Low oxygen saturation detected.\n");
        normal = 0;
    }
    if (normal)
    {
        printf("All vitals \033[0;32mnormal\033[0m.\n");
    }
    normal = 1;
    printf("\n");
}