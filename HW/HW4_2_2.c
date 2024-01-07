
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void sort ( int[10] , int );																	//宣告sort函數用來排序

int main(){
	
	//作業4.2
	int initial[10] = {1,3,6,21,4,9,12,3,16,10} , sortArry[10] = {0} ;							//宣告兩陣列（儲存隨機陣列和排序後陣列）
	int i, j, k, length ;
	printf ( "Question 4.2\n" );
    printf ( "-----------------------\n" );
	printf ( "The arry given is:\n" );
	for ( i =0 ; i < 10 ; i ++ )
	{
		printf ( "%d " , initial[i] );
	}
	printf ( "\n" );
	printf ( "The length of each subarray is: " );
	scanf  ( "%d" , &length );
	printf ( "The contigious subarray of length %d and their maximum are: " , length);
	for ( i = 0 ; i <= ( 10 - length ) ; i ++ )
	{	
		for ( j = 0 ; j < length ; j++ ){
			sortArry[j] = initial[i+j];															//複製隨機陣列到"排序陣列"
		}
		sort ( sortArry , length );																//將陣列與使用者輸入的長度讀入sort函式
		for ( j = 0 ; j < length ; j++ ){
			printf ( "%2d " , initial[i+j] );													//輸出兩位數（補零）
		}
		printf ( "---->" );
		printf ( " %2d" , sortArry[length-1] );
	}
	printf ( "\n" );
	printf ( "-----------------------\n" );
	printf ( "\n" );
    return 0;
}

void sort ( int sortArry[10] , int length ) {
	int temp , k , q;
	for ( k = 0 ; k < (length - 1) ; k ++ ){													//計算泡泡排序的迴圈數(length - 1) ~ 1次
		for ( q = 1 ; q <= length - k - 1 ; q ++ ){												//計算排序迴圈中的次數(隨機陣列數目-1) ~ 1次
			if ( sortArry[q-1] > sortArry[q] ){													//判斷是否需要排序(前面大/後面小)	
				temp = sortArry[q];																//暫存被交換數
				sortArry[q] = sortArry[q-1];													//交換大小數
				sortArry[q-1] = temp;															//讀取並儲存較小數
			}
		}
	}
	printf ( "\n" );
}