// #include<stdio.h>
// #include<stdlib.h>
// #include<string.h>

// int main(){
//     char label[10],operand[10],opcode[10],mneumonic[10];
//     int locctr=0;

//     FILE *fp1,*fp2,*fp3,*fp4;

//     fp1=fopen("/Users/vigneshrk/Desktop/spcc/7/input.txt","r"); //input
//     fp2=fopen("/Users/vigneshrk/Desktop/spcc/7/mot.txt","r");  //mot
//     fp3=fopen("/Users/vigneshrk/Desktop/spcc/7/out.txt","w");  //out
//     fp4=fopen("/Users/vigneshrk/Desktop/spcc/7/st.txt","w"); //st

//     fscanf(fp1,"%s %s %s",label,opcode,operand);
//     fprintf(fp3,"%s %s %s %s",locctr,label,opcode,operand);

//     fscanf(fp1,"%s %s %s",label,opcode,operand);
//     fprintf(fp3,"%s %s %s %s",locctr,label,opcode,operand);

//     while(strcmp(opcode,"END")!=0){
//         if(strcmp(opcode,"DC")==0 || (strcmp(opcode,"DS")==0)){
//             fprintf(fp4,"%s %s",label,locctr);
//             fprintf(fp3,"%s %s %s %s",locctr,label,opcode,operand);
//             locctr+=4;
//         }

//         else{
//             fscanf(fp2,"%s",mneumonic);
//             fprintf(fp3,"%s %s %s %s",locctr,label,opcode,operand);
//             while(strcmp(mneumonic,"end")!=0){
//                 if(strcmp(opcode,mneumonic)==0){
//                     locctr += 4;
//                     break;

                    
//                 }
//                                 fscanf(fp2,"%s",mneumonic);

//             }
//             rewind(fp2);

//         }
//               fscanf(fp1,"%s %s %s",label,opcode,operand);
//     }

  

//  fprintf(fp3,"%s %s %s",label,opcode,operand);
//  fclose(fp1);
//  fclose(fp2);
//  fclose(fp3);
//  fclose(fp4);


// }






#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    char label[10],operand[10],opcode[10],mneumonic[10];
    int locctr=0;

    FILE *fp1,*fp2,*fp3,*fp4;

    fp1=fopen("/Users/vigneshrk/Desktop/spcc/7/input.txt","r"); //input
    fp2=fopen("/Users/vigneshrk/Desktop/spcc/7/mot.txt","r");  //mot
    fp3=fopen("/Users/vigneshrk/Desktop/spcc/7/out.txt","w");  //out
    fp4=fopen("/Users/vigneshrk/Desktop/spcc/7/st.txt","w"); //st

    fscanf(fp1,"%s %s %s",label,opcode,operand);
    fprintf(fp3,"%s %s %s %s",locctr,label,opcode,operand);

    fscanf(fp1,"%s %s %s",label,opcode,operand);
    fprintf(fp3,"%s %s %s %s",locctr,label,opcode,operand);

    while(strcmp(opcode,"END")!=0){

      if (strcmp(opcode,"DS")==0 || strcmp(opcode,"DC")==0){
        printf(fp4,"%s %s", label,locctr);
         fprintf(fp3,"%s %s %s %s",locctr,label,opcode,operand);
        locctr+=4;

    }
      else{
        fscanf(fp2,"%s",mneumonic);
        fprintf(fp3,"%s %s %s %s",locctr,label,opcode,operand);
        while(strcmp(mneumonic,"end")!=0){
            if (strcmp(opcode,mneumonic)==0){
                locctr+=4;
                break;
            }
            fscanf(fp2,"%s ",mneumonic);


        }
        rewind(fp2);
         

       
        } 
        fscanf(fp1,"%s %s %s",label,opcode,operand);



      }
      fprintf(fp1,"%s %s %s %s",locctr,label,opcode,operand);
      fclose(fp1);
       fclose(fp2);
        fclose(fp3);
       fclose(fp4);
       return 0;








    }

