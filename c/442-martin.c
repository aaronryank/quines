/* Credit: Daniel Martin */

#include<stdio.h>
char a[] = "\";\nmain() {char *b=a;printf(\"#include<stdio.h>\\nchar a[] = \\\"\");\nfor(;*b;b++) {switch(*b){case '\\n': printf(\"\\\\n\"); break;\ncase '\\\\': case '\\\"': putchar('\\\\'); default: putchar(*b);}} printf(a);}\n";
main() {char *b=a;printf("#include<stdio.h>\nchar a[] = \"");
for(;*b;b++) {switch(*b){case '\n': printf("\\n"); break;
case '\\': case '\"': putchar('\\'); default: putchar(*b);}} printf(a);}
