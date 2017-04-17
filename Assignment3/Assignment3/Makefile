all: Assignment3

Assignment3: JoaquinsUtilities.o Dice.o Character.o ReptilePeople.o Medusa.o Gollum.o BlueMen.o HarryPotter.o Assignment3Main.cpp
	g++ JoaquinsUtilities.o Dice.o Character.o ReptilePeople.o Medusa.o Gollum.o BlueMen.o HarryPotter.o Assignment3Main.cpp -o Assignment3
	#valgrind --tool=memcheck --leak-check=yes Assignment3

Dice.o: Dice.hpp Dice.cpp 
	g++ -c Dice.cpp 

Character.o: Character.hpp Character.cpp
	g++ -c Character.cpp

ReptilePeople.o: ReptilePeople.hpp ReptilePeople.cpp
	g++ -c ReptilePeople.cpp

Medusa.o: Medusa.hpp Medusa.cpp
	g++ -c Medusa.cpp

Gollum.o: Gollum.hpp Gollum.cpp
	g++ -c Gollum.cpp

BlueMen.o: BlueMen.hpp BlueMen.cpp 
	g++ -c BlueMen.cpp

HarryPotter.o: HarryPotter.hpp HarryPotter.cpp 
	g++ -c HarryPotter.cpp

JoaquinsUtilities.o: JoaquinsUtilities.hpp JoaquinsUtilities.cpp 
	g++ -c JoaquinsUtilities.cpp 

clean: 
	rm -rf *.o *.txt *~ Assignment3

	
