//Q11. Spaces created in a 5 digit value...
#include<stdio.h>
int main()
{
int input;
int i;
int remain;
printf("Enter value :");
scanf("%d", &input);

 remain=input/10000;
 printf("%d    ", remain);
 remain=input%10000;
 printf("%d    ",remain=remain/1000);
 remain=input%1000;
 printf("%d    ",remain=remain/100);
 remain=input%100;
 printf("%d    ",remain=remain/10);
 remain=input%10;
 printf("%d    ",remain=remain/1);

return 0;
}
