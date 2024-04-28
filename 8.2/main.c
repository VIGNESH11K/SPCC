#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char label[10],opcode[10],operand[10],mntc[10],mdtc[10],mdtmdtc[10],ignore[10],mdtlabel[10],mdtvalue[10],macroname[10];
    int flag=0;

    FILE *fp1,*fp2,*fp3,*fp4;
    fp1 = fopen("/Users/vigneshrk/Desktop/spcc/8.2/input.txt","r");        //input
    fp2 = fopen("/Users/vigneshrk/Desktop/spcc/8.2/mnt.txt ","r");             //input
    fp3 = fopen("/Users/vigneshrk/Desktop/spcc/8.2/mdt.txt ","r");             //input
    fp4 = fopen(" ","w");  //output

    fscanf(fp1,"%s %s %s",label,opcode,operand);

    while(strcmp(opcode,"END")!=0){
        if(strcmp(opcode,"START")==0 || strcmp(opcode,"USING")==0 || strcmp(opcode,"DS")==0 || strcmp(opcode,"DC")==0){
             fprintf(fp1,"%s %s %s",label,opcode,operand);
        }

        else{
            fscanf(fp2,"%S %s %s ",mntc,mdtc,macroname);
            while(feof(fp2)){
                if(strcmp(opcode,macroname)==0){
                    flag=1;
                    break;                    
                }
                fscanf(fp2,"%S %s %s ",mntc,mdtc,macroname);

            }
            if(strcmp(opcode,macroname)==0){
                flag=1;

            }

            if(flag==1){
                flag=0;
                fscanf(fp3,"%s %s %s %s",ignore,mdtlabel,mdtvalue,mdtmdtc);
                while(strcmp(mdtc,mdtmdtc)!=0){
                     fscanf(fp3,"%s %s %s %s",ignore,mdtlabel,mdtvalue,mdtmdtc);
                   }
                    fscanf(fp3,"%s %s %s %s",ignore,mdtlabel,mdtvalue,mdtmdtc);
                while(strcmp(mdtlabel,"MEND")){
                     fprintf(fp4,"%s %s %s",ignore,mdtlabel,mdtvalue);
                     fscanf(fp3,"%s %s %s %s",ignore,mdtlabel,mdtvalue,mdtmdtc);
                }
                rewind(fp3);


            }
            else{
                fscanf(fp2,"%S %s %s ",mntc,mdtc,macroname);
            }
            rewind(fp3);
    
        }
        fscanf(fp2,"%S %s %s ",label,opcode,operand);


    }
     fprintf(fp2,"%S %s %s ",label,opcode,operand);
     fclose(fp1);
     fclose(fp2);
    fclose(fp3);
    fclose(fp4);
    
    
    return 0;

}