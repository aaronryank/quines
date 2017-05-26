/* Credit: Dave Jones */
/* Bootstrapped - no ASCII coodes used! */

/* This program prints its source. */

main(argc, argv)
  char** argv;
{
  char * dna =

"/* This program prints its source. */\n\nmain(argc, argv)\n\
  char** argv;\n{\n  char * dna =\n\nZ;\n\n\n  express_stri\
ng(dna);\n  exit(0);\n}\n\n\n/* Express the string, substit\
uting a quotation of the string \n * for the character 'Z'.\
  Breaks the literal into lines of no\n * more than 60 char\
s.\n */\nexpress_string(str)\n  char* str;\n{\n  char* ptr \
= str;\n  char ch;\n  int is_quoted = 0;\n\n  while(ch = *p\
tr++)\n    {\n\n      if(ch == 'Z' && !is_quoted)\n\t{\n\t \
 int count = 1;\n\t  char* ptr = str;\n\t  char ch;\n\t  pu\
tchar('\"');\n\t  while(ch = *ptr++)\n\t    {\n\t      swit\
ch(ch)\n\t      {\n\t\tcase '\\n': printf(\"\\\\n\");  coun\
t +=2; break;\n\t\tcase '\\t': printf(\"\\\\t\");  count +=\
2; break;\n\t\tcase '\\\\': printf(\"\\\\\\\\\"); count +=2\
; break;\n\t\tcase '\"':  printf(\"\\\\\\\"\"); count +=2; \
break;\n\t\tdefault:   putchar(ch);    count +=1; break;\n\t\
      }\n\t      if(count >= 59)\n\t\t{ printf(\"\\\\\\n\")\
;\n\t\t  count = 0;\n\t\t}\n\t    }\n\t  putchar('\"');\n\t\
}\n\n      else putchar(ch);\n      is_quoted = ( ch == '\\\
'');\n    }\n}\n";


  express_string(dna);
  exit(0);
}


/* Express the string, substituting a quotation of the string
 * for the character 'Z'.  Breaks the literal into lines of no
 * more than 60 chars.
 */
express_string(str)
  char* str;
{
  char* ptr = str;
  char ch;
  int is_quoted = 0;

  while(ch = *ptr++)
    {

      if(ch == 'Z' && !is_quoted)
        {
          int count = 1;
          char* ptr = str;
          char ch;
          putchar('"');
          while(ch = *ptr++)
            {
              switch(ch)
              {
                case '\n': printf("\\n");  count +=2; break;
                case '\t': printf("\\t");  count +=2; break;
                case '\\': printf("\\\\"); count +=2; break;
                case '"':  printf("\\\""); count +=2; break;
                default:   putchar(ch);    count +=1; break;
              }
              if(count >= 59)
                { printf("\\\n");
                  count = 0;
                }
            }
          putchar('"');
        }

      else putchar(ch);
      is_quoted = ( ch == '\'');
    }
}
