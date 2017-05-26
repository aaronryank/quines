/* Credit: Wolfgang Thumser */

#include <stdio.h>

void main(){
int i=0,j=0;
char str[500]={"#include <stdio.h>\n\
\n\
void main(){\n\
int i=0,j=0;\n\
char str[500]={\"y\"};\n\
\n\
while(str[i] != 0){\n\
  if(str[i] == 0x79){\n\
  i++;\n\
  while(str[j] != 0){\n\
    if(str[j] == 0x0a){\n\
    putchar(0x5c);\n\
    putchar(0x6e);\n\
    putchar(0x5c);\n\
    }\n\
    if(str[j] == 0x22){\n\
    putchar(0x5c);\n\
    }\n\
    putchar(str[j++]);\n\
  }\n\
  }\n\
  else putchar(str[i++]);\n\
}\n\
}\n\
"};

while(str[i] != 0){
  if(str[i] == 0x79){
  i++;
  while(str[j] != 0){
    if(str[j] == 0x0a){
    putchar(0x5c);
    putchar(0x6e);
    putchar(0x5c);
    }
    if(str[j] == 0x22){
    putchar(0x5c);
    }
    putchar(str[j++]);
  }
  }
  else putchar(str[i++]);
}
}
