
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

	//實作01
	int integer1_1 , one[5] = {1,14,5,9,10};                                                    //宣告一維陣列並指定內容
	printf ( "Exercise 1\n" );
	printf ( "----------------------------\n" );
	for ( integer1_1 = 0 ; integer1_1 < 5 ; integer1_1 ++ ){								    //使用for迴圈印出陣列編號與其內容
		printf ( "陣列第%d個位置為%2d\n" , (integer1_1 + 1) , one[integer1_1] );
	}
	printf ( "----------------------------\n" );	
	printf ( "\n" );           					 

	//實作02
	int integer2_1, max2;
	int two[5] = {74,48,30,17,62};                                                                  //宣告一維陣列並指定內容
	printf ( "Exercise 2\n" );
	printf ( "----------------------------\n" );
    printf ( "陣列內容：\n" );
	for ( integer2_1 = 0 ; integer2_1 < 5 ; integer2_1 ++ ){                                        //用for迴圈印出五個數
        printf ( "%d：%d\n" , integer2_1 , two[integer2_1] );
    }
    max2 = two[0];                                                                                  //指定max值為two陣列的第一個元素
    for ( integer2_1 = 1 ; integer2_1 < 5 ; integer2_1 ++ ){                            
        if ( two[integer2_1] > max2 ){                                                              //比較max與其他two陣列的元素
            max2 = two[integer2_1];                                                                 //更新最大的數
        }
    }
    printf ( "最大值：%2d\n" , max2 );
	printf ( "----------------------------\n" );
	printf ( "\n" );    

	//實作03
	int integer3_1, sum3 = 0;
    int three[5];                                                                                   //宣告一維陣列
    float ave;
    srand ( time(0) );
	printf ( "Exercise 3\n" );
	printf ( "----------------------------\n" );
    printf ( "長度為5的隨機陣列\n" );
	for ( integer3_1 = 0 ; integer3_1 < 5 ; integer3_1 ++ ){                                        //用for迴圈讀取五個隨機數
        three[integer3_1] = (rand() % 100 + 1);
        sum3 += three[integer3_1];                                                                  //累加隨機數
        printf ( "%d：%2d\n" , integer3_1 , three[integer3_1] );
    }
    ave = (float) sum3 / 5;                                                                         //計算平均(強制轉型成float才能顯示小數點後)
    printf ( "平均值：%f\n" , ave );
	printf ( "----------------------------\n" );		
	printf ( "\n" );   

	//實作04
	int integer4_1, max4, min4, min4_n, max4_n;
	printf ( "繼續實作四？\n" );
	printf ( "----------------------------\n" );
    min4 = three[0];                                                                                 //指定min值為three陣列的第一個元素
    for ( integer4_1 = 1 ; integer4_1 < 5 ; integer4_1 ++ ){                            
        if ( three[integer4_1] < min4 ){                                                             //比較min與其他three陣列的元素
            min4 = three[integer4_1];                                                                //更新最小的數
            min4_n = integer4_1;
        }
    }
    printf ( "該陣列的最小值：%2d, 是第%d個數\n" , min4 , (min4_n + 1) );
	max4 = three[0];                                                                                 //指定max值為three陣列的第一個元素
    for ( integer4_1 = 1 ; integer4_1 < 5 ; integer4_1 ++ ){                            
        if ( three[integer4_1] > max4 ){                                                             //比較max與其他three陣列的元素
            max4 = three[integer4_1];                                                                //更新最大的數
            max4_n = integer4_1;
        }
    }
    printf ( "該陣列的最小值：%2d, 是第%d個數\n" , max4 , (max4_n + 1) );
	printf ( "----------------------------\n" );		
	printf ( "\n" );  

	//實作05
	int integer5_1;
    int random[20];                                                                                  //宣告一維陣列
	printf ( "Exercise 5\n" );
	printf ( "----------------------------\n" );
    printf ( "多項式 A：" );
    for ( integer5_1 = 9 ; integer5_1 >= 0 ; integer5_1 -- ){
        random[integer5_1] = (rand() % 10 );                                                         //得到多項式A的係數(從九開始，方便後面計算)
        if ( integer5_1 > 0 ){                                                                       //判斷是否需要印出X次方
            printf ( " %2d*x^%2d +" , random[integer5_1] , integer5_1  );
        }
        else {                                                                                       //常數項不需印出x次方
            printf ( " %2d\n" , random[integer5_1] );
        }
    }
    printf ( "多項式 B：" );                                                                          //得到多項式A的係數(從十九開始，方便後面計算)
    for ( integer5_1 = 19 ; integer5_1 >= 10 ; integer5_1 -- ){
        random[integer5_1] = (rand() % 10 );                                                         //判斷是否需要印出X次方
        if ( integer5_1 > 10 ){
            printf ( " %2d*x^%2d +" , random[integer5_1] , (integer5_1 - 10) ); 
        }
        else {                                                                                       //常數項不需印出x次方
            printf ( " %2d\n" , random[integer5_1] );
        }
    }
    printf ( "相加為  ：" );
    for ( integer5_1 = 9 ; integer5_1 >= 0 ; integer5_1 -- ){ 
        if ( integer5_1 > 0 ){
            printf ( " %2d*x^%2d +" , random[integer5_1] + random[integer5_1 + 10] , integer5_1  );  //計算相加項(AB兩多項式在陣列編號相差10 (19-9) )
        }
        else {
            printf ( " %2d\n" , random[integer5_1] + random[integer5_1 + 10] );
        }
    }
	printf ( "----------------------------\n" );		
	printf ( "\n" );  

	//實作06
	int integer6_1, integer6_2, sum = 0;
    int six[2][3] = { {1,2,3} , {4,5,6} };										                      //宣告二維陣列並指定內容		
	printf ( "Exercise 6\n" );
	printf ( "----------------------------\n" );
    for ( integer6_1 = 0 ; integer6_1 < 2 ; integer6_1 ++ ){                                          //用兩層for印出二維陣列內容與編號
        for ( integer6_2 = 0 ; integer6_2 < 3 ; integer6_2 ++ ){
            printf ( "陣列位置[%d][%d]:" , integer6_1 , integer6_2 );
            printf ( "%d\n" , six[integer6_1][integer6_2] );
        }
    }
    printf ( "2維陣列:\n" );                                                                           //印出「真的」二維陣列（圖形上）
    for ( integer6_1 = 0 ; integer6_1 < 2 ; integer6_1 ++ ){
        for ( integer6_2 = 0 ; integer6_2 < 3 ; integer6_2 ++ ){
            printf ( "  %d  " , six[integer6_1][integer6_2] );
        }
        printf ( "\n" );
    }
    printf ( "第一行和第三行交換後:\n" );
    for ( integer6_1 = 0 ; integer6_1 < 2 ; integer6_1 ++ ){                                         
        for ( integer6_2 = 0 ; integer6_2 < 3 ; integer6_2 ++ ){
            if ( integer6_2 == 0 ){                                                                   //判斷是否為第一行，是就印出第三行
                printf ( "  %d  " , six[integer6_1][2] );
            }
            else if ( integer6_2 == 2 ){                                                              //判斷是否為第三行，是就印出第一行
                printf ( "  %d  " , six[integer6_1][0] );
            }
            else {                                                                                    //其他就照原本的順序印
                printf ( "  %d  " , six[integer6_1][integer6_2] );
            }
        }
        printf ( "\n" );
    }
	printf ( "----------------------------\n" );		
	printf ( "\n" );  

    return 0;
}
