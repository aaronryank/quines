/* Credit: Jan Willem */

#define s "#define s %c%s%c%c#include <stdio.h>%cvoid main() { printf(%c%s%c,34,s,34,10,10,34,s,34); }" #include <stdio.h>
void main() { printf("#define s %c%s%c%c#include <stdio.h>%cvoid main() { printf(%c%s%c,34,s,34,10,10,34,s,34); }",34,s,34,10,10,34,s,34); }
