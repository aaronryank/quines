/* Credit: Mark Wooding */

#include <stdio.h>
int main(void){char n='\n';char b='\\';char q='"';char*p="#include <stdio.h>%cint main(void){char n='%cn';char b='%c%c';char q='%c';char*p=%c%s%c;printf(p,n,b,b,b,q,q,p,q,n);return 0;}%c";printf(p,n,b,b,b,q,q,p,q,n);return 0;}
