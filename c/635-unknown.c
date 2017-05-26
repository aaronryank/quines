char s[] = "\";\n\
main ()\n\
{ int i; printf (\"char s[] = \\\"\");\n\
  for (i=0; s[i]; i++)\n\
  { switch (s[i]) {\n\
    case '\\n': printf (\"\\\\n\\\\\\n\"); break;\n\
    case '\\\\': printf (\"\\\\\\\\\"); break;\n\
    case '\\\"': printf (\"\\\\\\\"\"); break;\n\
    default:   printf (\"%c\", s[i]); break;}\n\
  }\n\
  printf (\"%s\",s); }\n\
";

main ()

{ int i; printf ("char s[] = \"");
  for (i=0; s[i]; i++)
  { switch (s[i]) {
    case '\n': printf ("\\n\\\n"); break;
    case '\\': printf ("\\\\"); break;
    case '\"': printf ("\\\""); break;
    default:   printf ("%c", s[i]); break;}
  }
  printf ("%s",s); }
