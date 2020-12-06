#include <calculator_operations.h>

double add(double operand1, double operand2)
{
    return operand1 + operand2;
}

double subtract(double operand1, double operand2)
{
    return operand1 - operand2;
}

double multiply(double operand1, double operand2)
{
    return operand1 * operand2;
}

double divide(double operand1, double operand2)
{
    double result;
    if(0 == operand2)
        return 0;
    else
        result=operand1/operand2;
        return result;
}

double fahrenheit_to_celsius(double fahrenheit)
{
    double celsius;

    celsius = (fahrenheit - 32)*5/9;
    return celsius;
}
double celsius_to_fahrenheit(double celsius)
{
    double fahrenheit;

    fahrenheit = (1.8 * celsius) + 32;
   return fahrenheit;
}
double fahrenheit_to_kelvin(double input1)
{
    double kelvin;
    kelvin= 273.5+((input1-32.0)*(5.0/9.0)) ;
    return kelvin;
}
double kelvin_to_fahrenheit(double input1)
{
    double fahrenheit;
    fahrenheit = (9.0 /5.0)*(input1-273.15)+32;
    return fahrenheit;
}
double celsius_to_kelvin(double input1)
{
    double kelvin;
    kelvin = input1+273;
    return kelvin;
}

double kelvin_to_celsius(double input1)
{

    double celsius;
    celsius = input1-273;
    return celsius;
}
double kilometer_to_miles(double kilometer)
{
    double miles;

   miles = (0.621371*kilometer);
    return miles;
}
double miles_to_kilometer(double miles)
{
    double kilometer;

   kilometer = miles * 1.609;
    return kilometer;
}
double kilometer_to_foot(double kilometer)
{
    double foot;

   foot= kilometer*3280.84;
    return foot;
}
double foot_to_kilometer(double foot)
{
    double kilometer;

   kilometer=(foot/3280.84);
    return kilometer;
}
double miles_to_inches(double miles)
{
    double inches;

   inches = (miles*63360);
    return inches;
}

double inches_to_miles(double inches)
{
    double miles;

   miles = (inches/63360);
    return miles;
}
double logvalue(double value)
{
    double result;
    result = log(value);
    return result;
}
double log10value(double value)
{
double result;
result =log10(value);
return result;
}
double power(double x, double y)
{
    double result;
     result = pow(x,y);
     return result;
}
int fact(int in1)
{
    int i,fact =1;
    if (in1 < 0)
        printf("Error! Factorial of a negative number doesn't exist.");
    else {
        for (i = 1; i <= in1; ++i) {
            fact *= i;
        }
        return fact;
    }
}

 double exponential(double value)
 {

    double result;
    result = exp(value);
    return result;
 }
 double squareroot(double value)
 {
    double result;
    result = sqrt(value);
    return result;
 }
int modulo(int x,int y)
{
    int result;
        result = x%y;
    return result;
}
int even_or_odd(int value)
{
    if(value%2 == 0)
       return 0; //for even
    else
        return 1; //for odd
    return 0;
}
int leap(int y)
{
 if((y%400==0 && y%100==0)||(y%4==0))
    return 1;
 else
    return 0;
}
int prime(int z)
{
   int d;
 
   for ( d = 2 ; d <= z - 1 ; d++ )
   { 
      if ( z%d == 0 )
     return 0;
   }
   return 1;
}
