
#include <stdio.h>

int main(){
    
    //���D1.2
    float input01 , input02;                                              //�ŧi��B�I��
    printf ( "Question 1.2\n" );
    printf ( "----------------------\n" );
    printf ( "�п�J��ӼơG\n" );                          
    scanf  ( "%f" , &input01 );                                           //Ū�J�B�I�Ƥ@
    scanf  ( "%f" , &input02 );                                           //Ū�J�B�I�ƤG
    printf ( "��Ƭۥ[���G%f\n" , (input01 + input02) );                  //��X��Ƭۥ[
    printf ( "��Ƭ۴�G%f\n" , (input01 - input02) );                  //��X��Ƭ۴�
    printf ( "��Ƭۭ����G%f\n" , (input01 * input02) );                  //��X��Ƭۭ�
    printf ( "��Ƭ۰����G%f\n" , (input01 / input02) );                  //��X��Ƭ۰�
    printf ( "----------------------\n" );
    printf ( "\n" );

    return 0;
}
