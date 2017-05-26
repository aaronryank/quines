char *x="\";\nmain ()\n{ char *s;\n printf (\"char *x=\\\"\");\n for(s=x;*s;s++)\n { printf(*s=='\\\\'?\"\\\\\\\\\":*s=='\\\"'?\"\\\\\\\"\":*s=='\\n'?\"\\\\n\":\"%c\", *s); }\n printf (\"%s\", x);\n}\n";
main () 
{ char *s; 
printf ("char *x=\""); 
for(s=x;*s;s++) 
{ printf (*s=='\\'?"\\\\":*s=='\"'?"\\\"":*s=='\n'?"\\n":"%c", *s); } printf ("%s", x); 
}
