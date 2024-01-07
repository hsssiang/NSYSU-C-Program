
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <math.h>

struct node
{
	int deta;
	struct node *next;
};

struct node *head = NULL;
struct node *tail = NULL;

struct node *head_2 = NULL;
struct node *tail_2 = NULL;

void push ( int );
void push_2 ( int );
int pop ( void );
int pop_2 ( void );
int detect ( int );

int swi = 1, target, number;

int main (){
	int input, counter = 0, time = 0, temp;
	printf ( "[Input]\n" );
	do {
		scanf ( "%d" , &input);
		push ( input );													//push入票數queue
		push_2 ( counter );												//push入編號queue
		counter ++;														//計算編號
	} while ( getchar() != '\n' );										//暫停讀入
	scanf ( "%d" , &target);											//讀入目標
	while ( swi != 0 ){
		temp = pop( );													//pop出票數
		temp --;														//票數減ㄧ
		if ( temp > 0 ){
			push ( temp );												//push入新票數
		}
		time ++;														//交易手續數加一
	}
	printf ( "[Output]\n" );
	printf ( "%d\n" , time );
	return 0;
}

void push ( int input ){
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

void push_2 ( int input ){
	struct node *new_queue_2;
	new_queue_2 = malloc ( sizeof(struct node) );
	new_queue_2 -> deta = input;
	new_queue_2 -> next = NULL;
	if ( head_2 == NULL ){
		head_2 = new_queue_2;
		tail_2 = new_queue_2;
	}
	else {
		tail_2 -> next = new_queue_2;
		tail_2 = new_queue_2;
	}
}

int pop ( void ){
	int value;
	struct node * temp = NULL;
	if ( detect( head -> deta ) ){										//判斷是否達到目標
		temp = head;
		head = head -> next;
		value = temp -> deta;
		free ( temp );
		return value;
	}
	else {
		swi = 0;
	}
	return 0;
}

int detect ( int input ){
	int temp;
	temp = pop_2();
	input --;
	if ( input == 0 && temp == target ){								//如果票數為零而且為目標
		swi = 0;														//停止程式
		return 0;
	}
	else if ( input != 0 ) {											//如果不是
		push_2 ( temp );												//push入新順序
		return 1;
	}
	else {
		return 1;
	}
}

int pop_2 ( void ){
	int value;
	struct node * temp = NULL;
	temp = head_2;
	head_2 = head_2 -> next;
	value = temp -> deta;
	free ( temp );
	return value;
}