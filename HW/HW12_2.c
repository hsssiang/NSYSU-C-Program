
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <math.h>

struct node																			//建立結構 node 
{
	char data;
	struct node* next;
};

struct node *top = NULL;															
struct node *temp = NULL;
struct node *current = NULL;
int alphbet[27] = {0};
int alphbet_detect[27] = {0};

void push ( char );
void pop_1 ( void );
char pop_2 ( void );

int main(){
	int i, j, k, c = 0, min = 26, counter = 0;
	char input[10000], output[1000];
	printf ( "[Input]\n" );
	scanf ( "%s" , input );
	c = strlen( input );
	for ( i = 0 ; i < c ; i ++ ){
		alphbet[ input[i] - 96 ] ++;												//計算字母數量
	}
	push ( input[0] );																//push第一個字母
	alphbet[input[0] - 96] --;														//字母數量減一
	alphbet_detect[input[0] - 96] ++;												//stack中的字母數量加一
	for ( i = 1 ; i < c ; i ++ ){
		if ( top -> data > input[i] && alphbet[(top -> data) - 96] > 0 ){			//判斷(將丟入的子母)字典序是否小於(第一個stack)，且後方還有可以push的字母(第一個stack)
			while ( top != NULL ){													//判斷是否已經全部pop出
				if ( top -> data >= input[i] ){										//pop到(第一個stack)的子母字典序小於(將丟入的子母)
					alphbet_detect[(top -> data) - 96] --;							//stack中的字母數量減一
					pop_1 ();														//pop出字母
				}
				else break;
			}
			push ( input[i] );														//push進stack;
			alphbet[input[i] - 96] --;												//字母數量減一
			alphbet_detect[input[i] - 96] ++;										//stack中的字母數量加一
		}
		else if ( alphbet_detect[input[i] - 96] != 0 ){								//若stack中已含有(將丟入的子母)
			alphbet[input[i] - 96] --;												//字母數量減一
		}
		else {
			push ( input[i] );														//都不符合就push進stack
			alphbet_detect[input[i] - 96] ++;										//字母數量減一
			alphbet[input[i] - 96] --;												//stack中的字母數量加一
		}									
	}
	printf ( "[Output]\n" );
	while ( top != NULL ){
		output[counter] = pop_2();													//將輸出存入陣列
		counter ++;																	
	}
	output[counter] = '\0';
	for ( i = (strlen(output) - 1) ; i >= 0 ; i -- ){
		printf ( "%c" , output[i] );												//倒轉印出結果
	}
	printf ( "\n" );
	printf ( "\n" );
    return 0;
}

void push ( char input ){
	struct node *new;
	new = malloc ( sizeof( struct node ) );											//配置記憶體空間
	new -> data = input;															//存入輸入值
	new -> next = top;																//建立串列
	top = new;																		//更新第一個stack
}

void pop_1 ( ){
	char i;
	temp = top;																		//複製第一個stack
	top = top -> next;																//更新第一個stack
	free ( temp );																	//釋放記憶體位置
}

char pop_2 ( ){
	char i;
	temp = top;																		//複製第一個stack
	top = top -> next;																//更新第一個stack
	i = temp -> data;																//讀取原本第一個stack的值
	free ( temp );																	//釋放記憶體位置
	return i;																		//回傳
}