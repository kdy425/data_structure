typedef struct {
	int max;	//스택 용량
	int ptr;	//스택 포인터
	int* stk;	//스택의 첫 요소에 대한 포인터
}stack;

int init_stack(stack* s, int max);
int push(stack* s, int x);
int pop(stack* s, int* x);
int peek(stack* s, int* x);
void clear(stack* s);
int capa(stack* s);	//최대 용량
int size(stack* s);	//데이터 개수
int is_empty(stack* s);
int is_full(stack* s);
int search(stack* s, int x);
void print(stack* s);
void terminate(stack* s);	//스택 종료
