#ifndef _SMARTCALC_
#define _SMARTCALC_
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_SIZE 600

typedef struct lexeme {
  char c;
  int prior;
  struct lexeme* next;
} lexeme;

typedef struct stack_n {
  char str_num[256];
  double stack[256];
  double num;
  size_t count_str_num;
  size_t count_stack;
} stack_n;


int number(char sym);
char pop(lexeme** plist);
void push(lexeme** plist, char c, int prior);
int oper_priority(char c);
void pol_add_operator(char* pol_notation, char op, size_t* index);
void pol_add_num(char* pol_notation, char* str, size_t* index, size_t i);
void push_operator(lexeme** plist, char op, char* pol_notation, size_t* index);
void polish_not(char* str, char* pol_notation);
int unary_oper(char* str, size_t index);
double mathem(double operand, char func);

double arithmetic(double a, double b, char op);
double perform_an_operation(stack_n* N, char oper_);
void push_num(stack_n* N, char* str, size_t* i);
double calculation(char* str, double x);
void parser(char* str, char* result);
int unary_pars(char* str, size_t index);

void exp_notation(char* result, size_t* j, char next_sym);
int change_func(char* str, size_t* i);

int Function(char func);
int op_and_open(char op);
int op_and_close(char op);
int Operators(char op);
int Plus_or_Minus(char op);
int Num_or_Func(char sym);
int valid(char* str);
int calculator(char* str, double* X, double* res);
void Change(char* str, char* result);

#endif  // _SMARTCALC_
