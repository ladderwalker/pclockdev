CC=gcc
CFLAGS=-lX11 -lpthread -lXinerama -lXext -lGL -g -lm -ldl
OBJS=main.o data.o ui.o files.o

all: main

main: $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c $^ -o $@

clean:
	rm -rf *.o main
