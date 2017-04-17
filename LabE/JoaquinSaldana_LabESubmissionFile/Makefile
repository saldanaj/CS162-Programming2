all: LabE

LabE: JoaquinsUtilities.o CharNode.o CharStructure.o LabEMain.cpp
	g++ JoaquinsUtilities.o CharNode.o CharStructure.o LabEMain.cpp -o LabE
	#valgrind --tool=memcheck --leak-check=yes LabE

CharNode.o: CharNode.hpp CharNode.cpp
	g++ -c CharNode.cpp

CharStructure.o: CharStructure.hpp CharStructure.cpp
	g++ -c CharStructure.cpp 

JoaquinsUtilities.o: JoaquinsUtilities.hpp JoaquinsUtilities.cpp 
	g++ -c JoaquinsUtilities.cpp 

clean: 
	rm -rf *.o *.txt *~ LabD

	
