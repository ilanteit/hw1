CC=gcc
AR=ar
FLAGS=-Wall -g

all: maind mains

#dynamyc
maind: main.o libmyMath.so
		$(CC) $(FLAGS) -o maind main.o ./libmyMath.so
#static
mains: main.o libmyMath.a
		$(CC) $(FLAGS) -o mains main.o ./libmyMath.a


#creating dynamic lib .so
myMathd: basicMath.o power.o
		$(CC) -shared -o libmyMath.so basicMath.o power.o

#creating static lib .a	
myMaths:basicMath.o power.o 
		$(AR) -rcs libmyMath.a basicMath.o power.o


main.o: main.c myMath.h
		$(CC) $(FLAGS) -c main.c
myMath.o: basicMath.c power.c myMath.h
		$(CC) $(FLAGS) -c basicMath.c power.c

.PHONY: clean

clean:
		rm -f *.o maind mains *.a *.so
