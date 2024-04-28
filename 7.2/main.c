#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
    char label[10],opcode[10],operand[10],locctr[10],mlabel[10],mneumonic[10];
    FILE *fp1,*fp2,*fp3,*fp4,*fp5;
    fp1=fopen("/Users/vigneshrk/Desktop/spcc/7.2/input.txt ","r");
     fp2=fopen(" /Users/vigneshrk/Desktop/spcc/7.2/mot.txt","r");
      fp3=fopen("/Users/vigneshrk/Desktop/spcc/7.2/output.txt ","r");
       fp4=fopen(" /Users/vigneshrk/Desktop/spcc/7.2/output.txt","w");
        fp5=fopen("/Users/vigneshrk/Desktop/spcc/7.2/BT.txt ","w");

        fscanf(fp3,"%s %s %s",label,opcode,operand);
          fscanf(fp3,"%s %s %s",label,opcode,operand);
          fprintf(fp5,"Y %c%c",operand[2],operand[3]);



        while(strcmp(opcode,"END")!=0){
            if (strcmp(opcode,"DC")==0){
                fprintf(fp4,"%s \t%c",locctr,operand[2]);
            }

            else if(strcmp(opcode,"DS")==0){
                fprintf(fp4,"%s",locctr);

            }
            else{
              fscanf(fp2,"%s %s",mneumonic,mlabel);
              while(strcmp(mneumonic,"end")!=0){
                if(strcmp(opcode,mneumonic)==0){
                       fprintf(fp4,"%s\t%s\n",mlabel,operand);
                        break;

                }
               fscanf(fp2,"%s",label,mlabel);

              }
              rewind(fp2);

            }
                 fscanf(fp3,"%s %s %s %s",locctr,label,opcode,operand);


        }

        fclose(fp1);
         fclose(fp1);
          fclose(fp1);
           fclose(fp1);
           






}
