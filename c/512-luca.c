/*
   Questo programma visualizza il suo codice sorgente.
   Autore: Caucci Luca (e-mail: caucci@cs.unibo.it)
*/
#include <stdio.h>

char *s = "/*%c   Questo programma visualizza il suo codice sorgente.%c   Autore: Caucci Luca (e-mail: caucci@cs.unibo.it)%c*/%c#include <stdio.h>%c%cchar *s = %c%s%c;%c%cvoid main() {%c   printf(s, 10, 10, 10, 10, 10, 10, 34, s, 34, 10, 10, 10, 10, 10, 10);%c   return;%c}%c";

void main() {
   printf(s, 10, 10, 10, 10, 10, 10, 34, s, 34, 10, 10, 10, 10, 10, 10);
   return;
}
