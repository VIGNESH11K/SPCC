
%{
int identifier_count = 0;
int constant_count = 0;
int operator_count = 0;
int special_symbol_count = 0;
%}


%%
[a-zA-Z_][a-zA-Z0-9] {identifier_count++;}
[0-9]+(\.[0-9]+)?  {constant_count++;}
[+/*]              {operator_count++;}
[^a-zA-Z0-9_]       {special_symbol_count++;}
%%


int main(){
    yylex();
    printf("ID:%d \n CONST:%d OP:%d SS:%d ",identifier_count,constant_count,operator_count,special_symbol_count);
    return 0;
}