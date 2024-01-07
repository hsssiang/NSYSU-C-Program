#include <stdio.h>  
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <math.h>

int detect ( char[80] );

int main (){
	int input_i, i, ans[1000]; 
	scanf ( "%d" , &input_i );
	for ( i = 0 ; i < input_i ; i ++ ){
		char *input_c = malloc ( sizeof( char ) * 80 );										//動態配置記憶體
		fflush (stdin);																		//清空標準輸入區
		scanf ( "%s" , input_c );															//讀入字串
		ans[i] = detect ( input_c );														//傳入detect陣列，並將回傳值傳入ans中
		free ( input_c );																	//清除記憶體
	}
	for ( i = 0 ; i < input_i ; i ++ ){
		printf ( "%d\n\n" , ans[i] );														//印出答案
	}
	return 0;
}

int detect ( char input_c[80] ){
	int i, j, k, q, len = strlen( input_c ), min = 0, swi = 1;
	for ( i = len ; i > 0 ; i -- ){
		int time_counter = 0;																//歸零子字串計數器
		if ( len % i == 0 ){
			k = len / i;																	//計算有幾組子字串
			for ( j = 0 ; j < k - 1 ; j ++ ){
				int sub_counter = 0;														//歸零字元計數器
				for ( q = 0 ; q < i ; q ++){
					if ( input_c[q + (j * i)] == input_c[q + (j + 1) * i] ){
						sub_counter ++;														//計算相同字串的字元相同數
					}
				}
				if ( sub_counter == i )	time_counter ++;									//計算有幾組子字串
			}
		}
		if ( time_counter == k - 1 && time_counter != 0 )	min = i;						//更新最小子字串字元數
	}
	if ( min == 0 )	min = len;
	return min;																				//回傳字元數
}