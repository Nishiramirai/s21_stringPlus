TARGET = s21_string
CC = gcc
FLAGS = -Wall -Wextra -std=c11

all: $(TARGET)

clean:
	rm -f *.o $(TARGET)

$(TARGET): $(TARGET).o s21_strlen.o
	$(CC) $(FLAGS) $(TARGET).o s21_strlen.o -o $(TARGET)

$(TARGET).o: $(TARGET).c
	$(CC) $(FLAGS) -c $(TARGET).c

s21_strlen.o: s21_strlen.c
	$(CC) $(FLAGS) -c -o s21_strlen.o s21_strlen.c 