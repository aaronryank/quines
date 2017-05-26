/* Credit: Kaplan */

char a='"';char b='\n';char c='\\';
char*f="char a='%c';char b='%cn';char c='%c%c';%cchar*f=%c%s%c;%cmain(){printf(f,a,c,c,c,b,a,f,a,b,b);}%c";
main(){printf(f,a,c,c,c,b,a,f,a,b,b);}
