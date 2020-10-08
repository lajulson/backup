cc = gcc
CFLAG = -c


all	:	lol

lol	:	main.o function.o
		$(cc) main.o function.o -o lol

main.o 	:	main.c
		$(cc) $(CFLAG) main.c
function.o:	function.c

		$(cc) $(CFLAG) function.c
clean : 
		rm -rf *o run
