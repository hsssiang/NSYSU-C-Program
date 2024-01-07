
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <math.h>

struct node
{
	char data;
	struct node* next;
};

struct node *top = NULL;
struct node *temp = NULL;
struct node *current = NULL;
int swi = 1;
int alphbet[27] = {0};
int alphbet_detect[27] = {0};

int  empty (struct node* top);
void pop ( void );
void push ( char );
void print ( void );
void print_array ( void );
void print_array_2 ( void );

int main(){
	int i, j, k, c = 0, min = 26, counter = 0;
	char input[10000], output[1000], push_stack[1000], pop_stack[1000], temp_pop;
	printf ( "[Input]\n" );
	scanf ( "%s" , input );
	c = strlen( input );
	push_stack[c] = '\0';
	for ( i = 0 ; i < c ; i ++ ){
		push_stack[c - i - 1] = input[i];
		alphbet[ input[i] - 96 ] ++;
	}
	push ( input[0] );
	alphbet[input[0] - 96] --;
	alphbet_detect[input[0] - 96] ++;
	print_array ();
	printf ( "\n" );
	print_array_2 ();
	print ( );
	for ( i = 1 ; i < c ; i ++ ){
		printf ( "{{%C}}\n" , input[i] );
		//printf ( "%c\n" , top -> data );
		if ( top -> data > input[i] && alphbet[(top -> data) - 96] > 0 ){
			print ( );
			while ( top != NULL ){
				if ( top -> data >= input[i] ){
					alphbet_detect[(top -> data) - 96] --;
					pop ();
				}
				else break;
			}
			push ( input[i] );
			alphbet[input[i] - 96] --;
			alphbet_detect[input[i] - 96] ++;
			printf ( "POP_array\n" );
			print_array ();
			printf ( "\n" );
			printf ( "POP_array_2\n" );
			print_array_2 ();
			printf ( "POP" );
			print ( );
		}
		else if ( alphbet_detect[input[i] - 96] != 0 ){
			alphbet[input[i] - 96] --;
			printf ( "array_1\n" );
			print_array ();
			printf ( "\n" );
			print_array_2 ();
		}
		else {
			push ( input[i] );
			alphbet_detect[input[i] - 96] ++;
			alphbet[input[i] - 96] --;
			printf ( "PUSH_array\n" );
			print_array ();
			printf ( "\n" );
			printf ( "PUSH_array_2\n" );
			print_array_2 ();
			printf ( "PUSH" );
			print ( );
		}
		printf ( "___END___\n" );
	}
	printf ( "\n" );
	printf ( "[Output]\n" );
	print ();
	printf ( "\n" );
    return 0;
}

void print ( void ){
	struct node *current = top;\
	while ( current != NULL ){
		printf ( "(%c) " , current -> data );
		current = current -> next;
	}
	printf ( "\n" );
}

void print_array ( void ){
	int i;
	for ( i = 1 ; i < 27 ; i ++ ){
		if ( alphbet[i] != 0 ){
			printf ( "(%c) %d\n" , i+96 , alphbet[i] );
		}
	}
}

void print_array_2 ( void ){
	int i;
	for ( i = 1 ; i < 27 ; i ++ ){
		if ( alphbet_detect[i] != 0 ){
			printf ( "(%c) %d\n" , i+96 , alphbet_detect[i] );
		}
	}
}

void push ( char input ){
	struct node *new;
	new = malloc ( sizeof( struct node ) );
	new -> data = input;
	new -> next = top;
	top = new;
}

void pop ( ){
	char i;
	temp = top;
	top = top -> next;
	free ( temp );
}