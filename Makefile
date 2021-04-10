CC = gcc
CFLAGS = -std=c89 -pedantic-errors -Wall -Werror

default: dot

clean:
	rm -f *.o dot is_prime

dot: dot.c
	$(CC) $(CFLAGS) dot.c -o dot

prime: prime.c
	$(CC) $(CFLAGS) prime.c -o prime
