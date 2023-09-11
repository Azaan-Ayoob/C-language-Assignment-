//Q3. Basic Pay
#include<stdio.h>

int main()
{
    int Base_pay;
    int House_rent;
    int Medical;
    int comp_allounce;

    printf("\t\t\t\t\tEnter basic Pay:");
    scanf("%d", &Base_pay);
    printf("\n\n\n\t\t\t\t\tPay Slip");
    printf("\n\t\t\t\t\tBasic pay: %d", Base_pay);
    printf("\n\t\t\t\t\tHouse rent: %d",House_rent = Base_pay*40/100);
    printf("\n\t\t\t\t\tMedical allounce: %d", Medical= Base_pay*18/100);
    printf("\n\t\t\t\t\tComputer allounce: %d",comp_allounce= Base_pay*15/100);

    return 0;
}