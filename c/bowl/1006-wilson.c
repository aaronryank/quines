/* Credit: Joseph N. Wilson */

char *s= "char *s= \"%s\";\n\n/* Wilson's straightforward self-reproducing program */\n\nchar *q(char *s) {\n  char *r = (char *) malloc (strlen(s)*4 + 1);\n  int i, j = 0;\n\n  for (i=0; i < strlen(s); i++) {\n    switch (s[i]) {\n      case '\\\\': r[j++] = '\\\\'; r[j++] = '\\\\'; break;\n      case '\\\"': r[j++] = '\\\\'; r[j++] = '\\\"'; break;\n      case '\\n': r[j++] = '\\\\'; r[j++] = 'n'; break;\n      default: r[j++] = s[i]; break;\n      }\n    }\n  r[j++] = '\\0';\n  return r;\n}\n\nmain() {\n  printf(s, q(s));\n}\n";

/* Wilson's straightforward self-reproducing program */

char *q(char *s) {
  char *r = (char *) malloc (strlen(s)*4 + 1);
  int i, j = 0;

  for (i=0; i < strlen(s); i++) {
    switch (s[i]) {
      case '\\': r[j++] = '\\'; r[j++] = '\\'; break;
      case '\"': r[j++] = '\\'; r[j++] = '\"'; break;
      case '\n': r[j++] = '\\'; r[j++] = 'n'; break;
      default: r[j++] = s[i]; break;
      }
    }
  r[j++] = '\0';
  return r;
}

main() {
  printf(s, q(s));
}
