all: LabB

LabB: JoaquinsUtilities.o Dice.o LoadedDice.o LabBMain.cpp
	g++ JoaquinsUtilities.o Dice.o LoadedDice.o LabBMain.cpp -o LabB
	#valgrind --tool=memcheck --leak-check=yes LabB

Dice.o: Dice.hpp Dice.cpp 
	g++ -c Dice.cpp 

LoadedDice.o: LoadedDice.hpp LoadedDice.cpp 
	g++ -c LoadedDice.cpp 

JoaquinsUtilities.o: JoaquinsUtilities.hpp JoaquinsUtilities.cpp 
	g++ -c JoaquinsUtilities.cpp 

clean: 
	rm -rf *.o *.txt *~ *.csv

	
