void p(char *s){char *t;printf("%s(\"",s);for(t=s; *t!=0; t++)switch(*t){case '\\':case '\"':case'\'':putchar('\\');default:putchar(*t);}printf("\");}");}void main(){p("void p(char *s){char *t;printf(\"%s(\\\"\",s);for(t=s; *t!=0; t++)switch(*t){case \'\\\\\':case \'\\\"\':case\'\\\'\':putchar(\'\\\\\');default:putchar(*t);}printf(\"\\\");}\");}void main(){p");}
