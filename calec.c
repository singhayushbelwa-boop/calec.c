#include<stdio.h>
int main()
{
    int a; int b;
    char op;
    printf("enter value of a");
    scanf("%d",&a);
        printf("enter value of b");
        scanf("%d",&b);
        printf("enter operator(*'+'-'/,%)");
        scanf(" %c",&op);
        switch(op)
        {
            case '+':
            printf("addition =%d",a+b);
            break;
            
            case '-':
            printf("subtraction =%d",a-b);
            break;
            case '*':
            printf("multiplication =%d",a*b);
            break;
            case '/':
            printf("division =%d",a/b);
            break;
            case '%':
            printf("modulus =%d",a%b);
            break;
            default:
            printf("invalid");
            
        }
        return 0;
        
    }

