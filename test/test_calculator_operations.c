#include <CUnit/Basic.h>
#include <CUnit/CUnit.h>

#include "calculator_operations.h"
#define PROJECT_NAME "calculator_operations"

void test_add(void);
void test_subtract(void);
void test_multiply(void);
void test_divide(void);
void test_squareroot(void);
void test_modulo(void);
void test_factorial(void);
void test_fahrenheit_to_celsius(void);
void test_celsius_to_fahrenheit(void);
void test_fahrenheit_to_kelvin(void);
void test_kelvin_to_fahrenheit(void);
void test_celsius_to_kelvin(void);
void test_kelvin_to_celsius(void);
void test_logvalue(void);
void test_log10value(void);
void test_power(void);
void test_exponential(void);
void test_even_or_odd(void);


int main() {
/* Note: Do not edit START*/
  /*Initialize and setup the Test Framework */
  if (CUE_SUCCESS != CU_initialize_registry())
    return CU_get_error();
  CU_pSuite suite = CU_add_suite(PROJECT_NAME, 0, 0);
/* Note: Do not edit END */

  CU_add_test(suite, "TEST_ADD", test_add);
  CU_add_test(suite, "TEST_SUBTRACT", test_subtract);
  CU_add_test(suite, "TEST_MULTIPLY", test_multiply);
  CU_add_test(suite, "TEST_DIVIDE", test_divide);
  CU_add_test(suite, "TEST_SQUAREROOT", test_squareroot);
  CU_add_test(suite, "TEST_FACTORIAL", test_factorial);
  CU_add_test(suite, "TEST_FAHRENHEIT_TO_CELSIUS", test_fahrenheit_to_celsius);
  CU_add_test(suite, "TEST_CELSIUS_TO_FAHRENHEIT", test_celsius_to_fahrenheit);
  CU_add_test(suite, "TEST_FAHRENHEIT_TO_KELVIN", test_fahrenheit_to_kelvin);
  CU_add_test(suite, "TEST_KELVIN_TO_FAHRENHEIT", test_kelvin_to_fahrenheit);
  CU_add_test(suite, "TEST_CELSIUS_TO_KELVIN", test_celsius_to_kelvin);
  CU_add_test(suite, "TEST_KELVIN_TO_CELSIUS", test_kelvin_to_celsius);
  CU_add_test(suite, "TEST_LOGVALUE", test_logvalue);
  CU_add_test(suite, "TEST_LOG10VALUE", test_log10value);
  CU_add_test(suite, "TEST_POWER", test_power);
  CU_add_test(suite, "TEST_EXPONENTIAL", test_exponential);
  CU_add_test(suite, "TEST_EVEN_OR_ODD", test_even_or_odd);
  CU_add_test(suite, "TEST_MODULO", test_modulo);

/* Note: Do not edit START*/
  /* Setup Test Framework to output the result to Screen */
  CU_basic_set_mode(CU_BRM_VERBOSE);

  /* run the unit test framework*/
  CU_basic_run_tests();

  /* Cleaning the Resources used by Unit test framework */
  CU_cleanup_registry();
/* Note: Do not edit END */
  return 0;
}

//-------------------------------------------------------ARITHEMETIC OPERATIONS----------------------------------------------

void test_add(void) {
  CU_ASSERT_EQUAL(7.000, add(5,2));
  CU_ASSERT_EQUAL(10.00, add(7,3));
  CU_ASSERT_EQUAL(2000.00, add(500,1500));
}

void test_subtract(void) {
  CU_ASSERT_EQUAL(3.00,subtract(5,2));
  CU_ASSERT_EQUAL(4.00, subtract(7,3));
  CU_ASSERT_EQUAL(1000.00, subtract(1500,500));
}

void test_multiply(void) {
  CU_ASSERT_EQUAL(10.00, multiply(5,2));
  CU_ASSERT_EQUAL(21.00, multiply(7,3));
  CU_ASSERT_EQUAL(5000.00, multiply(500,10));
}

void test_divide(void) {
  CU_ASSERT_EQUAL(5.00, divide(10,2));
  CU_ASSERT_EQUAL(7.00, divide(7,1));
  CU_ASSERT_EQUAL(3.00, divide(1500,500));
}

void test_modulo(void) {
  CU_ASSERT_EQUAL(1, modulo(5,2));
  CU_ASSERT_EQUAL(3, modulo(7,4));
  CU_ASSERT_EQUAL(0, modulo(1500,500));
}

void test_factorial(void) {
  CU_ASSERT_EQUAL(120, fact(5));
  CU_ASSERT_EQUAL(1, fact(1));
  CU_ASSERT_EQUAL(6, fact(3));
}

void test_squareroot(void) {
  CU_ASSERT_EQUAL(5.00, squareroot(25));
  CU_ASSERT_EQUAL(7.00, squareroot(49));
  CU_ASSERT_EQUAL(10.00, squareroot(100));
}
void test_fahrenheit_to_celsius(void)
{
  CU_ASSERT_DOUBLE_EQUAL(37.7778,fahrenheit_to_celsius(100),3);
  CU_ASSERT_DOUBLE_EQUAL(23.8889,fahrenheit_to_celsius(75),3);
  CU_ASSERT_DOUBLE_EQUAL(43.3333,fahrenheit_to_celsius(110),3);
}
void test_celsius_to_fahrenheit(void)
{
  CU_ASSERT_DOUBLE_EQUAL(93.2,celsius_to_fahrenheit(34),3);
  CU_ASSERT_DOUBLE_EQUAL(170.6,celsius_to_fahrenheit(77),3);
  CU_ASSERT_DOUBLE_EQUAL(127.4,celsius_to_fahrenheit(53),3);
}
void test_fahrenheit_to_kelvin(void)
{
  CU_ASSERT_DOUBLE_EQUAL(298.706,fahrenheit_to_kelvin(78),3);
  CU_ASSERT_DOUBLE_EQUAL(286.483,fahrenheit_to_kelvin(56),3);
  CU_ASSERT_DOUBLE_EQUAL(280.372,fahrenheit_to_kelvin(45),3);
}
void test_kelvin_to_fahrenheit(void)
{
  CU_ASSERT_DOUBLE_EQUAL(78,kelvin_to_fahrenheit(298.706),3);
  CU_ASSERT_DOUBLE_EQUAL(56,kelvin_to_fahrenheit(286.483),3);
  CU_ASSERT_DOUBLE_EQUAL(45,kelvin_to_fahrenheit(280.372),3);
}
void test_celsius_to_kelvin(void)
{
  CU_ASSERT_DOUBLE_EQUAL(318.15,celsius_to_kelvin(45),3);
  CU_ASSERT_DOUBLE_EQUAL(309.15,celsius_to_kelvin(36),3);
  CU_ASSERT_DOUBLE_EQUAL(289.15,celsius_to_kelvin(16),3);
}
void test_kelvin_to_celsius(void)
{
  CU_ASSERT_DOUBLE_EQUAL(45,kelvin_to_celsius(318.15),3);
  CU_ASSERT_DOUBLE_EQUAL(36,kelvin_to_celsius(309.15),3);
  CU_ASSERT_DOUBLE_EQUAL(16,kelvin_to_celsius(289.15),3);
}
void test_power(void)
{
  CU_ASSERT_EQUAL(25, power(5,2));
  CU_ASSERT_EQUAL(343, power(7,3));
  CU_ASSERT_EQUAL(125000, power(50,3));
}
void test_exponential(void)
{
  CU_ASSERT_DOUBLE_EQUAL(90.017,exp(4.5),1);
  CU_ASSERT_DOUBLE_EQUAL(812.405,exp(6.7),1);
  CU_ASSERT_DOUBLE_EQUAL(9.025,exp(2.2),1);
}
void test_even_or_odd(void)
{
  CU_ASSERT_EQUAL(1, even_or_odd(25));
  CU_ASSERT_NOT_EQUAL(0, even_or_odd(49));
  CU_ASSERT_EQUAL(0, even_or_odd(100));
}
void test_log10value(void)
{
  CU_ASSERT_DOUBLE_EQUAL(0.7781, log10value(6),0.5);
  CU_ASSERT_DOUBLE_EQUAL(0.6020, log10value(4),0.5);
  CU_ASSERT_DOUBLE_EQUAL(0.9030, log10value(8),0.5);
}
void test_logvalue(void) {
  CU_ASSERT_DOUBLE_EQUAL(3.2188, logvalue(25),0.5);
  CU_ASSERT_DOUBLE_EQUAL(3.891, logvalue(49),0.5);
  CU_ASSERT_DOUBLE_EQUAL(4.6051, logvalue(100),0.5);
}
  
