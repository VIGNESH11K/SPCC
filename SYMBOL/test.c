#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){

char string [100];
printf("Enter expression \n");
scanf("%s",string);
printf("TYPE \t\t Symbol \t\t ADDRESS \n");

for(int i=0; string[i]!='\0';i++){
    char a=string[i];
    if(a<='0' && a>='9'){
        printf("const");

}

    else if(a<='a' && a>='z' || a<='A' && a>='Z'){
    printf("IDENTIFIER");
    }

    else if(a=='+' || a=='-' || a=='*'|| a =='/'){
        printf("operator");

    }
    else{
        printf("SYMBOL");
    }

    printf(" %c \t %p ",string[i],(void*)&string[i]);
}
return 0;
}

