#include "3-calc.h"
int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
/**
 * op_add - Returns the sum of two numbers
 * @a: input number1
 * @b: input number2
 * Return: The sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - Returns the diffrence of two numbers
 * @a: input number1
 * @b: input number2
 * Return: the difference of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Returns the product of two numbers
 * @a: input number1
 * @b: input number2
 * Return: the product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Returns the quotient of two numbers
 * @a: input number1
 * @b: input number2
 * Return: The quotient of a and b
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - Returns the remainder when dividing two numbers
 * @a: input number1
 * @b: input number2
 * Return: The remainder of the division of a and b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
