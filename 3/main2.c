/*
    E->TE'
    E'->+TE'/eps 
    T->FT' 
    T'->*FT'/eps 
    F->(E)/i 
*/

#include <stdio.h>
#include<stdlib.h>
#include<string.h>
#define SIZE 100


//funct//
 void procE(char str[]);
void procF(char str[]);
void procT(char str[]);
int i=0;

void procEdash(char str[]){
    if(str[i]=="+"){
        i++;
        procT(str);
        procEdash(str);


    }
}


void procTdash(char str[]){
    if(str[i]=="*"){
        i++;
        procF(str);
        procTdash(str);
    }
}

void procF(char str[]){
    if (str[i]=="("){
        i++;
        procE(str);

        if(str[i]==")"){
            i++;
        }
        else{
            printf("ERROR");
        }

    
    }

    else if(str[i]=="i"){
        i++;   
}

else {
        printf('ERROR');
    }

}



void procE(char str[]){
    procT(str);
    procEdash(str);

}

void procT(str[]){
    procF(str);
    procTdash(str);
}


