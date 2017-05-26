#include<stdio.h>
char *a[] = {"\"};\n\n",
	"main() {\n",
	"  int i=0; char *b;\n",
	"  printf(\"#include<stdio.h>\\nchar *a[] = {\\\"\");\n",
	"  while(*a[i]) {\n",
	"    for(b=a[i];*b;b++)\n",
	"      switch(*b) {\n",
	"         case '\\n': printf(\"\\\\n\"); break;\n",
	"         case '\\\\': case '\\\"': putchar('\\\\'); \n",
	"         default: putchar(*b);\n",
	"      } \n",
	"    printf(\"\\\",\\n\\t\\\"\"); \n",
	"    i++;\n",
	"  }\n",
	"  i=0;\n",
	"  while(*a[i]) {printf(a[i]);i++;}\n",
	"}\n",
	""};

main() {
  int i=0; char *b;
  printf("#include<stdio.h>\nchar *a[] = {\"");
  while(*a[i]) {
    for(b=a[i];*b;b++)
      switch(*b) {
         case '\n': printf("\\n"); break;
         case '\\': case '\"': putchar('\\'); 
         default: putchar(*b);
      } 
    printf("\",\n\t\""); 
    i++;
  }
  i=0;
  while(*a[i]) {printf(a[i]);i++;}
}
