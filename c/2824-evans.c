/* Credit: Evans */

/*              itself.c

   A program that prints itself out
   Don Herbison-Evans 15 June 1995
*/

#define MAXA  100
#define MAXB   47
#define CHANGE 18
#include <stdio.h>

char slosh = '\\';

main()
{
   int i,j,k;
   char str[MAXB][MAXA];

   sprintf(str[0],"/*              itself.c");
   sprintf(str[1],"");
   sprintf(str[2],"   A program that prints itself out");
   sprintf(str[3],"   Don Herbison-Evans 15 June 1995");
   sprintf(str[4],"*/");
   sprintf(str[5],"");
   sprintf(str[6],"#define MAXA  100");
   sprintf(str[7],"#define MAXB   47");
   sprintf(str[8],"#define CHANGE 18");
   sprintf(str[9],"#include <stdio.h>");
   sprintf(str[10],"");
   sprintf(str[11],"char slosh = '\\';");
   sprintf(str[12],"");
   sprintf(str[13],"main()");
   sprintf(str[14],"{");
   sprintf(str[15],"   int i,j,k;");
   sprintf(str[16],"   char str[MAXB][MAXA];");
   sprintf(str[17],"");
   sprintf(str[18],"   for (j = 0; j < CHANGE; ++j)");
   sprintf(str[19],"   {");
   sprintf(str[20],"      pr(str[j],0);");
   sprintf(str[21],"      printf(\"\\n\");");
   sprintf(str[22],"   }");
   sprintf(str[23],"   for (j = 0; j < MAXB; ++j)");
   sprintf(str[24],"   {");
   sprintf(str[25],"      printf(\"   sprintf(str[%%d],\\\"\",j);");
   sprintf(str[26],"      pr(str[j],0);");
   sprintf(str[27],"      printf(\"\\\");\");");
   sprintf(str[28],"      printf(\"\\n\");");
   sprintf(str[29],"   }");
   sprintf(str[30],"   for (j = CHANGE; j < MAXB; ++j)");
   sprintf(str[31],"   {");
   sprintf(str[32],"      pr(str[j],1);");
   sprintf(str[33],"      printf(\"\\n\");");
   sprintf(str[34],"   }");
   sprintf(str[35],"}");
   sprintf(str[36],"pr(str,asis)");
   sprintf(str[37],"char str[MAXA];");
   sprintf(str[38],"int  asis;");
   sprintf(str[39],"{");
   sprintf(str[40],"   int j;");
   sprintf(str[41],"   for (j = 0; (j < MAXA) && (str[j] != '\\0');
++j)");
   sprintf(str[42],"      if ((asis == 0) && ((str[j] == slosh) ||
(str[j] == '\"')))");
   sprintf(str[43],"         printf(\"%%c%%c\",slosh,str[j]);");
   sprintf(str[44],"      else if ((asis == 0) && (str[j] == '%%'))
printf(\"%%%%%%%%\");");
   sprintf(str[45],"      else printf(\"%%c\",str[j]);");
   sprintf(str[46],"}");
   for (j = 0; j < CHANGE; ++j)
   {
      pr(str[j],0);
      printf("\n");
   }
   for (j = 0; j < MAXB; ++j)
   {
      printf("   sprintf(str[%d],\"",j);
      pr(str[j],0);
      printf("\");");
      printf("\n");
   }
   for (j = CHANGE; j < MAXB; ++j)
   {
      pr(str[j],1);
      printf("\n");
   }
}
pr(str,asis)
char str[MAXA];
int  asis;
{
   int j;
   for (j = 0; (j < MAXA) && (str[j] != '\0'); ++j)
      if ((asis == 0) && ((str[j] == slosh) || (str[j] == '"')))
         printf("%c%c",slosh,str[j]);
      else if ((asis == 0) && (str[j] == '%')) printf("%%%%");
      else printf("%c",str[j]);
}
