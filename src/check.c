// testss
#include <check.h>

#include "smartcalc.h"

#define GREEN "\x1B[32m"
#define RED "\x1B[31m"
#define WHITE "\x1B[0m"

START_TEST(test_0) {
  double result = 0;
  double ans = 10;
  double* x = NULL;
  char str[255] = "5 +  5";
  calculator(str, x, &result);
  ck_assert_double_eq_tol(result, ans, 1e-7);
}
END_TEST

START_TEST(test_1) {
  double result = 0;
  double ans = 162;
  double* x = NULL;
  char str[255] = "4*5*2*2*2+2";
  calculator(str, x, &result);
  ck_assert_double_eq_tol(result, ans, 1e-7);
}
END_TEST

START_TEST(test_2) {
  double result = 0;
  double ans = 20;
  double* x = NULL;
  char str[255] = "150/10+5*2/2";
  calculator(str, x, &result);
  ck_assert_double_eq_tol(result, ans, 1e-7);
}
END_TEST

START_TEST(test_3) {
  double result = 0;
  double ans = 9;
  double* x = NULL;
  char str[255] = "5+5-2*3/6";
  calculator(str, x, &result);

  ck_assert_double_eq_tol(result, ans, 1e-7);
}
END_TEST

START_TEST(test_4) {
  double result = 0;
  double ans = 50;
  char str[255] = "x+x";
  double X = 25;
  double* x = &X;
  calculator(str, x, &result);
  ck_assert_double_eq_tol(result, ans, 1e-7);
}
END_TEST

START_TEST(test_5) {
  double result = 0;
  double ans = 0.362357754;
  char str[255] = "cos(10mod2.2)";
  double* x = NULL;
  calculator(str, x, &result);
  ck_assert_double_eq_tol(result, ans, 1e-7);
}
END_TEST

START_TEST(test_6) {
  double result = 0;
  double ans = 1.517427129;
  char str[255] = "sqrt(ln(10))";
  double* x = NULL;
  calculator(str, x, &result);

  ck_assert_double_eq_tol(result, ans, 1e-7);
}
END_TEST

START_TEST(test_7) {
  double result = 0;
  double ans = 0.927106563;

  char str[255] = "atan(10)+sin(10)";
  double* x = NULL;
  calculator(str, x, &result);

  ck_assert_double_eq_tol(result, ans, 1e-7);
}
END_TEST

START_TEST(test_8) {
  double result = 0;
  double ans = 1.570796326;

  char str[255] = "asin(1)";
  double* x = NULL;
  calculator(str, x, &result);

  ck_assert_double_eq_tol(result, ans, 1e-7);
}
END_TEST

START_TEST(test_9) {
  double result = 0;
  double ans = 210;

  char str[255] = "10-20*(-10)";
  double* x = NULL;
  calculator(str, x, &result);

  ck_assert_double_eq_tol(result, ans, 1e-7);
}
END_TEST

START_TEST(test_10) {
  double result = 0;
  double ans = -132.377067006;
  char str[255] =
      "1-sin(1)-sin(1)+sin(1)-cos(1)+tan(1)-(cos(1)-cos(1))-sqrt(1)-2^2/"
      "(4+1-1*23*5/4/6)/((cos(1)+cos(2))/(1+2+3))/7";
  double* x = NULL;
  calculator(str, x, &result);
  ck_assert_double_eq_tol(result, ans, 1e-7);
}
END_TEST

START_TEST(test_11) {
  double result = 0;
  double ans = 20.998589057;

  char str[255] = "ln(35)*5-log(6)+sqrt(16)";
  double* x = NULL;
  calculator(str, x, &result);

  ck_assert_double_eq_tol(result, ans, 1e-7);
}
END_TEST

START_TEST(test_12) {
  double result = 0;
  double ans = 2.35619449;
  char str[255] = "acos(10mod3)+asin(1)+atan(1)";
  double* x = NULL;
  calculator(str, x, &result);
  ck_assert_double_eq_tol(result, ans, 1e-7);
}
END_TEST

START_TEST(test_13) {
  double result = 0;
  double ans = 2.35619449;
  char str[255] = "acos(10modx)+asin(1)+atan(1)";
  double X = 3;
  double* x = &X;
  calculator(str, x, &result);
  ck_assert_double_eq_tol(result, ans, 1e-7);
}
END_TEST

START_TEST(test_14) {
  double result = 0;
  char str[255] = "log89";
  double ans = 1.94939;
  double* x = NULL;
  calculator(str, x, &result);
  ck_assert_double_eq_tol(result, ans, 1e-7);
}
END_TEST

START_TEST(test_15) {
  double result = 0;
  char str[255] = ")+ 9 *(435)";
  double* x = NULL;
  int status = 0;
  status = calculator(str, x, &result);

  ck_assert_int_eq(1, status);
}
END_TEST

START_TEST(test_16) {
  double result = 0;
  double ans = 1;
  char str[255] = "65e+3/65-999";
  double* x = NULL;
  calculator(str, x, &result);
  ck_assert_double_eq_tol(result, ans, 1e-7);
}
END_TEST

START_TEST(test_17) {
  double result = 0;
  double ans = 59;
  char str[255] = "65e-3*1000-6";
  double* x = NULL;
  calculator(str, x, &result);
  ck_assert_double_eq_tol(result, ans, 1e-7);
}
END_TEST

START_TEST(test_18) {
  double result = 0;
  char str[255] = "mod 9 - 3 * sin5";
  double* x = NULL;
  int status = 0;
  status = calculator(str, x, &result);

  ck_assert_int_eq(1, status);
}
END_TEST

START_TEST(test_19) {
  double result = 0;
  char str[255] = "* 7 + 1 * 2";
  double* x = NULL;
  int status = 0;
  status = calculator(str, x, &result);

  ck_assert_int_eq(1, status);
}
END_TEST

START_TEST(test_20) {
  double result = 0;
  char str[255] = "/ 4 + 2 * 3";
  double* x = NULL;
  int status = 0;
  status = calculator(str, x, &result);

  ck_assert_int_eq(1, status);
}
END_TEST

START_TEST(test_21) {
  double result = 0;
  char str[255] = "- * 5 + 3";
  double* x = NULL;
  int status = 0;
  status = calculator(str, x, &result);

  ck_assert_int_eq(1, status);
}
END_TEST

START_TEST(test_22) {
  double result = 0;
  char str[255] = "+ mod 56 - 2";
  double* x = NULL;
  int status = 0;
  status = calculator(str, x, &result);

  ck_assert_int_eq(1, status);
}
END_TEST

START_TEST(test_23) {
  double result = 0;
  char str[255] = "7** + 6";
  double* x = NULL;
  int status = 0;
  status = calculator(str, x, &result);

  ck_assert_int_eq(1, status);
}
END_TEST

START_TEST(test_24) {
  double result = 0;
  char str[255] = "6^/";
  double* x = NULL;
  int status = 0;
  status = calculator(str, x, &result);
  ck_assert_int_eq(1, status);
}
END_TEST

START_TEST(test_25) {
  double result = 0;
  char str[255] = "6^-*";
  double* x = NULL;
  int status = 0;
  status = calculator(str, x, &result);
  ck_assert_int_eq(1, status);
}
END_TEST

START_TEST(test_26) {
  double result = 0;
  char str[255] = "98(78)";
  double* x = NULL;
  int status = 0;
  status = calculator(str, x, &result);
  ck_assert_int_eq(1, status);
}
END_TEST

START_TEST(test_27) {
  double result = 0;
  char str[255] = "98..5+(78)";
  double* x = NULL;
  int status = 0;
  status = calculator(str, x, &result);
  ck_assert_int_eq(1, status);
}
END_TEST

START_TEST(test_28) {
  double result = 0;
  char str[255] = "nan + 5";
  double* x = NULL;
  int status = 0;
  status = calculator(str, x, &result);
  ck_assert_int_eq(1, status);
}
END_TEST

START_TEST(test_29) {
  double result = 0;
  char str[255] = "inf + 8";
  double* x = NULL;
  int status = 0;
  status = calculator(str, x, &result);
  ck_assert_int_eq(1, status);
}
END_TEST

int main() {
  Suite* calc = suite_create("Core");
  TCase* tc_core = tcase_create("Core");
  SRunner* sr = srunner_create(calc);
  int failed = 0;
  suite_add_tcase(calc, tc_core);
  tcase_add_test(tc_core, test_0);
  tcase_add_test(tc_core, test_1);
  tcase_add_test(tc_core, test_2);
  tcase_add_test(tc_core, test_3);
  tcase_add_test(tc_core, test_4);
  tcase_add_test(tc_core, test_5);
  tcase_add_test(tc_core, test_6);
  tcase_add_test(tc_core, test_7);
  tcase_add_test(tc_core, test_8);
  tcase_add_test(tc_core, test_9);
  tcase_add_test(tc_core, test_10);
  tcase_add_test(tc_core, test_11);
  tcase_add_test(tc_core, test_12);
  tcase_add_test(tc_core, test_13);
  tcase_add_test(tc_core, test_14);
  tcase_add_test(tc_core, test_15);
  tcase_add_test(tc_core, test_16);
  tcase_add_test(tc_core, test_17);
  tcase_add_test(tc_core, test_18);
  tcase_add_test(tc_core, test_19);
  tcase_add_test(tc_core, test_20);
  tcase_add_test(tc_core, test_21);
  tcase_add_test(tc_core, test_22);
  tcase_add_test(tc_core, test_23);
  tcase_add_test(tc_core, test_24);
  tcase_add_test(tc_core, test_25);
  tcase_add_test(tc_core, test_26);
  tcase_add_test(tc_core, test_27);
  tcase_add_test(tc_core, test_28);
  tcase_add_test(tc_core, test_29);

  srunner_run_all(sr, CK_ENV);
  failed = srunner_ntests_failed(sr);
  srunner_free(sr);

  if (failed == 0)
    printf(GREEN "Success\n" WHITE);
  else
    printf(RED "Failed\n" WHITE);

  failed = 0;

  return 0;
}