#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main (){
    char operand[10],opcode[10],label[10];
    int mntc=1 ,mdtc=1;
    FILE *fp1,*fp2,*fp3,*fp4;

    fp1=fopen("/Users/vigneshrk/Desktop/spcc/8.1/input.txt","r"); //input//
    fp2=fopen(" ","r"); //mntc//
    fp3=fopen(" ","r");//mdtc//
    fp4=fopen(" ","w");//cpy//

    fscanf(fp1,"%s %s %s",label,operand);

    while(strcmp(opcode,"END")!=0){

        if(strcmp(opcode,"MACRO")==0){
            fscanf(fp1,"%s %s %s",label,opcode,operand);
            fprintf(fp1,"%s %s %s",mntc,mdtc);
            mntc++;
            while(strcmp(opcode,"MEND")!=0){
                fprintf(fp3,"%d %s %s %s\n",mdtc,label,opcode,operand);
                mdtc++;
            }
            

        }
        else{
            fprintf(fp4,"%s %s %s",label ,opcode,operand);
        }

        fscanf(fp1,"%s %s %s",label ,opcode,operand);

        
    }
    fprintf(fp1,"%s %s %s",label ,opcode,operand);
    fclose(fp1);
    fclose(fp2);
    fclose(fp3);
    fclose(fp4);






}