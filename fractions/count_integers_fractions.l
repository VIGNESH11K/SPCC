%{
int positive_int_count = 0;
int negative_int_count = 0;
int fraction_count = 0;
%}

%%
[-+]?[0-9]+ {
 if(yytext[0]=='-') negative_int_count++;
 else positive_int_count++;

}





[-+]?[0-9]+/[0-9]+ { fraction_count++; }
%%

int main() {
    yylex();
    printf("Positive Integers: %d\nNegative Integers: %d\nFractions: %d\n", positive_int_count, negative_int_count, fraction_count);
    return 0;
}



impt//


[-+]?[0-9]+ { 
    if(yytext[0] == '-') negative_int_count++;
    else positive_int_count++;
}

[-+]?[0-9]+/[0-9]+ {fraction_count++;}