%{
int vowel_count = 0;
int consonant_count = 0;


%}

%%
[AEIOUaeiou] {vowel_count++;}
[A-Za-z]     {consonant_count++;}
%%

int main(){
    yylex();
    printf(" VOWELS:%d CONST:%d",vowel_count,consonant_count);
    return 0;

}