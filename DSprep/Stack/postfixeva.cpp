#include <bits/stdc++.h>
#define fl(a,b,c) for(a=b;a<c;a++)
#define MOD 1000000007
#define pb push_back

using namespace std;

struct Stack{
	int top, capacity;
	int* array;
};

Stack* createStack(int capacity){
	Stack* stack = (Stack*)malloc(sizeof(Stack));
	if(!stack)
		return NULL;
	stack->top = -1;
	stack->capacity = capacity;
	stack->array = (int*)malloc(stack->capacity * sizeof(Stack));

	if(!stack->array)
		return NULL;
	return stack;
}

int isEmpty(Stack* stack){
	return stack->top == -1;
}

char peek(Stack* stack){
	return stack->array[stack->top];
}

char pop(Stack* stack){
	if(!isEmpty(stack))
		return stack->array[stack->top--];
	else{
		return (printf("Stack Empty\n"));
		exit(0);
	}
}

void push(Stack* stack, char op){
	stack->array[++stack->top] = op;
}

int evaluatePostfix(char* exp){
	Stack* stack = createStack(strlen(exp));
	int i;
	if(!stack)
		return -1;
	for(i = 0; exp[i]; i++)
	{
		if(isdigit(exp[i]))
			push(stack, exp[i] - '0');
		else
		{
			int val1 = pop(stack);
			int val2 = pop(stack);
			switch(exp[i]){
				case '+': push(stack,val2 + val1);
				break;
				case '-': push(stack,val2 - val1);
				break;
				case '*': push(stack,val2 * val1);
				break;
				case '/': push(stack,val2 / val1);
				break;
			}
		}
	}
	return pop(stack);
}

int main()
{		
	char exp[] = "213***+9-";
	printf("%d\n", evaluatePostfix(exp));
	return 0;
}