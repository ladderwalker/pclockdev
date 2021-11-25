CC=gcc
CFLAGS=-lX11 -lpthread -lXinerama -lXext -lGL -g -lm -ldl -Wall
OBJS=main.o data.o ui.o

all: main

main: $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^ -lncurses

%.o: %.c
	$(CC) $(CFLAGS) -c $^ -o $@

clean:
	rm -rf *.o main
