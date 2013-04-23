CC=g++
CFLAGS=-c -Wall
LDFLAGS=
SOURCES=main.cpp Rectangle.cpp Object2D.cpp Circle.cpp Triangle.cpp
OBJECTS=$(SOURCES:.cpp=.o)
EXECUTABLE=main

all: $(SOURCES) $(EXECUTABLE)
	
$(EXECUTABLE): $(OBJECTS) 
	$(CC) $(LDFLAGS) $(OBJECTS) -o $@

.cpp.o:
	$(CC) $(CFLAGS) $< -o $@

clean:
	rm -f *.o
	rm -f .*.swp
	rm -f $(EXECUTABLE)
