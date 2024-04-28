%{
    int operand=0;
    int operator=0;

%}

%%

[+/*%] {operator++;}
[a-zA-Z0-9] {operand++;}

%%

int main(){

    yylex();
    printf("OPERAND :%d OPERATOR:%d",operand,operator);
    return 0;

}