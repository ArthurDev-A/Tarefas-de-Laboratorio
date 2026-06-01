ALL: main

main:	main.o cadeia.o
		gcc -std=c89 -pedantic-errors -Wall -Wextra main.o cadeia.o -o main

main.o:	main.c cadeia.h defines.h
		gcc -std=c89 -pedantic-errors -Wall -Wextra -c main.c

cadeia.o: cadeia.c cadeia.h defines.h
		gcc -std=c89 -pedantic-errors -Wall -Wextra -c cadeia.c

clean:
		rm -f *.o main
