#include "sensor.h"
#include "osdconfig.h"
#include <stdio.h>
#include <stdlib.h>
#include <wiringPi.h>
#include <mcp3004.h>

#define BASE 100
#define SPI_CHAN 0

float input1;

float rxVoltage(){
    wiringPiSetup();
    mcp3004Setup(BASE, SPI_CHAN);
    input1 = analogRead (BASE + 0);
    printf("%d\n", input1);
    return input1;
}