#include <CUnit/Basic.h>
#include <CUnit/CUnit.h>

#include <calculator_operations.h>
#define PROJECT_NAME "function"

void test_add(void);
void test_subtract(void);
void test_multiply(void);
void test_divide(void);
void test_squareroot(void);
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
void test_squareroot(void);
void test_modulo(void);
void test_even_or_add(void);


int main() {
/* Note: Do not edit START*/
  /*Initialize and setup the Test Framework */
  if (CUE_SUCCESS != CU_initialize_registry())
    return CU_get_error();
  CU_pSuite suite = CU_add_suite(PROJECT_NAME, 0, 0);
/* Note: Do not edit END */

  CU_add_test(suite, "TEST_ADD", test_do_add);
  CU_add_test(suite, "TEST_SUBTRACT", test_do_subtract);
  CU_add_test(suite, "TEST_MULTIPLY", test_do_multiply);
  CU_add_test(suite, "TEST_DIVIDE", test_do_divide);
  CU_add_test(suite, "TEST_SQUAREROOT", test_do_squareroot);
  CU_add_test(suite, "TEST_FACTORIAL", test_do_factorial);
  CU_add_test(suite, "TEST_FAHRENHEIT_TO_CELSIUS", test_do_fahrenheit_to_celsius);
  CU_add_test(suite, "TEST_CELSIUS_TO_FAHRENHEIT", test_do_celsius_to_fahrenheit);
  CU_add_test(suite, "TEST_FAHRENHEIT_TO_KELVIN", test_do_fahrenheit_to_kelvin);
  CU_add_test(suite, "TEST_KELVIN_TO_FAHRENHEIT", test_do_kelvin_to_fahrenheit);
  CU_add_test(suite, "TEST_CELSIUS_TO_KELVIN", test_do_celsius_to_kelvin);
  CU_add_test(suite, "TEST_KELVIN_TO_CELSIUS", test_do_kelvin_to_celsius);
  CU_add_test(suite, "TEST_LOGVALUE", test_do_modulus);
  CU_add_test(suite, "TEST_LOG10VALUE", test_do_log10value);
  CU_add_test(suite, "TEST_POWER", test_do_power);
  CU_add_test(suite, "TEST_EXPONENTIAL", test_do_exponential);
  CU_add_test(suite, "TEST_SQUAREROOT", test_do_squareroot);
  CU_add_test(suite, "TEST_MODULO", test_do_modulo);
  CU_add_test(suite, "TEST_EVEN_OR_ODD", test_do_even_or_add);

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

void test_do_add(void) {
  CU_ASSERT_EQUAL(7.000, add(5,2));
  CU_ASSERT_EQUAL(10.00, add(7,3));
  CU_ASSERT_EQUAL(2000.00, add(500,1500));
}

void test_do_subtract(void) {
  CU_ASSERT_EQUAL(3.00,subtract(5,2));
  CU_ASSERT_EQUAL(4.00, subtract(7,3));
  CU_ASSERT_EQUAL(1000.00, subtract(1500,500));
}

void test_do_multiply(void) {
  CU_ASSERT_EQUAL(10.00, multiply(5,2));
  CU_ASSERT_EQUAL(21.00, multiply(7,3));
  CU_ASSERT_EQUAL(5000.00, multiply(500,10));
}

void test_do_divide(void) {
  CU_ASSERT_EQUAL(5.00, divide(10,2));
  CU_ASSERT_EQUAL(7.00, divide(7,1));
  CU_ASSERT_EQUAL(3.00, divide(1500,500));
}

void test_do_modul0(void) {
  CU_ASSERT_EQUAL(1, modulo(5,2));
  CU_ASSERT_EQUAL(3, modulo(7,4));
  CU_ASSERT_EQUAL(0, modulo(1500,500));
}

/*void test_do_factorial(void) {
  CU_ASSERT_EQUAL(120, do_fact(5));
  CU_ASSERT_EQUAL(1, do_fact(1));
  CU_ASSERT_EQUAL(6, do_fact(3));
}*/

void test_do_squareroot(void) {
  CU_ASSERT_EQUAL(5.00, squareroot(25));
  CU_ASSERT_EQUAL(7.00, do_squareroot(49));
  CU_ASSERT_EQUAL(10.00, do_squareroot(100));
}
