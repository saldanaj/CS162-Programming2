all: LabH

CXXFLAGS = -std=c++0x

LabH: JoaquinsUtilities.o LabHMain.cpp
	g++ JoaquinsUtilities.o LabHMain.cpp -o LabH
	#valgrind --tool=memcheck --leak-check=yes LabH

JoaquinsUtilities.o: JoaquinsUtilities.hpp JoaquinsUtilities.cpp 
	g++ -c JoaquinsUtilities.cpp 

clean: 
	rm -rf *.o *.txt *~ LabH

	
