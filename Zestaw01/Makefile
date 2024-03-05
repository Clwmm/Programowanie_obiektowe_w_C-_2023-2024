CC = g++
CFLAGS = -Wall -Wextra -O3 -pedantic

all: z1.x z2.x z3.x z4_1.x z4_2.x z5.x

z1.x:
	$(CC) $(CFLAGS) -o z1.x z1.cpp

z2.x:
	$(CC) $(CFLAGS) -o z2.x z2.cpp

z3.x:
	$(CC) $(CFLAGS) -o z3.x z3.cpp

z4_1.x:
	$(CC) $(CFLAGS) -o z4_1.x z4_1.cpp

z4_2.x:
	$(CC) $(CFLAGS) -o z4_2.x z4_2.cpp

z5.x:
	$(CC) $(CFLAGS) -o z5.x z5.cpp

run1: z1.x
	./z1.x

run2: z2.x
	./z2.x

run3: z3.x
	./z3.x

run4_1: z4_1.x
	./z4_1.x

run4_2: z4_2.x
	./z4_2.x

run5: z5.x
	./z5.x

clean:
	rm -f *.x