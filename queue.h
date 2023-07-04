typedef struct {
	int max;	//�뷮
	int num;	//���� ������ ��
	int front;
	int rear;	//�� �� ����� �ϳ� ���� �ε���, ���� ��Ҹ� ���� ��ġ
	int* que;	//ť�� ù ��� ������
}queue;

int init_queue(queue* q, int max);
int in_queue(queue* q, int x);
int out_queue(queue* q, int* x);
int peek(queue* q, int *x);
void clear(queue* q);
int capa_queue(queue* q);
int size(queue* q);
int is_empty(queue* q);
int is_full(queue* q);
int search(queue* q, int x);
void print(queue* q);
void terminate(queue* q);
