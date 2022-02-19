CC = g++
CFLAGS = -std=c++11 -c -g -Og -Wall -Werror -pedantic
OBJ = CelestialBody.o	main.o 
DEPS = CelestialBody.hpp
LIBS = -lsfml-graphics -lsfml-window -lsfml-system
EXE = ps2a

all: $(OBJ)
	$(CC) $(OBJ) -o $(EXE) $(LIBS)

CelestialBody.o: CelestialBody.cpp $(DEPS)
	$(CC) $(CFLAGS) CelestialBody.cpp 

main.o: main.cpp $(DEPS)
	$(CC) $(CFLAGS) main.cpp 

clean:
	rm $(OBJ) $(EXE)