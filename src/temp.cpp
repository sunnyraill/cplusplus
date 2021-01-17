#include "../include/temp.h"

void Temprature::setTemp(float celcius){
    tempInCelcius = celcius;
}

float Temprature::getTempInCelcius(){
    return tempInCelcius;
}

float Temprature::getTempInFarenheit(){
    return (tempInCelcius * (212-32) / (100-0)) + 32;
}