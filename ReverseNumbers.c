//Q13.Reverse of the Numbers...
#include<stdio.h>
int main()
{
int input;
int remain_1, remain_2, remain_3, remain_4;

printf("Enter 5-digit value :");
scanf("%d", &input);
remain_1=input%10;
printf("The reverse of %d is %d",input, remain_1);
remain_2=input%100;
remain_2=remain_2/10;
printf("%d", remain_2);
remain_3=input%1000;
remain_3=remain_3/100;
printf("%d", remain_3);
remain_4=input/1000;
printf("%d", remain_4);
return 0;
}