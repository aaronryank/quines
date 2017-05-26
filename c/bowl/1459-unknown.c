#include stdio 

main() 
{ 
int i; 
char *a[27]; 

   a[0] = "#include stdio";
   a[1] = "";
   a[2] = "main()";
   a[3] = " {";
   a[4] = "   int i;";
   a[5] = "   char *a[27];";
   a[6] = "   for (i = 0; i <= 5; i++) printf (\"\%s\\n\", a[i]);";
   a[7] = "   for (i = 0; i <= 26; i++) printslash (\"   a[\%d] = \\\"\%s\\\";\\

n\", i, a[i]);"; 

   a[8] = "   for (i = 6; i <= 26; i++) printf (\"\%s\\n\", a[i]);";
   a[9] = " }";
   a[10] = "";
   a[11] = "printslash (string, a1, a2)";
   a[12] = "char *string, *a2;";
   a[13] = "int a1;";
   a[14] = " {";
   a[15] = "   char b[100];";
   a[16] = "   int i;";
   a[17] = "   int j = 0;";
   a[18] = "   for (i = 0; i < strlen(a2); i++)";
   a[19] = "    {";
   a[20] = "      char ch = a2[i];";
   a[21] = "      if ((ch == '\\\\') || (ch == '\\\%') || (ch == '\\\"')) b[j++]
 = '\\\\';";
   a[22] = "      b[j++] = ch;";
   a[23] = "    }";
   a[24] = "   b[j] = '\\0';";


a[25] = " printf (string, a1, b);"; a[26] = " }"; 

   for (i = 0; i <= 5; i++) printf ("%s\n", a[i]);
   for (i = 0; i <= 26; i++) printslash ("   a[%d] = \"%s\";\n", i, a[i]);
   for (i = 6; i <= 26; i++) printf ("%s\n", a[i]);

} 

printslash (string, a1, a2) 
char *string, *a2; 
int a1; 
{ 
char b[100]; 
int i; 
int j = 0; 
for (i = 0; i < strlen(a2); i++) 
{ 

      char ch = a2[i];
      if ((ch == '\\') || (ch == '\%') || (ch == '\"')) b[j++] = '\\';
      b[j++] = ch;


} 
b[j] = '\0'; 
printf (string, a1, b); 
}
