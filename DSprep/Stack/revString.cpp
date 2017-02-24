#include <bits/stdc++.h>
#define fl(a,b,c) for(a=b;a<c;a++)
#define MOD 1000000007
#define pb push_back

using namespace std;

struct Stack{
	int top;
	unsigned capacity;
	char* array;
};

Stack* createStack(unsigned capacity){
	Stack* stack = (struct Stack*)malloc(sizeof(Stack));
	stack->capacity = capacity;
	stack->top = -1;
	stack->array = (char*)malloc(stack->capacity * sizeof(char));
	return stack;
}

int isFull(Stack* stack){
	return stack->top == stack->capacity - 1;
}

int isEmpty(Stack* stack){
	return stack->top == - 1;
}

void push(Stack* stack, char item){
	if(isFull(stack))
		return;
	stack->array[++stack->top] = item;
}

char pop(Stack* stack){
	if(isEmpty(stack))
		return '0';
	return stack->array[stack->top--];
}

void reverse(char str[]){
	int n = strlen(str);
	Stack* stack = createStack(n);
	int i;
	for(i = 0; i < n; i++)
		push(stack,str[i]);
	for(i = 0; i < n; i++)
		str[i] = pop(stack);
}

int main()
{
	char str[] = "Gera";
	reverse(str);
	printf("Reversed %s\n",str);
	return 0;
}