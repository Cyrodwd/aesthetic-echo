CC = gcc
CFLAGS = -Wall -Wextra -std=c99

all: aesthetic_echo

aesthetic_echo: aesthetic_echo.c
	$(CC) $(CFLAGS) aesthetic_echo.c -o aesthetic_echo

install:
	cp aesthetic_echo /usr/local/bin

uninstall:
	rm -f /usr/local/bin/aesthetic_echo

clean:
	rm -f aesthetic_echo
