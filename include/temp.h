#ifndef TEMP_H
#define TEMP_H
class Temprature {
    int tempInCelcius;

    public:
    void setTemp(float celcius);
    float getTempInCelcius();
    float getTempInFarenheit();
};
#endif