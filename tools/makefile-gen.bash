(echo "\$(CC) := gcc -w" && echo "all:" && find *.c | xargs printf "\t\$(GCC) %s -o \n") >Makefile
