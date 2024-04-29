#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Structure for a Three Address Code instruction
typedef struct {
    char r[10];
    char o;
    char a1[10];
    char a2[10];
} T;

// Function prototypes
void a(T *c, char *v, char *l);
void r(T *c, char *o, char *a1, char *a2, char *r);
void d(T *c);



int main() {
    T c[100];
    int i = 0;

    // Example usage
    a(&c[i++], "a", "5");

    char t1[10], t2[10], t3[10];

    // Arithmetic statement
    sprintf(t1, "t%d", i);
    r(&c[i++], "+", "a", "3", t1);

    sprintf(t2, "t%d", i);
    r(&c[i++], "*", t1, "2", t2);

    // Relational statement
    sprintf(t3, "t%d", i);
    r(&c[i++], "-", t2, "10", t3);

    d(c);

    return 0;
}


// Generate assignment statement
void a(T *c, char *v, char *l) {
    strcpy(c->r, v);
    c->o = '=';
    strcpy(c->a1, l);
    strcpy(c->a2, "");
}

// Generate arithmetic or relational statement
void r(T *c, char *o, char *a1, char *a2, char *r) {
    strcpy(c->r, r);
    c->o = *o;
    strcpy(c->a1, a1);
    strcpy(c->a2, a2);
}

// Display generated code
void d(T *c) {
    printf("Three Address Code:\n");
    for (int j = 0; strlen(c[j].r) > 0; ++j) {
        printf("%s %c %s %s\n", c[j].r, c[j].o, c[j].a1, c[j].a2);
    }
}
