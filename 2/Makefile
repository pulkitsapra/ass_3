


inc =  -lm 

all: func.o main.o
	gcc -o myexe func.o main.o -Wno-deprecated -I ${inc} 

main.o: main.c
	gcc -c main.c -Wno-deprecated -I ${inc}

func.o: mylib.h func.c
	gcc -c func.c -Wno-deprecated -I ${inc}
clean:
	rm -f *.o

