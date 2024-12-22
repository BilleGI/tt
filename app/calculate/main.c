#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define MAXOP	100
#define NUMBER	'0'

int getop(char s[]);
void push(double);
double pop(void);

int main()
{
	int type;
	double op2;
	char s[MAXOP];

	while((type = getop(s)) != EOF)
	{
		switch(type)
		{
			case NUMBER:
				push(atof(s));
				break;
			case '+':
				push(pop() + pop());
				break;
			case '*':
				push(pop() * pop());
				break;
			case '-':
				op2 = pop();
				push(pop() - op2);
				break;
			case '/':
				op2 = pop();
				if(op2 != 0.0)
					push(pop() / op2);
				else
					printf("Error: zero divisor\n");
				break;
			case '%':
				op2 = pop();
				if(op2 != 0.0)
					push((int)pop() % (int) op2);
					push(fmod(pop(), op2));
				else
					printf("Error: zero divisor\n");
				break;
			case '\n':
				printf("\t%.8g\n", pop());
				break;
			default:
				printf("Error: unknow command %c\n", type);
				break;
		}
	}
	return 0;
}