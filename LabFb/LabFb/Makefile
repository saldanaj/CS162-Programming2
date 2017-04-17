all: LabFb

LabFb: JoaquinsUtilities.o Stack.o Queue.o RPNCalculator.o LabFbMain.cpp
	g++ JoaquinsUtilities.o Stack.o Queue.o RPNCalculator.o LabFbMain.cpp -o LabFb
	#valgrind --tool=memcheck --leak-check=yes LabFb

Stack.o: Stack.hpp Stack.cpp
	g++ -c Stack.cpp

Queue.o: Queue.hpp Queue.cpp	
	g++ -c Queue.cpp

RPNCalculator.o: RPNCalculator.hpp RPNCalculator.cpp
	g++ -c RPNCalculator.cpp

JoaquinsUtilities.o: JoaquinsUtilities.hpp JoaquinsUtilities.cpp 
	g++ -c JoaquinsUtilities.cpp 

clean: 
	rm -rf *.o *.txt *~ LabFb

	
