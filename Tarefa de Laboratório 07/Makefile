ALL: main

main:	main.o cadeia.o extenso.o 
		gcc -std=c89 -pedantic-errors -Wall -Wextra main.o cadeia.o extenso.o -o main

main.o:	main.c extenso.h defines.h
		gcc -std=c89 -pedantic-errors -Wall -Wextra -c main.c

cadeia.o: cadeia.c cadeia.h defines.h
		gcc -std=c89 -pedantic-errors -Wall -Wextra -c cadeia.c

extenso.o: extenso.c extenso.h cadeia.h defines.h
		gcc -std=c89 -pedantic-errors -Wall -Wextra -c extenso.c

clean:
		rm -f *.o main.exe main

clean_win:
		del /Q *.o main.exe main
