#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

#include "constants.h"
#include "generate_data.h"
#include "log_data.h"
#include "patient_data.h"

int main()
{

    PatientData patientData;

    // data stream
    while (1)
    {
        generate_data(&patientData);
        log_data(&patientData);
        // simulate delay
        sleep(1);
    }
    return 0;
}
