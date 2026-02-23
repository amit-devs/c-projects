#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>
int main(){
    int i,len,flag;
    char str[100],ver;
    bool a=true;
    do{
        flag=0;
        printf("Do you want to check the string is palindrome[Y/N]: ");
        scanf(" %c",&ver);

        if(ver=='Y' || ver=='y'){
            printf("Enter the string:");
            scanf("%s",str);

            for(i=0;str[i]!='\0';i++){
                str[i]=tolower(str[i]);
            }

            len=strlen(str);

            for(i=0;i<len/2;i++){
                if(str[i]!=str[len-i-1]){
                    flag=1;
                    break;
                }
            }

            if(flag == 0){
                printf("%s is a Palindrome.\n",str);
            }else{
                printf("%s is not a Palindrome.\n",str);
            }
        }else{
            a=false;
        }
    }while(a);

    return 0;
}