#include <stdio.h>
#include <math.h>

int main(){
	int month ;																		//�ŧi�@�Ӿ��month
	printf ( "Question 2.2\n" );
    printf ( "-----------------------\n" );
	printf ( "�п�J����G\n" );					
	scanf  ( "%d" , &month );
	if ( ( month % 2 != 0 && month < 8 ) || ( month % 2 == 0 && month > 7 ) ){		//�P�_��J������O�_�O31��							
		printf ( "%d�릳31��\n" , month );
	}
	else if ( month == 2 ){																		
		printf ( "2�릳28��\n" );									 				 //�P�_��J������O�_�O�G��
	}
	else {
		printf ( "%d�릳30��\n" , month );							 				 //�P�_��J������O�_�O30��	
	}
	return 0;
}