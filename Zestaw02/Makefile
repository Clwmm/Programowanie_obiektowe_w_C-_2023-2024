CC = g++
CFLAGS = -Wall -Wextra -O3 -pedantic

all: z2_1.x z2_2.x z3_2.x z4.x

z2_1.x:
	$(CC) $(CFLAGS) -o z2_1.x z2_1.cpp

z2_2.x:
	$(CC) $(CFLAGS) -o z2_2.x z2_2.cpp

z3_2.x:
	$(CC) $(CFLAGS) -o z3_2.x z3_2.cpp

z4.x:
	$(CC) $(CFLAGS) -o z4.x z4.cpp

run2_1: z2_1.x
	./z2_1.x

run2_2: z2_2.x
	./z2_2.x

run3_2: z3_2.x
	./z3_2.x

run4: z4.x
	./z4.x

clean:
	rm -f *.x
