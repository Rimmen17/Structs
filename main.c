#include <stdio.h>
struct mig {
    int i;
    char a[30];
    float f;
    char b[30];
};

struct str2{
    int ii;
    float ff;
    char cc;
}var;

int main() {


   struct mig var1 = {20, "Rimmen", 1.85, "Christian"},
                var2;
    struct str2 var3 = {.ii=5, .ff=5.00, .cc='R'};

    var2 = var1;

printf("Struct mig:\nalder = %d\nKaelenavn = %s\nHoejde i cm = %0.2f\nNavn = %s\n\n",var1.i,var1.a,var1.f,var1.b);

    printf("Struct mig:\nalder = %d\nKaelenavn = %s\nHoejde = %0.2f\nNavn = %s\n\n",var2.i,var2.a,var2.f,var2.b);

    printf("Struct mig:\nalder = %d\nHoejde = %0.2f\nNavn = %c",var3.ii,var3.ff,var3.cc);

return 0;
}
