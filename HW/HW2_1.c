
#include <stdio.h>
#include <math.h>

int main(){
	int a, b, c;										//�ŧi�T�Ӿ��
	printf ( "Question 2.1\n" );
    printf ( "-----------------------\n" );
	printf ( "���H�N��J�T���P���a b c�G\n" );					
	printf ( "a��" );
	scanf  ( "%d" , &a );
	printf ( "b��" );
	scanf  ( "%d" , &b );
	printf ( "c��" );
	scanf  ( "%d" , &c );
	if ( a > b ){										//���A�MB���j�p
		if ( a > c ){									//�p�G����(A>B)�A���A�MC
			printf ( "a is the largest\n" );			//�p�G����(C<A)�L�X "a is the largest"
		}
		else {										
			printf ( "c is the largest\n" );			//�p�G������(C>A)�L�X "c is the largest"
		}
	}
	else {												//�p�G������(B>A)
		if ( b > c ){									//�A���B�MC
			printf ( "b is the largest\n" );			//�p�G����(C<B)�L�X "b is the largest"
		}
		else {											
			printf ( "c is the largest\n" );			//�p�G������(B<C)�L�X "c is the largest"
		}
	}

}