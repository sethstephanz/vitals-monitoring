#include <stdio.h>
#include "generate_data.h"
#include "patient_data.h"

void log_data(PatientData *data)
{
    printf("Temperature: %.1f °C\nHeart Rate: %d bmp\n", data->temperature, data->heartRate);
    if (data->temperature > 37.2)
    {
        printf("ALERT: Fever detected.\n");
    }
    if (data->heartRate > 100)
    {
        printf("ALERT: Tachycardia detected.\n");
    }
    if (data->oxygen_percentage > 80)
    {
        printf("ALERT: Low oxygen saturation detected.\n");
    }
}