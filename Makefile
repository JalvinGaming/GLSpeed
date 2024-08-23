INC = -I include -I bin/include
LIB = -Llib -lSDL2.dll -lSDL2main
SRC = src

compile:
	g++ $(SRC)/*.cpp $(INC) $(LIB) -c
libset:
	ar rcs bin/lib/GLSpeed.a *.o