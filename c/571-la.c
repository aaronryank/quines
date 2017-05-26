/* Credit: Celia La */

#include <stdio.h>
char* a = ";

void main() {

char* c;

printf(\"#include <stdio.h>\\nchar* a = \");

putchar(34);
for (c = a; c[0] != 0; c++) {
if (c[0] == 34) { putchar(92); putchar(34); } 
else if (c[0] == 92) { putchar(92); putchar(92); }
else putchar(c[0]);
}

putchar(34); 

printf(\"%s\", a);}
";

void main() {

char* c;

printf("#include <stdio.h>\nchar* a = ");

putchar(34);
for (c = a; c[0] != 0; c++) {
if (c[0] == 34) { putchar(92); putchar(34); } 
else if (c[0] == 92) { putchar(92); putchar(92); }
else putchar(c[0]);
}

putchar(34); 

printf("%s", a);}
