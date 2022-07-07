#ifndef _3_calc_h_
#define _3_calc_h_

/**struct op - struct op
 * @op: The operator
 * @f: The function associated
 */

typedef struct op
{
	char *op;
	int (*f)(int a, int b);

} op_t;

int op_add(int a, int b);

int op_sub(int a, int b);

int mul(int a, int b);

int op_div(int a, int b);

int op_mod(int a, int b);

int (*get_op_func(char *s))(int, int);

#endif /* _3_calc_h_ */