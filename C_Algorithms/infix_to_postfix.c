#include<stdio.h>
#include<conio.h>
#define SIZE 50
int top=-1;
char stk[SIZE];
void push(char e)
{
	stk[++top]=e;
}
char pop()
{
	return stk[top--];
}
int prior(char op)
{
	if(op=='^')
	{
		return 3;
	}
	else if(op=='*' || op=='/')
	{
		return 2;
	}
	else if(op=='+' || op=='-')
	{
		return 1;
	}
	return 0;
}

void main()
{
	char infix[SIZE],postfix[SIZE];
	int i,idx=0,sp,ep;
	clrscr();
	puts("Enter the infix eq:");
	gets(infix);

	for(i=0;infix[i]!=NULL;i++)
	{
		switch(infix[i])
		{
			case '(':
				push(infix[i]); // push('(');
				break;
			case '+':
			case '-':
			case '*':
			case '/':
			case '^':
			case '$':
				sp=prior(stk[top]);    // (-*
				ep=prior(infix[i]);     // +
				while(ep<=sp)
				{
					postfix[idx++]=pop();
					sp=prior(stk[top]);
				}
				push(infix[i]);
				break;
			case ')':
				while(stk[top]!='(')
				{
					postfix[idx++]=pop();
				}
				pop();  // to discard '(' opening bracket
				break;
			default:
				postfix[idx++]=infix[i];

		}

	}
	postfix[idx]=NULL;
	printf("\nthe postfix = %s",postfix);
	getch();
}

