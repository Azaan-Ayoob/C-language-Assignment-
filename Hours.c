//Q8. Finds the hours minutes and seconds...
#include<stdio.h>
int main()
{
    int sec;
    int result;

        printf("Enter senconds\n");
        scanf("%d", & sec);
        result=sec/3600;

        printf("%d Hours", result);

        result=sec%3600;
        printf(" %d Minutes", result/60);

        result=result%60;
        printf(" %d Seconds", result);

    return 0;

}
