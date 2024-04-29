#include <stdio.h>
#include <string.h>
#include <stdlib.h>
//impt
#include<stdbool.h>
#include<ctype.h>


bool ifKeyboard(char word[10]) {
    if (!strcmp("auto",word ) || !strcmp("goto",word ) || !strcmp("int",word ) || !strcmp("return",word ) || !strcmp("loop",word ) )
    {
        return(true);
    }
    {
        return(false);
    }
}

bool ifOperator(char word[10]){


    if (!strcmp("+",word ) || !strcmp("-",word ) || !strcmp("*",word ) || !strcmp("/",word ) )
    {
        return(true);
    }
    {
        return(false);
    }
}

bool ifSpecialSymbol(char word[]){
    if(
        !strcmp("[",word) || !strcmp("]",word) || !strcmp("{",word) || !strcmp("}",word) ||
        !strcmp(",",word) || !strcmp(";",word) || !strcmp(":",word) || !strcmp("(",word) ||
        !strcmp(")",word)
    ){
        return true;
    }
    return false;
}


bool ifConst(char word[]){
    if(word>=0 && word<=9){
        return true;
    }
   return false;
}


bool isLiteral(char word[]){
    int i=0;
    int j=strlen(word)-1;

    if((int)word[i]==34 && (int)word[i]==34 || (int)word[i]==39 ||(int)word[i]==39){
    return true;
    }
    return false;
}

int main(){
    char word[80];
    char file_name[80]=" ";
    FILE *in_file;
    in_file=fopen(file_name,"r");
    if (in_file =="NULL"){
        printf("ERROR LOADING");

    }
    
    else{
        while(fscanf(in_file,"%s",word)!=EOF){
            if(ifKeyboard(word)==true){
                printf("keyword hai");
            }

            else if(ifOperator(word)==true){
                printf("operator hai");

            }

            else if(ifConst(word) == true){
                printf("%s is constant\n",word);
            }
            else if(ifSpecialSymbol(word) == true){
                printf("%s is special symbol\n",word);
            }
            else if(isLiteral(word) == true){
                printf("%s is a literal\n",word);
            }
            else{
                printf("identifier hai");
            }

        }

    }

    return 0;
}

