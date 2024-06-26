#include <stdio.h>
#include <string.h>

typedef struct {
	double p;
	double q;
} Rational;

double arithmatic_operation(double p, double q, char sign)
{
	if (sign == '+') {
		return p + q;
	}
	else if (sign == '-') {
		return p - q;
	}
	else if (sign == '*') {
		return p * q;
	}
	else if (sign == '/') {
		return p / q;
	}
	else {
		return 0;
	}
}

const char *is_equal(double p, double q)
{
	if (p == q) {
		return "Numbers are equal\n";
	}
	else {
		return "Numbers are not equal\n";
	}
}

int main()
{
	Rational r;
	double addition, subtraction, multiplication, division;
	char equalily[50];

	r.p = (double) 1/2;
	r.q = (double) 3/4;

	addition = arithmatic_operation(r.p, r.q, '+');
	subtraction = arithmatic_operation(r.p, r.q, '-');
	multiplication = arithmatic_operation(r.p, r.q, '*');
	division = arithmatic_operation(r.p, r.q, '/');
	strcpy(equalily, is_equal(r.p, r.q));

	printf("Addition result: %lf\n", addition);
	printf("Subtraction result: %lf\n", subtraction);
	printf("Multiplication result: %lf\n", multiplication);
	printf("Division result: %lf\n", division);
	printf("%s", equalily);

	return 0;
}
