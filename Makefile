# $(CC) -DOPT=1 -c $(SOURCE)
CC=gcc
DEFNAME=OPT
SOURCE=code.c
OBJ=code.o
TARGET=code

compile0:
	$(CC) -c -D$(DEFNAME)=0 $(SOURCE)
compile1:
	$(CC) -c -D$(DEFNAME)=1 $(SOURCE)
compile2:
	$(CC) -c -D$(DEFNAME)=2 $(SOURCE)
build:
	$(CC) $(OBJ) -o $(TARGET)
clean:
	rm -rf $(OBJ) $(TARGET)
.PHONY: clean

# all: clean build

