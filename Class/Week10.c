
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main(){

	//��@01
	char input[50] = "I am Groot";
	int i;
	printf ( "Exercise 1\n" );
	printf ( "----------------------------\n" );
	for ( i = 0 ; i < strlen (input) ; i ++ ){									 //��strlen�P�_�r�����
		printf ( "��%d�Ӧr��:%c\n" , i , input[i]);								 //�L�Xinput�r�ꤤ����i�Ӧr��
	}
	printf ( "----------------------------\n" );	
	printf ( "\n" );           					 

	//��@02													
	char input_02[50];
	printf ( "Exercise 2\n" );
	printf ( "----------------------------\n" );
	printf ( "�п�J�@�r��G" );
	scanf  ( "%s" , input_02 );													//��scanfŪ�r��
	for ( i = 0 ; i < 3 ; i ++ ){
		printf ( "%s\n" , input_02 );											
	}
	printf ( "==========================\n" );
	fflush (stdin);																//�M�żзǿ�J��
	printf ( "�п�J�@�r��G" );
	gets(input_02);																//��getsŪ�r��
	for ( i = 0 ; i < 3 ; i ++ ){
		puts(input_02);
	}
	printf ( "----------------------------\n" );
	printf ( "\n" );    

	//��@03
	char input_03[3][20];
	printf ( "Exercise 3\n" );
	printf ( "----------------------------\n" );
	printf ( "�п�J�T�r��G\n" );
	for ( i = 0 ; i < 3 ; i ++ ){
		scanf ( "%s" , input_03[i] );
	}
	printf ( "�T�r�ꬰ�G" );
	for ( i = 0 ; i < 3 ; i ++ ){												//�����ǦL�X�r��
		printf ( "%s" , input_03[i] );											
		if ( i < 2 ){
			printf ( "," );
		}
	}
	printf ( "\n" ); 
	printf ( "�ϧǬ��G" );
	for ( i = 2 ; i >= 0 ; i -- ){												//�ϧǦL�X�r��
		printf ( "%s" , input_03[i] );
		if ( i > 0 ){
			printf ( "," );
		}
	}
	printf ( "\n" ); 
	printf ( "----------------------------\n" );		
	printf ( "\n" );   

	//��@04
	char input_04 [100];
	int detect, palindrome = 0;
	printf ( "Exercise 4\n" );
	printf ( "----------------------------\n" );
	printf ( "�п�J�r��(��J0���X):" );
	scanf ( "%s" , input_04 );
	while ( input_04[0] != '0' && input_04[strlen( input_04 ) - 1] != '0' ){	//�P�_�O�_���X�j��
		detect = strlen( input_04 );											//��detect�x�s�r�����
		for ( i = 0 ; i < detect / 2 ; i ++ ){
			if ( input_04[i] == input_04[detect - i - 1] ){						//�ˬd�e��r���@��(�j��)
				palindrome ++;													//�X�⦳�X�ӫe��r���@��
			}
		}
		if ( palindrome == ( detect / 2 )){										//�p�G����r����װ�2�N�O�j��
			printf ( "�O�j��\n" );												 
		}
		else {
			printf ( "���O�j��\n" );
		}
		palindrome = 0;
		printf ( "�п�J�r��(��J0���X):" );
		scanf ( "%s" , input_04 );
	}											
	printf ( "----------------------------\n" );		
	printf ( "\n" );  

    return 0;
}
