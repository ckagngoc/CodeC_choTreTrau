#include<stdio.h>
#include<string.h>
int main (){
    float a,b;
    char op;
    printf("a,b: ");scanf("%f%f",&a,&b);fflush(stdin);
    printf("\nDau phep tinh: ");op = getchar();
    switch (op)
    {
    case '+':
        /* code */
        printf("%0.2f %c %0.2f = %0.2f",a,op,b,a+b);
        break;
    case '-':
        printf("%0.2f %c %0.2f = %0.2f",a,op,b,a-b);
        break;
    case '/':
        printf("%0.2f %c %0.2f = %0.2f",a,op,b,a/b);
        break;
    case '*':
        printf("%0.2f %c %0.2f = %0.2f",a,op,b,a*b);
        break;
    default:
        break;
    }
    return 0;
}