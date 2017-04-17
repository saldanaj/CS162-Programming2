all: Assignment1

Assignment1: Items.o List.o Assignment1Main.cpp
	g++ Items.o List.o Assignment1Main.cpp -o Assignment1
	valgrind --tool=memcheck --leak-check=yes Assignment1

Items.o: Items.hpp Items.cpp 
	g++ -c Items.cpp 

List.o: List.hpp List.cpp 
	g++ -c List.cpp 

clean: 
	rm -rf *.o 

	
