#include<stdio.h>
#include<stdlib.h>
#pragma warning(disable:4996)

int bin_search(int a[], int n, int key) {
	int first = 0;
	int last = n - 1;

	do {
		int mid = (first + last) / 2;
		if (a[mid] == key) return mid;
		else if (a[mid] < key) first = mid + 1;
		else last = mid - 1;
	} while (first <= last);

	return -1;
}
int main() {
	int num;
	int key;

	printf("°³¼ö : ");
	scanf("%d", &num);
	printf("Å° :");
	scanf("%d", &key);

	int* a = calloc(num, sizeof(int));
	for (int i = 0; i < num; i++) {
		scanf("%d", &a[i]);
	}
	printf("%d",bin_search(a, num, key));
}