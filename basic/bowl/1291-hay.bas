REM Credit- Louise Hay
10 REM THIS IS A SELF REPRODUCING PROGRAM
20 DIM P$(800)
30 P$=P$+"REM THIS IS A SELF REPRODUCING PROGRAM                    "
40 P$=P$+"DIM P$(800)                                               "
50 P$=P$+"S$=CHR$(32):B$=CHR$(80):D$=CHR$(36)                       "
60 P$=P$+"E$=CHR$(61):A$=CHR$(43):Q$=CHR$(34)                       "
70 P$=P$+"N=13:L=50                                                 "
80 P$=P$+"PRINT 10;S$+P$(1,L)                                       "
90 P$=P$+"PRINT 20;S$+P$(L+1,2*L)                                   "
100 P$=P$+"FOR I=1 TO N                                              "
110 P$=P$+"PRINT 20+10*I;S$+B$+D$+F$+P$+D$+A$+Q$+P$(L*(I-1)+1,L*I)+Q$"
120 P$=P$+"NEXT I                                                    "
130 P$=P$+"FOR I=3 TO N                                              "
140 P$=P$+"PRINT (N+I)*10;S$+P$(L*(I-1)+1,L*I)                       "
150 P$=P$+"NEXT I                                                    "
160 S$=CHR$(32):B$=CHR$(80):D$=CHR$(36)
170 E$=CHR$(61):A$=CHR$(43):Q$=CHR$(34)
180 N=13:L=50
190 PRINT 10;S$+P$(1,L)  
200 PRINT 20;S$+P$(L+1,2*L)  
210 FOR I=1 TO N   
220 PRINT 20+10*I;S$+B$+D$+F$+P$+D$+A$+Q$+P$(L*(I-1)+1,L*I)+Q$
230 NEXT I 
240 FOR I=3 TO N
250 PRINT (N+I)*10;S$+P$(L*(I-1)+1,L*I)    
260 NEXT I
