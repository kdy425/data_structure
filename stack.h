typedef struct {
	int max;	//���� �뷮
	int ptr;	//���� ������
	int* stk;	//������ ù ��ҿ� ���� ������
}stack;

int init_stack(stack* s, int max);
int push(stack* s, int x);
int pop(stack* s, int* x);
int peek(stack* s, int* x);
void clear(stack* s);
int capa(stack* s);	//�ִ� �뷮
int size(stack* s);	//������ ����
int is_empty(stack* s);
int is_full(stack* s);
int search(stack* s, int x);
void print(stack* s);
void terminate(stack* s);	//���� ����
