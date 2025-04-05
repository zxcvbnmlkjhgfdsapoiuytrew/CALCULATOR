#include<stdio.h>
#include<stdlib.h>
int main(){
    char operator;
    double num1,num2,result;
    int running=1;
    printf("Simple calculator\n");
    printf("operations: + (addition),- (substraction),*(multiplication),/(division),q quit\n\n");
    while(running){
        printf("Enter an operator (+, -, *, /) or 'q' to quit: ");
        scanf(" %c", &operator);
        if(operator == 'q' || operator =='Q'){
            running =0;
            printf("Calculator running\n");
            break;
        }
        if(operator !='+' && operator !='-' && operator!='*' && operator!='/'){
            printf("Invalid operator\n..Please try again\n");
            continue;
        }
        printf("Enter the first number\n");
        if(scanf("%lf",&num1)!=1){
            printf("Invalid number please enter the correct number\n");
            while(getchar()!='\n');
            continue;
        }
        printf("Enter the second Number\n");
        if(scanf("%lf",&num2)!=1){
            printf("Invalid number please enter the correct number\n");
            while(getchar()!='\n');
            continue;
        }
        switch (operator) {
        case '+':
            result=num1+num2;
            printf("%.2lf+%.2lf=%.2lf\n",num1,num2,result);
            break;
        case '-':
            result=num1-num2;
            printf("%.2lf-%.2lf=%.2lf\n",num1,num2,result);
            break;
        case '*':
            result=num1*num2;
            printf("%.2lf*%2lf=%.2lf",num1,num2,result);
            break;
        case'/':
            if(num2==0){
                printf("Division by zero is not allowed\n");
            }else{
                result=num1/num2;
                printf("%.2lf/%.2lf=%.2lf",num1,num2,result);
            }
            break;
    }
        printf("\n");
}
    return 0;
}
