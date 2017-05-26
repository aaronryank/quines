/* Credit: John Hagerman */

#define p(s) printf("%s\n",s);
#define q(v,s) printf("r(%s,%s)\n",#v,s);
#define r(v,s) char*v=#s;
#define m main(){p(x)p(y)p(z)p(n)q(x,x)q(y,y)q(z,z)q(n,n)p("m")}
r(x,#define p(s) printf("%s\n",s);)
r(y,#define q(v,s) printf("r(%s,%s)\n",#v,s);)

r(z,#define r(v,s) char*v=#s;) 
r(n,#define m main(){p(x)p(y)p(z)p(n)q(x,x)q(y,y)q(z,z)q(n,n)p("m")}) m
