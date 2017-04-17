all: LabC

LabC: JoaquinsUtilities.o LabCRecursiveFunctions.o LabCMain.cpp
	g++ JoaquinsUtilities.o LabCRecursiveFunctions.o LabCMain.cpp -o LabC
	#valgrind --tool=memcheck --leak-check=yes LabC

LabCRecursiveFunctions.o: LabCRecursiveFunctions.hpp LabCRecursiveFunctions.cpp 
	g++ -c LabCRecursiveFunctions.cpp 

JoaquinsUtilities.o: JoaquinsUtilities.hpp JoaquinsUtilities.cpp 
	g++ -c JoaquinsUtilities.cpp 

clean: 
	rm -rf *.o *.txt *~ *.exe LabC

	
