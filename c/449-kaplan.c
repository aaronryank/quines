/* Credit: Kaplan */

char*lines[]={
"char*lines[]={",
"%c%s%c%c%c",
"0};",
"main(){",
"int idx;",
"puts(lines[0]);",
"for(idx=0;lines[idx]!=0;idx++){",
"printf(lines[1],34,lines[idx],34,',',10);",
"}",
"puts(lines[2]);",
"for(idx=3;lines[idx]!=0;idx++){",
"puts(lines[idx]);",
"}",
"}",
 0};
main(){
int idx;
puts(lines[0]);
for(idx=0;lines[idx]!=0;idx++){
printf(lines[1],34,lines[idx],34,',',10);
}
puts(lines[2]);
for(idx=3;lines[idx]!=0;idx++){
puts(lines[idx]);
}
}
