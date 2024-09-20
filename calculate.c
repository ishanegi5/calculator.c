#include<stdio.h>
float cal(float,float);
void main(){
    float a,b;
    printf("Enter a=");
    scanf("%f",&a);
    printf("Enter b=");
    scanf("%f",&b);
    printf("The result of calculation is= %f",cal(a,b));
}
float cal(float x,float y){
    char ch;
    printf("Choose any character to operate on out of (+,-,/,*,modulus)= ");
    scanf(" %c",&ch);
    switch(ch)
    {
        case '+':
        printf("The sum of x & y is: \n%f + %f = %.2f\n",x,y,x+y);
        return x+y;
        case '-':
        printf("The subtraction of x & y is: \n%f - %f = %.2f\n",x,y,x-y);
        return x-y;
        case '*':
        printf("The multiplication of x & y is: \n%f * %f = %.2f\n",x,y,x*y);
        return x*y;
        case '/':
        if(y!=0){
            printf("The division of x & y is: \n%f / %f = %.2f\n",x,y,x/y);
                 return x/y;
        }
        else{
            printf("Error: undefined solution.\n");
        }
   
        case '%':
        printf("The modulus of x & y is: \n%d modulus %d = %d\n",(int)x,(int)y,(int)x%(int)y);
        return (int)x%(int)y;
        default:
        printf("You entered something invalid\n");
        return 0;
    }
}
