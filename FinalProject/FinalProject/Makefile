all: SaldanajFinalProject

SaldanajFinalProject: JoaquinsUtilities.o GadgetContainer.o DCCharacter.o Batman.o Joker.o Space.o Street.o ParkingGarage.o WayneManor.o BatCave.o Arkham.o ArkhamRoof.o saldanaj.cpp
	g++ JoaquinsUtilities.o GadgetContainer.o DCCharacter.o Batman.o Joker.o Space.o Street.o ParkingGarage.o WayneManor.o BatCave.o Arkham.o ArkhamRoof.o saldanaj.cpp -o SaldanajFinalProject
	#valgrind --tool=memcheck --leak-check=yes SaldanajFinalProject

GadgetContainer.o: GadgetContainer.hpp GadgetContainer.cpp
	g++ -c GadgetContainer.cpp

DCCharacter.o: DCCharacter.hpp DCCharacter.cpp 
	g++ -c DCCharacter.cpp 

Batman.o: Batman.hpp Batman.cpp 
	g++ -c Batman.cpp 

Joker.o: Joker.hpp Joker.cpp 
	g++ -c Joker.cpp 

Space.o: Space.hpp Space.cpp 
	g++ -c Space.cpp

Street.o: Street.hpp Street.cpp 
	g++ -c Street.cpp

ParkingGarage.o: ParkingGarage.hpp ParkingGarage.cpp 
	g++ -c ParkingGarage.cpp

WayneManor.o: WayneManor.hpp WayneManor.cpp 
	g++ -c WayneManor.cpp

BatCave.o: BatCave.hpp BatCave.cpp 
	g++ -c BatCave.cpp

Arkham.o: Arkham.hpp Arkham.cpp
	g++ -c Arkham.cpp

ArkhamRoof.o: ArkhamRoof.hpp ArkhamRoof.cpp
	g++ -c ArkhamRoof.cpp

JoaquinsUtilities.o: JoaquinsUtilities.hpp JoaquinsUtilities.cpp 
	g++ -c JoaquinsUtilities.cpp 

clean: 
	rm -rf *.o *.txt *~ SaldanajFinalProject

	
