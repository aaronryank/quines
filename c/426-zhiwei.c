/* Credit: Xiao Zhiwei */

#include 
main()
{char* list="
printf(%c#include %cn%c);
printf(%cmain()%cn%c);
printf(%c{%c);
printf(%cchar* list=%cc%c,34);
printf(%c%cs%c, list);
printf(%c%cc;%c,34);
printf(list,34,92,34,34,92,34,34,34,34,37,34,34,37,34,34,37,34);}
";
printf("#include \n");
printf("main()\n");
printf("{");
printf("char* list=%c",34);
printf("%s", list);
printf("%c;",34);
printf(list,34,92,34,34,92,34,34,34,34,37,34,34,37,34,34,37,34);}
