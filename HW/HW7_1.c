#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (){
	int i, j;
	char input01[100], input02[100], input03[100];
	char key_char[100] , final_char[100];
	printf ( "Decrypt files and write it in a new file:\n" );
	printf ( "__________________________________\n" );
	printf ( "Input the 1st file name：" );
	scanf ( "%s" , input01 );
	FILE *final = fopen( input01 , "r" );								//開啟fianl.txt 指定為讀取模式
	fscanf ( final, "%s" , final_char );								//讀取final.txt 存入final_char
	printf ( "Input the 2st file name：" );
	scanf ( "%s" , input02 );
	FILE *key = fopen( input02 , "r" );									//開啟key.txt 指定為讀取模式
	fscanf ( key, "%s" , key_char );									//讀取key.txt 存入key_char
	printf ( "Input the new file name where to output：" );
	scanf ( "%s" , input03);
	FILE *content = fopen( input03 , "w" );								//開啟contect.txt 指定為寫入模式
	for ( i = 0 ; i < strlen( key_char ) ; i ++ ){
		if ( key_char[i] == '@' ){										//判斷是否偵測到'@'		
			fprintf ( content , "%c" , final_char[i]);					//將答案輸出到content.txt
		}
	}
	printf ( "Enrypt into %s file successfully..!\n " , input03 );
	printf ( "\n" );
	fclose ( key );														//關閉檔案
	fclose ( final );													//關閉檔案
	fclose ( content );													//關閉檔案
	return 0;
}

