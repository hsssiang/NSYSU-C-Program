#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main (){
	int i, j, ch;
	char output_char, input_ch[200], detect_ch;
	srand ( time(0) );												//打亂亂數種
	FILE *output = fopen( "./output.txt" , "w" );					//開啟輸出檔
	for ( i = 0 ; i < 1000 ; i ++ ){								
		ch = rand() % 122 + 1;										//得到0-122的亂數
		while ( ch < 65 || ( ch > 90 && ch < 98 ) ){				//判斷是否符合需要的亂數
			ch = rand() % 122 + 1;									//否則重新找
		}
		output_char = ch;											//得到字母	
		fprintf ( output , "%c" , output_char ); 
		if ( i % 100 == 99 ){
			fprintf ( output , "\n" ); 								//以100個字母為一行輸出
		}
	}
	fclose ( output );												//關閉output
	printf ( "請輸入要尋找的字元:" );
	scanf ( "%c" , &detect_ch );									//輸入要尋找的字元
	while ( detect_ch != '*' ){										//判斷是否結束搜尋
		int counter = 0;
		FILE *input = fopen( "./output.txt" , "r" );				//打開搜尋檔
		for ( i = 0 ; i < 10 ; i ++ ){
			fscanf ( input , "%s\n" , input_ch );					//讀取搜尋檔
			for ( j = 0 ; j < 100 ; j ++ ){
				if ( input_ch[j] == detect_ch ){					//判斷是否有一樣的字元
					counter ++;										//計算有幾個
				}
			}
		}
		printf ( "字元'%c'一共找到：%d個字元\n" , detect_ch , counter);
		printf ( "請輸入要尋找的字元:" );
		fflush( stdin );											//清空標準輸入區
		scanf ( "%c" , &detect_ch );								//讀取新的目標
		fclose ( input );											//關閉檔案
	}
	return 0;
}

