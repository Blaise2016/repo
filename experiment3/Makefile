main:main.o guessgame.o
	gcc main.o guessgame.o -o main
main.o:main.c
	gcc -c main.c
guessgame.o:guessgame.c
	gcc -c guessgame.c

clean:
	rm main *.o
