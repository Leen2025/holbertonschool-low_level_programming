#include "3-calc.h"
/**
 * get_op_func - selects thr correct function to perform the operation.
 * @s: the operator passed as argument to the program
 *
 * Return: pointer to the function corresponding to the operator, or NULL if invalid
 */
int (*get_op_func(char *s))(int, int)
{
op_t ops[] = {
{"+", op_add},
{"-", op_sub},
{"*", op_mul},
{"/", op_div},
{"%", op_mod},
{NULL, NULL}
};
int i = 0;
while (ops[i].op != NULL)
{
if (*s == *(ops[i].op))
return (ops[i].f);
i++;
}
return (NULL);
}
