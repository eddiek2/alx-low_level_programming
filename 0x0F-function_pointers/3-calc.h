#ifndef CALC_H
#define CALC_H

/**
 * struct op - struct op parameter
 * @op: the operator line
 * @f: functions association to paramter
 */

typedef struct op
{
	char *op;
	int (*f)(int c, int d);
} op_t;

int op_add(int c, int d);
int op_sub(int c, int d);
int op_mul(int c, int d);
int op_div(int c, int d);
int op_mod(int c, int d);
int (*get_op_func(char *s))(int, int);

#endif
