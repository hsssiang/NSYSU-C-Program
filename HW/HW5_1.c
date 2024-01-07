
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(){
    
    int i, j, q, k;
	int max[100000] = {0};																//宣告max陣列來儲存答案							
    int counter = 1, part_counter = 1;
	int part_ccounter = 0, output_counter = 0; 
	char input[100000], det[100000];         											//宣告input字串來讀入字串，det字串來儲存要比較的陣列                              
    printf ( "Question 5.1\n" );
    printf ( "-----------------------\n" );
    scanf ( "%s" , input );																//讀入字串
    while ( input[0] != '.' ){															//使用while迴圈檢查是否輸入'.'(結束字元)
        counter = (strlen(input));														//使用strlen函式計算字串長度
        for ( i = counter - 1 ; i > 0 ; i -- ){											//使用for迴圈產生除數
            if ( counter % i == 0 ){													//如果input有子字串，那它必會被某數整除，用if迴圈搭配除數，檢查能被整除的數
				k = counter / i;														//計算可能的子字串 有幾組
                for ( j = 0 ; j < i ; j++ ){
                        det[j] = input[j];												//複製檢查字串
                    }
                for ( q = 0 ; q < (k) ; q ++ ){											//使用for迴圈計算已經檢查幾組字串
                    for ( j = 0 ; j < i ; j ++ ){										//使用for迴圈檢查字串
                        if (det[j] == input[j + q * i] ){								//檢查字串
                            part_counter ++;											//若字串相同，part_counter會加1
                        }
                    }
                    if ( part_counter != i ){											//如果part_counter和i(子字串長度)不同，跳出迴圈
                        break;
                    }
                    else {
                        part_ccounter ++;												//如果part_counter和i(子字串長度)相同，part_ccounter會加1
                    }
                    part_counter = 0;													//歸零part_counter
                }
                if ( part_ccounter == (k) && max[output_counter] < part_ccounter){		//如果part_ccounter和i(可能的子字串組數)相同 且 大於(可能的子字串組數)中最大的組數，更新最大的組數
                    max[output_counter] = part_ccounter;
                }
            }
            for ( j = 0 ; j < i ; j++ ){
                det[j] = 0;																//將det字串歸零
            }
            part_ccounter = 0;															//將part_ccounter歸零
            part_counter = 0;															//將part_counter歸零	
        }
        scanf ( "%s" , input );															//讀入新的檢查字串
        output_counter ++;																//將output_counter(輸入字串計數器)+1
    }
    for ( i = 0 ; i < output_counter ; i ++ ){
        if ( max[i] == 0 ){																//若max(最大子字串組數）為零，表示只有一組(本身)子字串
            printf ( "%d\n" , max[i] + 1 );												//印出最大子字串組數
        }
        else {
            printf ( "%d\n" , max[i] );													//印出最大子字串組數
        }
    }
    printf ( "-----------------------\n" );
    printf ( "\n" );

    return 0;
}