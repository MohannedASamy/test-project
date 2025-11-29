# -*- Makefile -*-

CC = gcc

FLAGS = -Wall -Wextra -Iinclude

OBJ = ./build/main.o ./build/math.o ./build/input.o

TARGET = ./bin/project

run: compile
	${TARGET}

compile : ${TARGET}

${TARGET}: ${OBJ}
	${CC} ${OBJ} -o ${TARGET} ${FLAGS}

./build/main.o: ./src/main.c ./include/math.h ./include/input.h
	${CC} ./src/main.c -c -o ./build/main.o ${FLAGS}

./build/math.o: ./src/math.c ./include/math.h ./include/input.h
	${CC} ./src/math.c -c -o ./build/math.o ${FLAGS}

./build/input.o: ./src/input.c ./include/input.h
	${CC} ./src/input.c -c -o ./build/input.o ${FLAGS}



