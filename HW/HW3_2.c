
#include <stdio.h>
#include <math.h>


int main(){

	//�@�~3.2
    int input, prime_check01, prime_check02, i, k;
	int switch_prime = 0;                                           
    printf ( "Question 3.2\n" );
    printf ( "-----------------------\n" );
    printf ( "input the number:" );
    scanf  ( "%d" , &input );
    for ( i = 2 ; i <= (input / 2) ; i ++ ){														//�ϥ�for�j���ѿ�J���Ʀ���Ƭۥ[���Φ� �]�]��1���O��ơA�ҥH�q2�}�l�^					
		prime_check01 = i;																			//�N��Ѫ��ƿ�J�ܼ�prime_check01
		prime_check02 = input - i;																	//�N��Ѫ��ƿ�J�ܼ�prime_check02
		for ( k = 2 ; k <= sqrt(prime_check01) ; k ++ ){											//�ϥ�for�j�鴣���ˬd�ơ]���Ѩ�prime_check01�}�ڸ��^
			if ( prime_check01 % k == 0 ){															//�ϥ��ˬd�ƧP�_prime_check01�O�_�����
				switch_prime ++;																	//�Yprime���O��ơA�|��switch_prime������s�]�ΥH�ˬd�O�_��Ƴ��O��ơ^
			}
		}
		for ( k = 2 ; k <= sqrt(prime_check02) ; k ++ ){											//�ϥ�for�j�鴣���ˬd�ơ]���Ѩ�prime_check02�}�ڸ��^
			if ( prime_check02 % k == 0 ){															//�ϥ��ˬd�ƧP�_prime_check02�O�_�����
				switch_prime ++;																	//�Yprime���O��ơA�|��switch_prime������s�]�ΥH�ˬd�O�_��Ƴ��O���
			}
		}
		if ( switch_prime == 0 ){																	//�p�Gswitch_prime������s�A��ܦܤ֦��@�Ƥ��O��ơA��if�j��ӧP�_�O�_�L�X��
			printf ( "%d can be written as %d + %d\n" , input , prime_check01 , prime_check02);		//�L�X���G
		}
		switch_prime = 0;																			//�Nswitch_prime�k�s
	}
	
    printf ( "-----------------------\n" );
    printf ( "\n" );

    return 0;
}