// <8 kyu>

// Write function bmi that calculates body mass index (bmi = weight / height2).

// if bmi <= 18.5 return "Underweight"

// if bmi <= 25.0 return "Normal"

// if bmi <= 30.0 return "Overweight"

// if bmi > 30 return "Obese"

#include <string>

using namespace std;
string bmi(double w, double h) 
{
  double bmi=w/(h*h);
  return (bmi<=18.5)?"Underweight":(bmi<=25.0)?"Normal":(bmi<=30.0)?"Overweight":"Obese";
}