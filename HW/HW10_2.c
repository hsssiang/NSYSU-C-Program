
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <math.h>

double rounding ( double );

int main(){
	int people, i, j, counter = 0;
	double remain[1010] = {0};
	scanf ( "%d" , &people );
	while ( people != 0 ){
		int c_B = 0, c_L = 0;
		double money[1010] = {0};
		double subtract[1010] = {0}, subtract_c[1010] = {0},subtract_c2[1010] = {0};
		double remain_m = 0, remain_l = 0, ave, sum = 0, max, min, swi = 1;
		for ( i = 0 ; i < people ; i ++ ){
			scanf ( "%lf" , &money[i] );									
			sum += money[i];
		}
		ave = sum / people;
		ave = rounding ( ave );
		max = money[0];
		min = money[0];
		for ( i = 0 ; i < people ; i ++ ){
			if ( money[i] > ave ){																//計算離均差
				subtract[i] = rounding ( money[i] - ave );
				subtract_c[i] = rounding ( money[i] - ave );
				subtract_c2[i] = rounding ( money[i] - ave );
				c_B ++;
				if ( max < money[i] ){
					max = money[i];																//找出最大值
				}
			}
			else if ( money[i] < ave ){															//計算離均差
				subtract[i] = rounding ( ave - money[i] );
				subtract_c[i] = rounding ( ave - money[i] );	
				subtract_c2[i] = rounding ( ave - money[i] );
				c_L ++;
				if ( min > money[i] ){
					min = money[i];																//找出最小值
				}
			}
		}
		if ( min == ave || max == ave ){														//處理特殊狀況
			swi = 0;
			remain[counter] = ave;
		}
		int index = -1;
		for ( i = 0 ; i < c_B && swi == 1 ; i ++ ){
			int min = 99999999;
			for ( j = 0 ; j < people ; j ++ ){
				if ( money[j] >= ave ){
					if ( subtract_c[j] < min && j != index && subtract_c[j] != 0 ){				//找出解答（由較大值去減）
						min = subtract[j];
						index = j;
						subtract_c[j] = 99999999;
						break;
					}
				}
			}
			remain_m += subtract[index];
		}
		index = -1;
		for ( i = 0 ; i < c_L && swi == 1 ; i ++ ){
			int min = 99999999;
			for ( j = 0 ; j < people ; j ++ ){
				if ( money[j] < ave ){										
					if ( subtract_c2[j] < min && index != j && subtract_c2[j] != 0 ){			//找出解答（由較小值去加）
						min = subtract[j];
						index = j;
						subtract_c2[j] = 99999999;
						break;
					}
				}
			}
			remain_l += subtract[index];
			min = 99999999;
		}
		if ( remain_l > remain_m && swi == 1 )	remain[counter] = remain_m;						//判斷兩答案大小（取小數）
		else if ( remain_l < remain_m && swi == 1)	remain[counter] = remain_l;
		else if ( swi == 1 )remain[counter] = remain_l;
		scanf ( "%d" , &people );
		counter ++;
	}
	printf ( "\n" );
	for ( i = 0 ; i < counter ; i ++ )	printf ( "$%.2lf\n", remain[i] );
    return 0;
}

double rounding ( double input ){																//四捨五入函式
	int temp;
	temp = (input * 10000) / 10;
	if ( temp % 10 > 5 ){
		input = temp / 10 + 1;
		input = input / 100.0; 
	}
	else {
		temp -= temp % 10 ;
		input = temp / 1000.0;
	}
	return input;
}
