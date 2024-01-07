
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

int pow_teeen ( int , int[30] );
int sum_input ( int , int[30] );

int main(){

    int i,  input, counter = 0;
    int det[30] = {0}, sum[1000] = {0};						
    printf ( "Question 5.2\n" );
    printf ( "-----------------------\n" );
    scanf ( "%d" , &input );								
    while ( input != 0 ){		                                    //判斷是否輸入0										
        if ( input > 10 ){                                          //判斷是否輸入兩位數
            i = pow_teeen ( input , det );                          //執行pow_teeen函式，傳入input和det陣列，並把回傳值指定給i
            sum[counter] = sum_input ( i , det );                   //執行sum_input函式，傳入i和det陣列，並把回傳值指定給sum陣列
        }
        else {
            sum[counter] = input;                                   //若輸入不是兩位數，使用sum函式計算和
        }
        scanf ( "%d" , &input );                                    //讀入第二筆資料
        counter ++;                                                 //計算有幾筆
    }
    printf ( "Output\n");                                           //分開輸入跟輸出
    for ( i = 0 ; i < counter ; i ++ ){
        printf ( "%d\n" , sum[i] );                                 //印出結果
    }
    printf ( "-----------------------\n" );
    printf ( "\n" );

    return 0;
}

int sum_input ( int i , int det[30] ){                              //sum_input函式
    int j , k , q, sum = 0;
    k = i;
    while (1) {                                                     //重複執行
        for ( j = 1 ; j < k ; j ++ ){
            sum +=  det[j];                                         //計算總和
            det[j] = 0;                                             //歸零det陣列
        }
        if ( sum / 10 != 0 ) {                                      //如果總和不是一位數
            q = pow_teeen ( sum , det );                            //呼叫pow_teeen函式，傳入sum和det函式，並把回傳值指定給q
            k = q ;                                                 //更新要執行幾次(由幾位來判斷)
        }
        else break;                                                 //若總和為一位數，跳出while
        sum = 0;                                                    //若要重複執行，將sum歸0
    }

    return sum;                                                     //回傳最後的總和
}

int pow_teeen ( int input , int det[30] ){                          //pow_teeen函式
    int divide, i = 1;
    int pow_ten[11];
    pow_ten[0] = 1;                                                 //將pow_ten[0]指定為1
    do {
        pow_ten[i] = pow_ten[i-1] * 10;                             //計算要用來除的10,100,1000....
        divide = input % pow_ten[i];                                //計算商
        det[i] = (input % pow_ten[i]) / pow_ten[i-1] ;              //得到拆解後的位數
        i ++;                                                       //計算第幾位數
    } while ( divide != input );                                    //當商等於讀入數，停止迴圈

    return i;                                                       //回傳有幾位數(拆成幾位)
}