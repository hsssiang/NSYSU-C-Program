#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

void stringLength  ( char[100] , char[100] );
void equalString   ( char[100] , char[100] );
void mergeString   ( char[100] , char[100] );
void reverseString ( char[100] , char[100] );

int L1, L2 = 0;

int main (){
	char input01[100], input02[100];
	printf ( "請輸入第一個字串：" );
	scanf  ( "%s" , input01 );
	printf ( "請輸入第二個字串：" );
	scanf  ( "%s" , input02 );
	stringLength   ( input01, input02 );
	equalString    ( input01, input02 );
	mergeString    ( input01, input02 );
	reverseString  ( input01, input02 );
	return 0;
}

void stringLength  ( char input01[100] , char input02[100] ){
	while ( input01[L1] != '\0' ){
		L1 ++;																		//檢查字串結尾，計算幾個字元
	}
	printf ( "計算第一字串長度：%d\n" , L1 );
	while ( input02[L2] != '\0' ){
		L2 ++;
	}
	printf ( "計算第二字串長度：%d\n" , L2 );

}
void equalString   ( char input01[100] , char input02[100] ){
	int max, i = 0;
	if ( L1 >= L2 ) max = L1;														//判斷哪個字串較長
	else max = L2;
	while ( i != max)
	{
		if ( input01[i] == input02[i] ){											//比較字串內字元
			i ++;
		}
		else break;																	//不一樣就跳出
	}
	if ( i != max ){
		printf ( "兩個字串不相等\n" );
	}
	else printf ( "兩個字串相等\n" );
}

void mergeString   ( char input01[100] , char input02[100] ){
	int i;
	char merge[200];								
	printf ( "連接兩字串：" );
	for ( i = 0 ; i < L1; i ++ ){													//複製字元到merge字串
		merge[i] = input01[i];
		printf ( "%c" , merge[i] );									
	}	
	for ( i = 0 ; i < L2; i ++ ){													//複製字元到merge字串
		merge[i + L1] = input02[i];
		printf ( "%c" , merge[i + L1] );
	}
	printf ( "\n" );
}

void reverseString ( char input01[100] , char input02[100] ){
	int i;
	char reverse[200];
	printf ( "連接兩字串：" );
	for ( i = L2 - 1 ; i >= 0; i -- ){												//反向複製字元到reverse字串
		reverse[i] = input02[i];
		printf ( "%c" , reverse[i] );
	}
	for ( i = L1 - 1 ; i >= 0; i -- ){												//反向複製字元到reverse字串
		reverse[i] = input01[i];
		printf ( "%c" , reverse[i] );
	}
	printf ( "\n" );
}


