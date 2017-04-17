all: LabAb

LabAb: JoaquinsUtilities.o average.o summation.o LabAbMain.cpp
	g++ JoaquinsUtilities.o average.o summation.o LabAbMain.cpp -o LabAb
	#valgrind --tool=memcheck --leak-check=yes LabAb

average.o: average.hpp average.cpp
	g++ -c average.cpp

summation.o: summation.hpp summation.cpp
	g++ -c summation.cpp

JoaquinsUtilities.o: JoaquinsUtilities.hpp JoaquinsUtilities.cpp 
	g++ -c JoaquinsUtilities.cpp 

clean: 
	rm -rf *.o *.txt *~ LabAb

	
