CC=g++
CFLAGS=-c -Wall
LDFLAGS=
SOURCES=main.cpp PolybiosChiffre.cpp
OBJECTS=$(SOURCES:.cpp=.o)
EXECUTABLE=main

all: $(SOURCES) $(EXECUTABLE)
	
$(EXECUTABLE): $(OBJECTS) 
	$(CC) $(LDFLAGS) $(OBJECTS) -o $@

.cpp.o:
	$(CC) $(CFLAGS) $< -o $@

clean:
	rm *.o
	rm .*.swp
	rm $(EXECUTABLE)
