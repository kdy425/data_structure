#pragma warning(disable:4996)
#include<stdio.h>
#include<stdlib.h>
#include "stack.h"

int init_stack(stack* s, int max) {
	s->ptr = 0;
	s->stk = calloc(max, sizeof(int)); 
	s->max = max;
	return 0;
}

int push(stack* s, int x) {
	if (s->ptr > s->max) return -1;
	s->stk[s->ptr++] = x;
	return 0;
}

int pop(stack* s, int* x) {
	if (s->ptr <= 0) return -1;
	*x = s->stk[--s->ptr];
	return 0;
}

int peek(stack* s, int* x) {
	if (s->ptr <= 0) return -1;
	*x = s->stk[s->ptr -1];
	return 0;
}

void clear(stack* s) {
	s->ptr = 0;
}

int capa(stack* s) {
	return s->max;
}

int size(stack* s) {
	return s->ptr;
}

int is_empty(stack* s) {
	if (s->ptr == 0) return 1;
	else return -1;
}

int is_full(stack* s) {
	if (s->ptr >= s->max) return 0;
	else return -1;
}

int search(stack* s, int x) {
	int i;
	for (i = 0; i < s->ptr - 1; i++)
		if (s->stk[i] == x)
			return x;
		else
			return -1;
}

void print(stack* s) {
	int i;
	for (i = 0; i < s->ptr - 1; i++) {
		printf("%d", s->stk[i]);
	}
	printf("\n");
}

void terminate(stack* s) {
	free(s->stk);
	s->max = s -> ptr = 0;
}




