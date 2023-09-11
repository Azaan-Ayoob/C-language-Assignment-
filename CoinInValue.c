//Q5. Coin in the value...
#include<stdio.h>
int main()
{
    int input, remain;

    printf("Enter any amount:");
    scanf("%d", &input);

    printf("\n500:%d ", input/500);
    remain=input%500;

    printf("\n100:%d", remain/100);
    remain=remain%100;

    printf("\n50:%d", remain/50);
    remain=remain%50;

    printf("\n20:%d", remain/20);
    remain=remain%20;

    printf("\n10:%d", remain/10);
    remain=remain%10;

    printf("\n5:%d", remain/5);
    remain=remain%5;

    printf("\n2:%d", remain/2);
    remain=remain%2;

    printf("   1:%d", remain/1);

    return 0;
}
