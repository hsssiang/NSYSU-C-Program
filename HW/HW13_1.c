
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <math.h>

struct node
{
	char deta;
	struct node *next;
};

struct node *head = NULL;
struct node *tail = NULL;

void push ( char );
int empty ( void );
char pop ( void );

int swi = 1;

int main (){
	int i , c = 0;
	char input, output[1000];
	printf ( "[Input](Input 0 to pop)\n" );
	scanf ( "%c" , &input );
	while ( 1 ){
		if ( input == '0' ){								//判斷是否需要pop
			output[c] = pop ( );						    //將pop值存入陣列
			c ++;
			if ( swi == 0 ){
				//printf ( "佇列已空\n" );
				break;
			}
		}
		else{
			push ( input );							        //psuh值進入stack
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

void push ( char input ){
	struct node *new_queue;
	new_queue = malloc ( sizeof(struct node) );
	new_queue -> deta = input;
	new_queue -> next = NULL;
	if ( head == NULL ){
		head = new_queue;
		tail = new_queue;
	}
	else {
		tail -> next = new_queue;
		tail = new_queue;
	}
}

char pop ( void ){
	char value;
	struct node * temp = NULL;
	empty ( );			
	temp = head;
	head = head -> next;
	value = temp -> deta;
	free ( temp );
	return value;
}


int empty (void){
	if ( head -> next == NULL ){								//檢查是否為最後一個queue
		swi = 0;
		return 1;
	}
	else return 0;
}