CC=g++
CFLAGS=-c -Wall -g
LDFLAGS=
SOURCES=main.cpp LinkedNode.cpp LinkedList.cpp DoublyLinkedList.cpp
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


run: clean all
	./$(EXECUTABLE)

debug: clean all
	gdb $(EXECUTABLE)

