#include <stdio.h>  
#include <math.h>

int HS ( int , int , int );

int main (){
	int input, output[2000] = {0}, counter = 0, i;
	printf ( "[Input]\n" );
	scanf ( "%d" , &input );
	while ( input != 0 ){
		int two = 0, sub = 0, sum = 0;
		input --;																		//�N�Ĥ@��(0)�h��
		while ( 1 ){
			sum += ( pow( 2, two ) );													//�p���J�Ȧ��ĴX��
			if ( sum >= input ) break;													//���N���X
			else two ++;																//���O�N�[�@��
		}
		sub =  input - ( sum - pow ( 2 , two ) );										//�p���J�Ȭ��Ӧ檺�ĴX��
		output[counter] = HS ( two, sub , 1 );											//�ǤJ�p��禡�A�ñN���G�s�b�}�C��
		counter ++;																		//�p��ĴX�մ���
		scanf ( "%d" , &input );														//Ū�J�U�@�մ���
	}
	printf ( "[Output]\n" );
	for ( i = 0 ; i < counter ; i++ ){
		printf ( "%d\n" , output[i] );													//�L�X���G
	}
	return 0;
}

int HS ( int two, int sub, int swi){
	int temp_1 = 1, temp_2 = 1;
	int i, j ,sub_f = sub, sum = 0;
	if ( swi == 1 ){																	//�Ĥ@���ǤJ�A���P�_�O�_���0�Mn+1������
		for ( i = two - 2 ; i >= 0 ; i -- ){
			for ( j = 1 ; j <= temp_1 ; j ++ ){
				sum += ( pow ( 2 , i ) );												//�p��(0�Mn+1)���~���X�Ӽ�
			}
			temp_1 ++;
		}
		if ( sub > sum ){																//�P�_�O�_���0�Mn+1������
			sum += (temp_1 + 1); 														//�P�_�n�^�Ǧh��(0��1)
			if ( sub == sum ) return two + 1;
			else if ( two == 0 && sub == 1 ) return 1;									//�B�z�S���p
			else return 0;
		}
	}
	if ( two >= 2 ) {																	//�Y���O�b0�Mn+1�������A���榹�{��
		for ( i = two - 2; i >= 0 ; i -- ){
			for ( j = 1 ; j <= temp_2 ; j ++ ){
				if ( pow( 2, i ) > sub_f ) return HS ( i, sub_f , 0 );					//�P�_�O�_�~��I�s���
				else if ( pow( 2, i ) == sub_f ) return i + 1;							//�^�Ǹӭ�
				else sub_f -= pow( 2, i );												//�Y���O�ӳ����A�N�������X��
			}
			temp_2 ++;
		}
	}
	return 0;
}