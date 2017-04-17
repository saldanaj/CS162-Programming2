all: Assignment2

Assignment2: JoaquinsUtilities.o Critter.o Ant.o Doodlebug.o Assignment2Main.cpp
	g++ JoaquinsUtilities.o Critter.o Ant.o Doodlebug.o Assignment2Main.cpp -o Assignment2
	#valgrind --tool=memcheck --leak-check=yes Assignment2

Critter.o: Critter.hpp Critter.cpp 
	g++ -c Critter.cpp 

Ant.o: Ant.hpp Ant.cpp 
	g++ -c Ant.cpp 

Doodlebug.o: Doodlebug.hpp Doodlebug.cpp 
	g++ -c Doodlebug.cpp 

JoaquinsUtilities.o: JoaquinsUtilities.hpp JoaquinsUtilities.cpp 
	g++ -c JoaquinsUtilities.cpp 

clean: 
	rm -rf *.o *.txt *~ *.csv *.exe Assignment2

	
