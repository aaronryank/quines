/* Doesn't use printf!! */

void a(char*b,int d,int e,int f){char*c=b;for(;*c;c++){if(!d&*c==68)putchar(
92),putchar('\n');if(!d&*c==92)putchar(92);if(*c==d)a(b,0,0,0);else putchar(
*c==e?34:*c==f?'\n':*c);}}main(){char p[]=/*
andelion '94 */
"void a(char*b,int d,int e,int f){char*c=b;for(;*c;c++){if(!d&*c==68)putchar(\
D92),putchar('\\n');if(!d&*c==92)putchar(92);if(*c==d)a(b,0,0,0);else putchar(\
D*c==e?34:*c==f?'\\n':*c);}}main(){char p[]=/* \
Dandelion '94 */\
DCAC;a(p,65,67,68);}";a(p,65,67,68);}


Author: Trent Tobler (ttobler@unislc.slc.unisys.com)
Notes: uses no ascii codes or printf

char *instructions[] = {
        "#include <stdio.h>",
        "void copier( s)",
        "\tchar *s[];",
        "{",
        "\tchar **p, *q;",
        "\tfputs( \"char *instructions[] = {\\n\", stdout);",
        "\tfor( p = s; *p; p++)",
        "\t{",
        "\t\tfputs( \"\\t\\\"\", stdout);",
        "\t\tfor( q = *p; *q; q++)",
        "\t\t{",
        "\t\t\tswitch(*q)",
        "\t\t\t{",
        "\t\t\tcase '\\t':",
        "\t\t\t\tfputs( \"\\\\t\", stdout);",
        "\t\t\t\tbreak;",
        "\t\t\tcase '\\\\':",
        "\t\t\t\tfputs( \"\\\\\\\\\", stdout);",
        "\t\t\t\tbreak;",
        "\t\t\tcase '\"':",
        "\t\t\t\tfputs( \"\\\\\\\"\", stdout);",
        "\t\t\t\tbreak;",
        "\t\t\tcase '\\n':",
        "\t\t\t\tfputs( \"\\\\n\", stdout);",
        "\t\t\t\tbreak;",
        "\t\t\tdefault:",
        "\t\t\t\tfputc( *q, stdout);",
        "\t\t\t\tbreak;",
        "\t\t\t}",
        "\t\t}",
        "\t\tfputs( \"\\\",\\n\", stdout);",
        "\t}",
        "\tfputs( \"\\t0\\n};\\n\", stdout);",
        "}",
        "void interp( s)",
        "\tchar *s[];",
        "{",
        "\tchar **p = s;",
        "\tfor( p = s; *p; p++)",
        "\t{",
        "\t\tfputs( *p, stdout);",
        "\t\tfputc( '\\n', stdout);",
        "\t}",
        "}",
        "int main( ac, av)",
        "\tint ac;",
        "\tchar **av;",
        "{",
        "\tcopier( instructions);",
        "\tinterp( instructions);",
        "}",
        0
};
#include <stdio.h>
void copier( s)
        char *s[];
{
        char **p, *q;
        fputs( "char *instructions[] = {\n", stdout);
        for( p = s; *p; p++)
        {
                fputs( "\t\"", stdout);
                for( q = *p; *q; q++)
                {
                        switch(*q)
                        {
                        case '\t':
                                fputs( "\\t", stdout);
                                break;
                        case '\\':
                                fputs( "\\\\", stdout);
                                break;
                        case '"':
                                fputs( "\\\"", stdout);
                                break;
                        case '\n':
                                fputs( "\\n", stdout);
                                break;
                        default:
                                fputc( *q, stdout);
                                break;
                        }
                }
                fputs( "\",\n", stdout);
        }
        fputs( "\t0\n};\n", stdout);
}
void interp( s)
        char *s[];
{
        char **p = s;
        for( p = s; *p; p++)
        {
                fputs( *p, stdout);
                fputc( '\n', stdout);
        }
}
int main( ac, av)
        int ac;
        char **av;
{
        copier( instructions);
        interp( instructions);
}
