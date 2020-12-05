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
