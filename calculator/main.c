// Menu-Driven Calculator
#include <stdio.h>
int main(){
    int a,b,c;
    char sym,choice;
    do{
        printf("Enter the value of A and B: ");
        scanf("%d%d",&a,&b);
        printf("You Entered:\nA: %d\nB: %d\n",a,b);
        printf("Enter the Operator[+ - * / %%]:");
        scanf(" %c",&sym);
        switch(sym){
            case '+':
                c=a+b;
                printf("Addition =  %d",c);
                break;
            case '-':
                c=a-b;
                printf("Subtraction = %d",c);
                break;
            case '*':
                c=a*b;
                printf("Multiplication = %d",c);
                break;
            case '/':
                if(b==0){
                    printf("Division not Possible!!");
                    break;
                }else{
                    c=a/b;
                    printf("Division of = %d",c);
                }
                break;
            case '%':
                if(b==0){
                    printf("Modulo not Possible!!");
                }else{
                    c=a%b;
                    printf("Modulo of = %d",c);
                }
                break;
            default:
                printf("Please enter a valid operator.");
        }
        printf("\nDo you want to do another calculation\nPress 'Y' to continue: ");
        scanf(" %c",&choice);
    }while(choice =='Y' || choice =='y');
    printf("Calculator closed.");
    return 0;
}