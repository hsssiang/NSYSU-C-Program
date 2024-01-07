
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main(){

	//實作01
	char input[50] = "I am Groot";
	int i;
	printf ( "Exercise 1\n" );
	printf ( "----------------------------\n" );
	for ( i = 0 ; i < strlen (input) ; i ++ ){									 //用strlen判斷字串長度
		printf ( "第%d個字元:%c\n" , i , input[i]);								 //印出input字串中的第i個字元
	}
	printf ( "----------------------------\n" );	
	printf ( "\n" );           					 

	//實作02													
	char input_02[50];
	printf ( "Exercise 2\n" );
	printf ( "----------------------------\n" );
	printf ( "請輸入一字串：" );
	scanf  ( "%s" , input_02 );													//用scanf讀字串
	for ( i = 0 ; i < 3 ; i ++ ){
		printf ( "%s\n" , input_02 );											
	}
	printf ( "==========================\n" );
	fflush (stdin);																//清空標準輸入區
	printf ( "請輸入一字串：" );
	gets(input_02);																//用gets讀字串
	for ( i = 0 ; i < 3 ; i ++ ){
		puts(input_02);
	}
	printf ( "----------------------------\n" );
	printf ( "\n" );    

	//實作03
	char input_03[3][20];
	printf ( "Exercise 3\n" );
	printf ( "----------------------------\n" );
	printf ( "請輸入三字串：\n" );
	for ( i = 0 ; i < 3 ; i ++ ){
		scanf ( "%s" , input_03[i] );
	}
	printf ( "三字串為：" );
	for ( i = 0 ; i < 3 ; i ++ ){												//按順序印出字串
		printf ( "%s" , input_03[i] );											
		if ( i < 2 ){
			printf ( "," );
		}
	}
	printf ( "\n" ); 
	printf ( "反序為：" );
	for ( i = 2 ; i >= 0 ; i -- ){												//反序印出字串
		printf ( "%s" , input_03[i] );
		if ( i > 0 ){
			printf ( "," );
		}
	}
	printf ( "\n" ); 
	printf ( "----------------------------\n" );		
	printf ( "\n" );   

	//實作04
	char input_04 [100];
	int detect, palindrome = 0;
	printf ( "Exercise 4\n" );
	printf ( "----------------------------\n" );
	printf ( "請輸入字串(輸入0跳出):" );
	scanf ( "%s" , input_04 );
	while ( input_04[0] != '0' && input_04[strlen( input_04 ) - 1] != '0' ){	//判斷是否跳出迴圈
		detect = strlen( input_04 );											//用detect儲存字串長度
		for ( i = 0 ; i < detect / 2 ; i ++ ){
			if ( input_04[i] == input_04[detect - i - 1] ){						//檢查前後字元一樣(迴文)
				palindrome ++;													//幾算有幾個前後字元一樣
			}
		}
		if ( palindrome == ( detect / 2 )){										//如果等於字串長度除2就是迴文
			printf ( "是迴文\n" );												 
		}
		else {
			printf ( "不是迴文\n" );
		}
		palindrome = 0;
		printf ( "請輸入字串(輸入0跳出):" );
		scanf ( "%s" , input_04 );
	}											
	printf ( "----------------------------\n" );		
	printf ( "\n" );  

    return 0;
}
