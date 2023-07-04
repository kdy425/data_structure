typedef struct {
	int max;	//용량
	int num;	//현재 데이터 수
	int front;
	int rear;	//맨 끝 요소의 하나 뒤의 인덱스, 다음 요소를 넣을 위치
	int* que;	//큐의 첫 요소 포인터
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
