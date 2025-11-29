# -*- Makefile -*-

CC = gcc

FLAGS = -Wall -Wextra -Iinclude

OBJ = ./build/main.o ./build/math.o ./build/input.o

TARGET = ./bin/project

run: ${TARGET}
	./${TARGET}

${TARGET}: ${OBJ}
	${CC} ${OBJ} -o ${TARGET} ${FLAGS}

./build/main.o: ./src/main.c ./include/math.h ./include/input.h
	${CC} main.c -c ./build/main.o

./build/math.o: ./src/math.c ./include/math.h ./include/input.h
	${CC} math.c -c ./build/math.o

./build/input.o: ./src/input.c ./include/input.h
	${CC} input.c -c ./build/input.o



