#include<stdio.h>
int main()
{
printf("ENTER THE BASIC PAY");
int BP;
scanf("%d",&BP);
double HRA,TA,DA;
HRA=(10*BP)/100;
printf("HRA IS=%lf",HRA);
TA=(5*BP)/100;
printf("TA IS=%lf",TA);
DA=(15*BP)/100;
printf("DA IS=%lf",DA);
double NS;
NS=HRA+TA+DA+BP;
printf("net salary=%lf",NS);
return 0;
}