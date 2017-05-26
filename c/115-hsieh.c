/* Credit: Paul Hsieh */

#define X(Y) main(){printf("#define X(Y) %s\nX(%s)\n",#Y,#Y);}
X(main(){printf("#define X(Y) %s\nX(%s)\n",#Y,#Y);})
