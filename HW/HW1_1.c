
#include <stdio.h>

int main(){
    
    //���D1.1
    float temperature = 0;                                                //�ŧi�ܼ�
    printf ( "Question 1.1\n" );
    printf ( "-----------------------\n" );
    printf ( "�п�J���ūסG" );
    scanf  ( "%f" , &temperature );                                       //Ū�J���׼�
    temperature = (( temperature * 1.8 ) + 32 );                          //���׼��ഫ�ؤ�׼�
    printf ( "�ؤ�ū׬��G%f\n", temperature );                           //��X�ؤ�׼�
    printf ( "-----------------------\n" );
    printf ( "\n" );

    return 0;
}
