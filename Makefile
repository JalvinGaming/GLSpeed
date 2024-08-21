INC = -I include -I bin/include
LIB = -Llib -lSDL2.dll -lSDL2main
SRC = src

compile:
	g++ $(SRC)/*.cpp $(INC) $(LIB) -c
lib:
	ar rcs bin/GLSpeed.a $(SRC)/*.o