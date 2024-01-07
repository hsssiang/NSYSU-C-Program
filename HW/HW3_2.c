
#include <stdio.h>
#include <math.h>


int main(){

	//作業3.2
    int input, prime_check01, prime_check02, i, k;
	int switch_prime = 0;                                           
    printf ( "Question 3.2\n" );
    printf ( "-----------------------\n" );
    printf ( "input the number:" );
    scanf  ( "%d" , &input );
    for ( i = 2 ; i <= (input / 2) ; i ++ ){														//使用for迴圈拆解輸入的數成兩數相加的形式 （因為1不是質數，所以從2開始）					
		prime_check01 = i;																			//將拆解的數輸入變數prime_check01
		prime_check02 = input - i;																	//將拆解的數輸入變數prime_check02
		for ( k = 2 ; k <= sqrt(prime_check01) ; k ++ ){											//使用for迴圈提供檢查數（提供到prime_check01開根號）
			if ( prime_check01 % k == 0 ){															//使用檢查數判斷prime_check01是否為質數
				switch_prime ++;																	//若prime不是質數，會使switch_prime不等於零（用以檢查是否兩數都是質數）
			}
		}
		for ( k = 2 ; k <= sqrt(prime_check02) ; k ++ ){											//使用for迴圈提供檢查數（提供到prime_check02開根號）
			if ( prime_check02 % k == 0 ){															//使用檢查數判斷prime_check02是否為質數
				switch_prime ++;																	//若prime不是質數，會使switch_prime不等於零（用以檢查是否兩數都是質數
			}
		}
		if ( switch_prime == 0 ){																	//如果switch_prime不等於零，表示至少有一數不是質數，用if迴圈來判斷是否印出來
			printf ( "%d can be written as %d + %d\n" , input , prime_check01 , prime_check02);		//印出結果
		}
		switch_prime = 0;																			//將switch_prime歸零
	}
	
    printf ( "-----------------------\n" );
    printf ( "\n" );

    return 0;
}