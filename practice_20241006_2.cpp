// Ex. 2
/*
    Write function bmi that calculates body mass index (bmi = weight / height^2).

    Ex:
        - if bmi <= 18.5 return "Underweight"
        - if bmi <= 25.0 return "Normal"
        - if bmi <= 30.0 return "Overweight"
        - if bmi > 30 return "Obese"

*/

#include <string>

std::string bmi(double w, double h) {

    double bmi = w / (h * h);

    if (bmi <= 18.5) {
        return "Underweight";
    } else if (bmi <= 25.0) {
        return "Normal";
    } else if (bmi <= 30) {
        return "Overweight";
    } else {
        return "Obese";
    }
}

