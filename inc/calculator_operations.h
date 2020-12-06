/**
* @file calculator_operations.h
* Calculator application with 4 mathematical operations
*
*/
#ifndef __CALCULATOR_OPERATIONS_H__
#define __CALCULATOR_OPERATIONS_H__

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/**
*  adds the operand1 and operand2 and returns the result
* @param[in] operand1
* @param[in] operand2
* @return Result of operand1 + operand2
*/
double add(double operand1, double operand2);

/**
*  subtracts the operand1, operand2 and returns the result
* @param[in] operand1
* @param[in] operand2
* @return Result of operand1 - operand2
*/
double subtract(double operand1, double operand2);

/**
*  multiply the operand1, operand2 and returns the result
* @param[in] operand1
* @param[in] operand2
* @return Result of operand1 * operand2
*/
double multiply(double operand1, double operand2);


/**
* divides the operand1 by operand2 and returns the result
* @param[in] operand1
* @param[in] operand2
* @return integer value of the operand1 / operand2
* @note returns 0 for divide by 0 error
*/
double divide(double operand1,double operand2);
double fahrenheit_to_celsius(double fahrenheit);
double celsius_to_fahrenheit(double celsius);
double fahrenheit_to_kelvin(double input1);
double kelvin_to_fahrenheit(double input1);
double celsius_to_kelvin(double input1);
double kelvin_to_celsius(double input1);
double kilometer_to_miles(double miles);
double miles_to_kilometer(double kilometer);
double kilometer_to_foot(double input1);
double foot_to_kilometer(double input1);
double miles_to_inches(double input1);
double inches_to_miles(double input1);
double logvalue(double value);
double log10value(double value);
double power(double x, double y);
double exponential(double value);
double squareroot(double value);
int modulo(int x,int y);
int even_or_odd(int value);
int fact(int);
int leap(int y);
int prime(int z);


#endif  /* #define __CALCULATOR_OPERATIONS_H__ */
