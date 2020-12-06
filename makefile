fLAGS= -Wall -g

myBank.o: myBank.c myBank.h
	gcc $(FLAGS) -c myBank.c

main.o : main.c myBank.h
	gcc $(FLAGS) -c main.c

mybanks: myBank.o
	ar -rcs libymyBank.a myBank.o 
	
mybankd: myBank.o
	gcc $(FLAGS)-shared -o libmyBank.so myBank.o

mains: main.o mybanks
	gcc $(FLAGS) -o mains main.o libymyBank.a 
		
maind: main.o mybankd
	gcc $(FLAGS)-o maind main.o ./libmyBank.so

main: main.o libmyBank.a
	gcc $(FLAGS)  main.o
	
all: main

.PHONEY: clean all

clean: 
	rm -f *.o *.so maind mains


