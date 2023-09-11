//Q9. Years week days from number...
#include<stdio.h>
int main(){
    int input;
    int remain;
    printf("Enter days\n");
    scanf("%d" , &input);

    printf("Years :%d\t", input/365);
    remain=input%365;
    printf("Weeks : %d\t" , remain/7);
    remain =remain%7;
    printf ("Days: %d" , remain/1);
    return 0;
}
