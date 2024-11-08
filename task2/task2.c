#include <stdio.h>
#include <stdlib.h>

/* IMPLEMENT ME: Declare your functions here */
int add (int a, int b);
int subtract (int a, int b);
int multiply (int a, int b);
int divide (int a, int b);
void exit_program(); 


int main (void)
{
	/* IMPLEMENT ME: Insert your algorithm here */
	int a = 6, b = 3;
	char input;

	// Array of function pointers
	int (*operations[5])(int, int) = { (int(*)(int, int))add, (int(*)(int, int))subtract, (int(*)(int, int))multiply, divide, (int(*)(int, int))exit_program };
	printf("Specify the operation to perform (0 : add | 1 : subtract | 2 : Multiply | 3 : divide | 4 : exit): ");
	input = getchar();
	int index = input - '0';
	int res = operations[index](a, b);
	printf("x = %d\n",res);
	operations[4](a, b);
	return 0;
}

/* IMPLEMENT ME: Define your functions here */
int add (int a, int b) { printf ("Adding 'a' and 'b'\n"); return a + b; }

int subtract (int a, int b) { printf ("Subtracting 'a' and 'b'\n"); return a - b; }

int multiply (int a, int b) {  printf ("Multiplying 'a' and 'b'\n"); return a * b; }

int divide (int a, int b) { printf ("Dividing 'a' and 'b'\n"); return a / b; }

void exit_program () { exit(0); }
