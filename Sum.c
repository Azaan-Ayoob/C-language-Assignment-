//Q14. Sum of the individual number from the value...
#include<stdio.h>
int main()
{
    int input;
    int remain;
    int remain_2;
    int remain_3;
    int sum=0;
    printf("Enter 5-digit value:");
    scanf("%d", &input);

    remain=input/10000;
    sum = sum + remain;
    remain=input/1000;
    sum = sum + remain;
    remain=input%1000;
    remain=remain/100;
    sum = sum + remain;
    remain_2=input%100;
    remain_2=remain_2/10;
    sum = sum + remain_2;
    remain_3=input%10;
    sum=sum+remain_3;
    printf("\nsum = %d", sum);


    return 0;
}
