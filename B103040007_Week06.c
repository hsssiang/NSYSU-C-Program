
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

	//實作01
	int n, i_1_1;
	printf ( "Exercise 1\n" );
	printf ( "----------------------------\n" );
	printf ( "請輸入一個次數：" );						
	scanf  ( "%d" , &n );													//讀入重複印幾次
	for ( i_1_1 = 0 ; i_1_1 < n ; i_1_1 ++ ){								//使用for迴圈重複印出 "I am Groot!"
		printf ( "I am Groot!\n" );
	}
	printf ( "----------------------------\n" );	
	printf ( "\n" );           					 

	//實作02
	int integer2_1;
	srand ( time(0) );														//使用當下的時間當參數，打亂亂數種，以防產生同樣的亂數
	printf ( "Exercise 2\n" );
	printf ( "----------------------------\n" );
	for ( integer2_1 = 0 ; integer2_1 < 5 ; integer2_1 ++ ){				//用for迴圈輸出五個亂數
		printf ( "%d\n" , ( rand() % 100 + 1 ) );							//( rand() % 99 + 1 ) 用途為輸出1-100的亂數
	}
	printf ( "----------------------------\n" );
	printf ( "\n" );    

	//實作03
	int integer3_1, i_3_1 ;
	printf ( "Exercise 3\n" );
	printf ( "----------------------------\n" );
	for ( integer3_1 = 1 ; integer3_1 < 6 ; integer3_1 ++ ){				//使用for重複印幾行
		for ( i_3_1 = 0 ; i_3_1 < integer3_1 ; i_3_1 ++ ){					//使用for重複印"＊"幾次(上限為外面for迴圈的值)
			printf ( "＊" );
		}
		printf ( "\n" );
	}
	printf ( "----------------------------\n" );		
	printf ( "\n" );   

	//實作04
	int integer4_1, i_4_1 ;
	printf ( "Exercise 4\n" );
	printf ( "----------------------------\n" );
	integer4_1 = ( rand() % 10 + 1 );										//取得第一個1-10亂數
	while ( integer4_1 != 7)												//當integer4_1不等於7時，繼續重抽
	{
		printf ( "你抽到的號碼：%d 不是7號，請重抽\n" , integer4_1 );
		integer4_1 = ( rand() % 10 + 1 );									//取得新的1-10亂數
	}
	printf ( "你抽到7號了，停止抽號碼\n" );
	printf ( "----------------------------\n" );		
	printf ( "\n" );  

	//實作05
	int rand5_1, integer5_1, i_5_1 ;
	printf ( "Exercise 5\n" );
	printf ( "----------------------------\n" );
	rand5_1 = ( rand() % 10 + 1 );											//取得第一個1-10亂數
	printf ( "抽到的亂數為%2d\n" , rand5_1 );
	for ( integer5_1 = 0 ; integer5_1 < rand5_1 ; integer5_1 ++ ){			//使用for重複印幾行
		for ( i_5_1 = 0 ; i_5_1 < rand5_1 ; i_5_1 ++ ){						//使用for重複印"＊"幾次(上限為外面for迴圈的值)
			printf ( "＊" );
		}
		printf ( "\n" );
	}
	printf ( "----------------------------\n" );		
	printf ( "\n" );  

	//實作06
	int input6_1, sum = 0;												
	printf ( "Exercise 6\n" );
	printf ( "----------------------------\n" );
	do {																	//使用do-while迴圈
		printf ( "請輸入數字：" );
		scanf  ( "%d" , &input6_1 );										//讀入整數
		sum += input6_1;													//計算總和
	}while ( input6_1 != 0 );												//檢查input6_1是不是輸入0
	printf ( "總和為：%d\n" , sum );
	printf ( "----------------------------\n" );		
	printf ( "\n" );  

    return 0;
}
