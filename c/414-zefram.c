/* Credit: Zefram */

char *f="%c%s%c,";
#include <stdio.h>
char*x[]={
"char *f=%c%s%c;",
"#include <stdio.h>",
"char*x[]={",
"},z=0;main(){int n;",
"printf(*x,34,f,34);puts(&z);",
"puts(x[1]);puts(x[2]);",
"for(n=0;n<8;n++)printf(f,34,x[n],34),puts(&z);",
"for(n=3;n<8;n++)puts(x[n]);}",
},z=0;main(){int n;
printf(*x,34,f,34);puts(&z);
puts(x[1]);puts(x[2]);
for(n=0;n<8;n++)printf(f,34,x[n],34),puts(&z);
for(n=3;n<8;n++)puts(x[n]);}
