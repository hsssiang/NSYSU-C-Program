
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void swap ( int[8] , int );												//宣告swap函式

int main(){
	int initial[8] = {1,2,3,4,5,6,7,8} ;								//宣告initial陣列，並指定陣列內容
	int i ;
	printf ( "Question 4.1\n" );
    printf ( "-----------------------\n" );
	printf ( "The arry given is:\n" );
	for ( i =0 ; i < 8 ; i ++ )
	{
		printf ( "%d " , initial[i] );
	}
	printf ( "\n" );
	for ( i =0 ; i < 8 ; i ++ )
	{
		if ( i < 8 && i % 2 == 0 ){										//判斷是陣列索引號是否為偶數以及是否小於8
			if ( initial[i+1] < initial[i] ){							//判斷是否需要交換(滿足奇數項大於偶數項)
				swap ( initial , i );									//輸入initial陣列與i到swap函式
			}
		}
		else if ( i < 8 && i % 2 != 0 ) {								//判斷是陣列索引號是否為奇數以及是否小於8
			if ( initial[i] < initial[i+1] ){							//判斷是否需要交換(滿足奇數項大於偶數項)
				swap ( initial , i );									//輸入initial陣列與i到swap函式
			}
		}
	}
	printf ( "The new arry after rearranging:\n" );
	for ( i =0 ; i < 8 ; i ++ )
	{
		printf ( "%d " , initial[i] );
	}
	printf ( "\n" );
	printf ( "-----------------------\n" );
	printf ( "\n" );
    return 0;
}

void swap ( int initial[8] , int i ) {
	int temp;															//宣告temp變數來暫存
	temp = initial[i+1];												//暫存被交換數
	initial[i+1] = initial[i];											//交換大小數
	initial[i] = temp;													//讀取並儲存較小數
}