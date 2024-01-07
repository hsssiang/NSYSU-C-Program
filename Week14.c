
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

	//實作01
	int i, j, temp_1, max_1 = 0, input_1[20] ;
	printf ( "Exercise 1\n" );
	printf ( "----------------------------\n" );
	printf ( "選擇排序(大 -> 小):\n" );
	srand (time(0));
	printf ( "排序前:" );
	for ( i = 0 ; i < 20 ; i ++ ){
		input_1[i] = ( rand() % 200) + 1;							
	}
	for ( i = 0; i < 20 ; i ++ ){
        printf ( "%d " , input_1[i] );
    }
	printf ( "\n" );
	for ( i = 0 ; i < 20 ; i ++ ){
        max_1 = i;
        for ( j = i ; j < 19; j ++ ){
            if ( input_1[j + 1] > input_1[max_1] ){									//如果下一個數字大於目前最大數
                max_1 = j + 1;														//更新最大數的索引值
            }
        }
        if ( max_1 != i ){															//如果最大數的索引值有改變
            temp_1 = input_1[i];
            input_1[i] = input_1[max_1];											//交換兩數
            input_1[max_1] = temp_1;
        }
    }  
	printf ( "排序後:" ); 
    for ( i = 0; i < 20 ; i ++ ){
        printf ( "%d " , input_1[i] );
    }  
	printf ( "\n" );      
	printf ( "----------------------------\n" );	
	printf ( "\n" );           					 

	//實作02													
	int temp_2, max_2 = 0, input_2[20] ;
	printf ( "Exercise 2\n" );
	printf ( "----------------------------\n" );
	printf ( "插入排序(大 -> 小):\n" );
	printf ( "排序前:" );
	for ( i = 0 ; i < 20 ; i ++ ){
		input_2[i] = ( rand() % 200) + 1;
	}
	for ( i = 0; i < 20 ; i ++ ){
        printf ( "%d " , input_2[i] );
    }
	printf ( "\n" );
	for ( i = 1 ; i < 20 ; i ++ ){
		temp_2 = input_2[i];																//指定一個新的比較數
        for ( j = i ; j > 0 ; j -- ){
            if ( temp_2 > input_2[j - 1] ){													//若新的數大於之前的數
                input_2[j] = input_2[j-1];													//交換兩數
            }
			else {
				input_2[j] = temp_2;
				break;
			}
        }
		input_2[j] = temp_2;																//把比較數歸位
    }  
	printf ( "排序後:" ); 
    for ( i = 0; i < 20 ; i ++ ){
        printf ( "%d " , input_2[i] );
    }  
	printf ( "\n" );    
	printf ( "----------------------------\n" );
	printf ( "\n" );    

	//實作03
	int temp_3, max_3 = 0, input_3[20] ;
	printf ( "Exercise 3\n" );
	printf ( "----------------------------\n" );
	printf ( "泡泡排序(大 -> 小):\n" );
	printf ( "排序前:" );
	for ( i = 0 ; i < 20 ; i ++ ){
		input_3[i] = ( rand() % 200) + 1;
	}
	for ( i = 0; i < 20 ; i ++ ){
        printf ( "%d " , input_3[i] );
    }
	printf ( "\n" );
	for ( i = 0 ; i < 19 ; i ++ ){
        for ( j = 0 ; j < 19 - i ; j ++ ){
            if ( input_3[j] < input_3[j+1]  ){													//取兩數互相比較
				temp_3 = input_3[j];															//交換兩數
				input_3[j] = input_3[j+1];
				input_3[j+1] = temp_3;
			}
        }
    }  
	printf ( "排序後:" ); 
    for ( i = 0; i < 20 ; i ++ ){
        printf ( "%d " , input_3[i] );
    }  
	printf ( "\n" );    
	printf ( "----------------------------\n" );		
	printf ( "\n" );   

	//實作04
	int temp_4, max_4 = 0, input_4[20], detect_4, position_4[15], c_4 = 0 ;
	printf ( "Exercise 4\n" );
	printf ( "----------------------------\n" );
	printf ( "線性搜尋:\n" );
	printf ( "數列:" );
	for ( i = 0 ; i < 20 ; i ++ ){
		input_4[i] = ( rand() % 15) + 1;
	}
	for ( i = 0; i < 20 ; i ++ ){
        printf ( "%d " , input_4[i] );
    }
	printf ( "\n" );
	printf ( "搜尋數字:" );
	scanf  ( "%d" , &detect_4 );
	for ( i = 0 ; i < 19 ; i ++ ){
        if ( input_4[i] == detect_4  ){																//一個一個數去比較是否符合需搜尋的數字
			position_4[c_4] = i;																	//存位置
			c_4 ++;																					//計算有幾個位置出現
		}
    }  
	printf ( "搜尋數字在第:" ); 
    for ( i = 0; i < c_4 ; i ++ ){
        printf ( " %d " , position_4[i]+1 );
    } 
	printf ( "個位置\n" );  
	printf ( "\n" ); 
	printf ( "----------------------------\n" );		
	printf ( "\n" );  

	//實作05
	int input_5[11] = {2,5,8,12,13,18,21,29,37,49,97}, search_5, max_5, min_5, length, swi_5 = 1;
	printf ( "Exercise 5\n" );
	printf ( "----------------------------\n" );
	printf ( "二元搜尋：\n" );
	printf ( "數列:" );
	for ( i = 0; i < 11 ; i ++ ){
        printf ( "%d " , input_5[i] );
    }
	printf ( "\n" );
	printf ( "搜尋數字:" );
	scanf ( "%d" , &search_5 );
	max_5 = 10;
	min_5 = 0;
	while ( max_5 >= min_5 )																//搜尋直到max值小於min值 (搜尋結束)
	{
		length = (max_5 + min_5) / 2;														//計算中間值
		printf ( "剩餘資料：" );
		for ( i = min_5 ; i <= max_5 ; i ++){
			printf ( "%4d " , input_5[i] );
		}
		printf ( "中位數：%d、位置：%d\n" , input_5[length] , length+1 );
		if ( search_5 > input_5[length] ){
			min_5 = length + 1;																//因為搜尋值大於中位數，min要變中間值+1
		}
		else if ( search_5 < input_5[length] ){
			max_5 = length - 1;																//因為搜尋值小於中位數，max要變中間值-1
		}
		else if ( search_5 == input_5[length] ){
			printf ( "搜尋數字在第%d位置\n" ,length+1 );
			swi_5 = 0;
			break;
		}
	}
	if ( swi_5 == 1 ){
		printf ( "沒找到\n" );
	}
	
	printf ( "餘剩資料：" );
	printf ( "\n" );
	printf ( "----------------------------\n" );		
	printf ( "\n" );   

    return 0;
}
