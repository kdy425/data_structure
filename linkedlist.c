#pragma warning(disable:4996)
#include<stdio.h>
#include<stdlib.h>

void input(), print(), update(), delete();

struct node {
	int id;
	int value;
	struct node* next;

}*head, * tail, * ptr;

int main() {
	head = NULL;
	int index, flag = 0;
	while (flag == 0) {
		printf("1 : input 2 : print 3 : update 4 : delete 5 : exit\n");
		scanf("%d", &index);
		if (index == 1) input();
		else if (index == 2) print();
		else if (index == 3) update();
		else if (index == 4) delete();
		else if (index == 5) {
			print("exit");
			flag = 1;
		}
		else("enter again");
	}
	return 0;
}

void input() {
	int in_id, in_value;
	printf("id : , value : \n");
	scanf("%d %d", &in_id, &in_value);
	ptr = (struct node*)malloc(sizeof(struct node));
	if (head == NULL) head = ptr;
	else tail->next = ptr;
	ptr->id = in_id;
	ptr->value = in_value;
	ptr->next = NULL;
	tail = ptr;
	print();
}


void print() {
	ptr = head;
	printf("id, value : \n");
	while (ptr != NULL) {
		printf("(%d, %d)", ptr->id, ptr->value);
		ptr = ptr->next;
	}
	printf("\n");
}

void update() {
	int update_id, update_value;
	printf("id for update : \n");
	scanf("%d", &update_id);
	ptr = head;
	while (ptr != NULL) {
		if (ptr->id == update_id) {
			printf("input new value\n");
			scanf("%d", &update_value);
			ptr->value = update_value;
			print();
			return;
		}
		ptr = ptr->next;
	}
}

void delete() {
	int delete_id;
	printf("id for delete : \n");
	scanf("%d", &delete_id);
	ptr = head;
		if (ptr->id == delete_id) {//delete first node
			head = ptr->next;
			free(ptr);
			print();
			return;
	}
		struct node* tmp;
		while (ptr != NULL) {
			tail = ptr;
			ptr = ptr->next;
			if (ptr->id == delete_id) {
				tail->next = ptr->next;
				tmp = tail;
				free(ptr);
				while (tail->next != NULL) {
					tail = tmp;
					tmp = tmp->next;
				}
				print();
				return;
			}
		}
}
