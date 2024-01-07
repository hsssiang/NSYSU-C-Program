
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <math.h>

struct node													//建立結構 node 
{
	char data;												
	struct node* next;
};

struct node *top = NULL;
int swi = 1;

int  empty (struct node* top);
char pop (struct node *top);
void push (struct node *top , char input);

int main(){
	int i , c = 0;
	char input, output[1000];
	printf ( "[Input](Input 0 to pop)\n" );
	scanf ( "%c" , &input );
	while ( 1 ){
		if ( input == '0' ){								//判斷是否需要pop
			output[c] = pop ( top );						//將pop值存入陣列
			c ++;
			if ( swi == 0 ){
				//printf ( "堆疊已空\n" );
				break;
			}
		}
		else{
			push ( top , input );							//psuh值進入stack
		}
		fflush ( stdin );
		scanf ( "%c" , &input );							//讀取下一個輸入值
	}
	printf ( "\n" );
	printf ( "[Output]\n" );
	for ( i = 0 ; i < c ; i ++ ){
		printf ( "%c\n" , output[i] );						//印出輸出值
	}
	printf ( "\n" );
    return 0;
}

void push (struct node *head, char input){
	struct node *new;
	new = malloc ( sizeof( struct node ) );					//配置記憶體空間
	new -> data = input;									//存入輸入值
	new -> next = head;										//建立串列
	top = new;												//更新第一個stack
}

char pop (struct node *head){
	struct node *temp;
	char i;
	empty ( head );											//檢查stack是否為空
	temp = head;											//複製第一個stack
	top = top -> next;										//更新第一個stack
	i = temp -> data;										//讀取原本第一個stack的值
	free ( temp );											//釋放記憶體位置
	return i;												//回傳
}

int empty (struct node* top){
	if ( top -> next == NULL ){								//檢查是否為最後一個stack
		swi = 0;
		return 1;
	}
	else return 0;
}