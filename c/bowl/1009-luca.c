/*
	Questo programma visualizza il suo codice sorgente.
	Autore: Luca Caucci (e-mail: caucci@cs.unibo.it)
*/

#include <stdio.h>

char NewLine = '\n', Tab = '\t', BackSlash = '\\', QuotMark = '"';
char Str[] = "/*%c%cQuesto programma visualizza il suo codice sorgente.%c%cAutore: Luca Caucci (e-mail: caucci@cs.unibo.it)%c*/%c%c#include <stdio.h>%c%cchar NewLine = '%cn', Tab = '%ct', BackSlash = '%c%c', QuotMark = '%c';%cchar Str[] = %c%s%c;%c%cint main() {%c%cprintf(Str, NewLine, Tab, NewLine, Tab, NewLine, NewLine, NewLine, NewLine, NewLine, BackSlash, BackSlash, BackSlash, BackSlash, QuotMark, NewLine, QuotMark, Str, QuotMark, NewLine, NewLine, NewLine, Tab, NewLine, Tab, NewLine, NewLine, NewLine);%c%creturn(0);%c}%c%c";

int main() {
	printf(Str, NewLine, Tab, NewLine, Tab, NewLine, NewLine, NewLine, NewLine, NewLine, BackSlash, BackSlash, BackSlash, BackSlash, QuotMark, NewLine, QuotMark, Str, QuotMark, NewLine, NewLine, NewLine, Tab, NewLine, Tab, NewLine, NewLine, NewLine);
	return(0);
}
