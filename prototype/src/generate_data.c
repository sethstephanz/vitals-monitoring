#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
#include "patient_data.h"
#include "constants.h"

void generate_data(PatientData *data)
{
    // data->temperature = TEMP_MIN + (rand() % 10) / 10.0; // random temp between 36.5 and 37.4
    // data->heartRate = HEARTRATE_MIN + rand() % 40;       // Random heart rate between 55 and 120 bmp
    // data->oxygen_percentage = OX_MIN + (rand() % 21);    // o2 saturation level between 80 and 100%

    // random temp between 36.5 and 37.4
    data->temperature = TEMP_MIN + rand() % (TEMP_MAX - TEMP_MIN + 1);
    data->heartRate = HEARTRATE_MIN + rand() % (HEARTRATE_MAX - HEARTRATE_MIN + 1);
    data->oxygen_percentage = OX_MIN + (rand() % 21); // o2 saturation level between 80 and 100%
}
