#pragma warning(disable : 4996)
#include<stdio.h>
#include<stdlib.h>
#include "queue.h"

int init_queue(queue* q, int max) {
	q->front = q->rear = q->num = 0;
	q->que = calloc(max, sizeof(int));
	q->max = max;
	return 0;
}

int in_queue(queue* q, int x) {
	if (q->num >= q->max) return -1;
	else {
		q->num++;
		q->que[q->rear++] = x;
		if (q->rear == q->max) q->rear = 0;
		return 0;
	}
}

int out_queue(queue* q, int* x) {
	if (q->num == 0) return -1;
	else {
		q->num--;
		*x = q->que[q->front++];
		if (q->front >= q->max) q->front = 0;
		return 0;
	}
}

int peek(queue* q, int* x) {
	if (q->num == 0) return -1;
	*x = q->que[q->front];
	return 0;
}

void clear(queue* q) {
	q->num = q->front = q->rear = 0;
}

int capa_queue(queue* q) {
	return q->max;
}

int size(queue* q) {
	return q->num;
}

int is_empty(queue* q) {
	return q->num <= 0;
}

int is_full(queue* q) {
	return q->num >= q->max;
}

int search(queue* q, int x) {
	int i;
	int index;
	if (q->num == 0) return -1;
	else {
		for (i = 0; i < q->num; i++) {
			index = (i + q->front) % q->max;
			if (q->que[index] == x)
				return index;
		}
	}
	return -1;
}

void print(queue* q) {
	int i;
	for (i = 0; i < q->num; i++) {
		printf("%d ", q->que[(i + q->front) % q->max]);
	}
}

void terminate(queue* q) {
	q->max = q->num = q->front = q->rear = 0;
	free(q->que);
}