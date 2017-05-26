#include "stdio.h" 

char *stack[2000], buf[2000], chrtab[128][2], *defns[128]; 

char dna[ ]="stdio.h_X#include X\"__\n\ 
char 4_Cstack_Sbuf_Bchrtab[4]_Hdefns[4]_V5[4]_]5, 4_,4;_;*4_*2000_K128_L\n\ 

_/SK]*BK],LH2]LV*,,C;__5==4_%5=4_=dna_DD ]@\"=C;__54_.copy(4)_K\n\
_/strlen(4)_Astrcpy(54,)_E4++_^5+4_+200_X'4'_'5*^4=_Z5;/4._!for (7;6;5)4_F\n\
_/if (5) 4_G{/4/}/_}return(4);/_R(char`*)malloc(4)_M\\\\_$`\"'_Y\n\
_/5 || 4_| c*t^*c^*=Yc*%$'c*%|t$'ZG\\n.'c*%ttt\\n.\\.\"EA+=G;!}F_W\n\
_/cK*Cc*Ct*q*,CqtXcA+M==!tYZ!W!tYZ.t0Z!qR!}!__(4)_~\n\
_/construct(4)_Iarg_J4**_$int 4_Nswitch(5)4}_Odefault: 4_P5-4_-p1-~*_Q\n\
_/break_Ucase 5: 4;/U_:5<4_<5>4_>5 && 4_&4*8'<4*3'>&_?else 4_XqB=Jp=!_W\n\
_/Wtc*V=t*t^t?kpt*-3'+=~J<Jk=Gqqqk*EA+=!;}Gqt*ZX;.}F!q*0=.pJ=!pBA1+MZBE!;_W\n\
_/c*``'p*^ ^c.*H=:YQQK=:!`@'pDZ:!c?p*^c*H=U!;}GP!W.O_W\n\
_/n0=kS=,kp<nnk*^A+=4F_U Uqn1+M=!qn+k*EU!qR!_O\n\
_/cI*Cc*CJ$p$,k$,t*,q*,CnN!pS=c*c^W}F!O.}!__\n\
_/nH5]4=_Ostrncpy(654,,)_Eputs(4)_P923+_T4t.*T%_T\n\
_/xt=D=t*t^ Tqtx-1+M=qxtx-E!qx-t+~*0=! ^TqIPG!t*VqI=X!xt1+=!;}G}F_Q\n\
_/main()/t*x*,q*,CnN!n0=nL<n^0nO10O!nVnH=!;}F!Q.}__";


char *copy(c) 
char *c; 
{ 

char *t, *q; 
q=t=(char*)malloc(200+strlen(c)); 
*t++='"'; 
for ( ;*c;*t++=*c++){ 
if ('"'==*c || '\\'==*c) *t++='\\'; 
if ('\n'==*c) t=t+strlen(strcpy(t, "\\n\\")); } 
*t++='"'; 
*t++=0; 
return(q); 

} 

char *construct(c) 
char *c; 
{ 

char **arg, **p, **k, *t, *q; 
int n; 
for (p=stack;*c;c++){ 
switch(*c){ 
case '`': *p++=chrtab[* ++c]; 
break; 
case '"': *(p-1)=copy(*(p-1)); 
break; 
case '@': *p++=dna; 
break; 
default: if (*c<'8' && *c>'3') { 
*p++=chrtab[*c]; 
break; 
} 
q=buf; 
arg=p; 
for (t=defns[*c];*t;t++){ 
if (*t<'8' && *t>'3') { 
if ((k=p-*t+'3')<arg) arg=k; 
q=q+strlen(strcpy(q, *k)); 
} 
else *q++=*t; 
} 
*q=0; 
p=arg; 
strcpy(*p++=(char*)malloc(strlen(buf)+1), buf); } 

} 
for (n=0, k=stack;k<p;n=n+strlen(*k++)) ; q=(char*)malloc(n+1); 
for (n=0, k=stack;k<p;n=n+strlen(*k++))strcpy(q+n, *k); return(q); 

} 

main() 
{ 

char *t, *x, *q; 
int n; 

for (n=0;n<128;n++){
chrtab[n][0]=n;
chrtab[n][1]=0;


defns[n]=chrtab[n]; 
} 
for (x=t=dna;*t;t++){ 
if (* t==92+3) { 
q=(char*)malloc(t-x+1); 
strncpy(q, x, t-x); 
*(q-x+t)=0; 
if (* ++t==92+3) puts(construct(q)); 
else defns[*t]=construct(q); 
x=t+1; 
} 

} 

}
