CC = g++
CFLAGS = -Wall -Wextra -O3 -pedantic

all: z1.x z2.x z3.x z5.x

z1.x:
	$(CC) $(CFLAGS) -o z1.x z1.cpp

z2.x:
	$(CC) $(CFLAGS) -o z2.x z2.cpp

z3.x:
	$(CC) $(CFLAGS) -o z3.x z3.cpp

z4.x:
	$(CC) $(CFLAGS) -o z4.x z4.cpp

z5.x:
	$(CC) $(CFLAGS) -o z5.x z5.cpp

run1: z1.x
	./z1.x

run2: z2.x
	./z2.x

run3: z3.x
	./z3.x

run4: z4.x
	./z4.x

run5: z5.x
	./z5.x

clean:
	rm -f *.x
