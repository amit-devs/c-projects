#include <stdio.h>
int main(){
    int a,b,c;
    char sym;
    printf("Enter the value of A and B:");
    scanf("%d%d",&a,&b);
    printf("You Entered:\nA:%d\nB:%d\n",a,b);
    printf("Enter the num for the calculation:\n1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n");
    scanf(" %c",&sym);
    switch(sym){
        case '+':{
            c=a+b;
            printf("Addition of C=%d",c);
            break;

        }
        case '-':{
            c=a-b;
            printf("Subtraction of C=%d",c);
            break;
        }
        case '*':{
            c=a*b;
            printf("Multiplication of C=%d",c);
            break;

        }
        case '/':{
            if(b==0){
                printf("Division not Possible!!");
                break;
            }else{
                c=a/b;
                printf("Division of C=%d",c);
                break;
            }
        }
        default:{
            printf("Please enter a valid number.");
            break;

        }
    }
    return 0;
}