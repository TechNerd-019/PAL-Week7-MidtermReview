//PAL Week 7 - Example 1 of Midterm Review
//Validate Basic Input
//Validate Basic Output

#include <stdio.h>

int main()
{
	//Basic Output (Memory Allocation)
	char e;
	printf("size of char = %d btyes\n", (int)sizeof(e));

	short a;
	//printf("size of short = %d bytes\n", (int)sizeof(a));

	int f;
	//printf("size of int = %d bytes\n", (int)sizeof(f));

	float g;
	//printf("size of float = %d bytes\n", (int)sizeof(g));

	double h;
	//printf("size of double = %d bytes\n", (int)sizeof(h));

	long b;
	//printf("size of long = %d bytes\n", (int)sizeof(b));

	long long c;
	//printf("size of long long = %d bytes\n", (int)sizeof(c));

	long double d;
	//printf("size of long double = %d bytes\n", (int)sizeof(d));

	//-------------------------------------------------------

	//Basic Output (Mix & Match Format Specifiers)
	
	//printf("This is the Format Specifier for a char ??? \n", e); //Char Format Specifier

	//printf("This is the Format Specifier for a short ??? \n", a); //Short Format Specifier

	//printf("This is the Format Specifier for an int ??? \n", f); //Int Format Specifier

	//printf("This is the Format Specifier for a float ??? \n", g); //Float Format Specifier

	//printf("This is the Format Specifier for a double ??? \n", h); //Double Format Specifier

	//printf("This is the Format Specifier for a long ??? \n", b); //Long Format Specifier

	//printf("This is the Format Specifier for a long long ??? \n", c); //Long long Format Specifier

	//printf("This is the Format Specifier for a long double ??? \n", d); //Long Double Format Specifier

	//-------------------------------------------------------

	//Basic Input

	int age;
	
	char first_name[20]; //What is wrong with this initialization?
	char full_name[20];

	//User Input for Age (int)
	printf("Enter age: ");
	//---?

	//User Input for First Name
	printf("Enter first name: ");
	//---?

	//User Input for Full Name (including spaces)
	printf("Enter full name: ");
	//---?

}