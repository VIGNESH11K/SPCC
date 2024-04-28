#include <stdio.h>
#include<string.h>
#include<stdlib.h>

typedef struct{
    char r[10];
    char o ;
    char a1[10];
    char a2[10];

} T;
//function prototype//
void a(T *c, char *v ,char *l);
void r(T *c, char*o,  char*a1, char*a2, char*r );
void d(T* d);

int main(){
    T c[100];
    int i=0;

    a(&c[i++],"a","5");
    char t1[10],t2[10],t3[10];

     // Arithmetic statement
    sprintf(t1, "t%d", i);
    r(&c[i++], "+", "a", "3", t1);

    sprintf(t1,"%d",i);
    r(&c[i++],"*",t1,"2",t2);

    sprintf(t2,"%d",i);
    r(&c[i++],"*",t1,"2",t2);

    //relatioanl//

   sprintf(t3,"%d",i);
   r(&c[i++],"-",t2,"10",t3);


   d(c);
   return(0);

}

void a(T *c, char *v ,char *l){
    strcpy(c->r,v);
    c->o ='o';
    strcpy(c1->a1,l);
      strcpy(c1->a1," ");
}


void r(T *c, char*o,  char*a1, char*a2, char*r ){

    strcpy(c->r,r);
    c->o = *o;
     strcpy(c1->a1,"a1");
       strcpy(c1->a1,"a2");

}

void d(T* d){
    printf(" 3 address code");
     for (int j = 0; strlen(c[j].r) > 0; ++j)

     
}