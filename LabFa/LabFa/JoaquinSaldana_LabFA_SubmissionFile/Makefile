all: LabFa

LabFa: JoaquinsUtilities.o Stack.o Queue.o LabFaMain.cpp
	g++ JoaquinsUtilities.o Stack.o Queue.o LabFaMain.cpp -o LabFa
	#valgrind --tool=memcheck --leak-check=yes LabFa

Stack.o: Stack.hpp Stack.cpp
	g++ -c Stack.cpp

Queue.o: Queue.hpp Queue.cpp
	g++ -c Queue.cpp

JoaquinsUtilities.o: JoaquinsUtilities.hpp JoaquinsUtilities.cpp 
	g++ -c JoaquinsUtilities.cpp 

clean: 
	rm -rf *.o *.txt *~ LabFa

	
