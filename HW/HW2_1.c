
#include <stdio.h>
#include <math.h>

int main(){
	int a, b, c;										//宣告三個整數
	printf ( "Question 2.1\n" );
    printf ( "-----------------------\n" );
	printf ( "請隨意輸入三不同整數a b c：\n" );					
	printf ( "a為" );
	scanf  ( "%d" , &a );
	printf ( "b為" );
	scanf  ( "%d" , &b );
	printf ( "c為" );
	scanf  ( "%d" , &c );
	if ( a > b ){										//比較A和B的大小
		if ( a > c ){									//如果成立(A>B)再比較A和C
			printf ( "a is the largest\n" );			//如果成立(C<A)印出 "a is the largest"
		}
		else {										
			printf ( "c is the largest\n" );			//如果不成立(C>A)印出 "c is the largest"
		}
	}
	else {												//如果不成立(B>A)
		if ( b > c ){									//再比較B和C
			printf ( "b is the largest\n" );			//如果成立(C<B)印出 "b is the largest"
		}
		else {											
			printf ( "c is the largest\n" );			//如果不成立(B<C)印出 "c is the largest"
		}
	}

}