#include<stdio.h>
void reversenum(int);
void main(void)
{    
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);       

    reversenum(num);
printf("\nName-Rahul Pandey,Section-N,Roll No.49");

     
}

void reversenum(int num)
{    
    int rem;

    
    if (num == 0)
    {
        return;
    }

    else
    {
        rem = num % 10;
        printf("%d", rem);
        reversenum(num/10);  
    }
}
