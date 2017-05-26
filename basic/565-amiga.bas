C$="fyC$=yi34)C$i34)zaM=1j180zT=bC,M,1)zd(T>31)k(T<97)efiT);:lzdT=121efi34);:lzdT=122ef:lzT=T-96zaL=1jTzhS$zgLzmzfS$;zNXT:zgMznyay,yby,ycy,ydy,yey,yfy,ygyznyhy,yiy,yjy,yky,yly,ymy,ynyz"
PRINT"C$="CHR$(34)C$CHR$(34)
FOR M=1 TO 180
T= ASC(MID$(C$,M,1))
IF (T>31) AND (T<97) THEN PRINT CHR$(T);: GOTO NXT:
IF T=121 THEN PRINT CHR$(34);: GOTO NXT:
IF T=122 THEN PRINT : GOTO NXT:
T=T-96
FOR l=1 TO T
READ S$
NEXT l
RESTORE
PRINT S$;
NXT:
NEXT M
DATA"FOR "," ASC(MID$(","","IF "," THEN ","PRINT ","NEXT "
DATA"READ ","CHR$("," TO "," AND "," GOTO NXT:","RESTORE","DATA "
