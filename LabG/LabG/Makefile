all: LabG

LabG: JoaquinsUtilities.o LinearSearch.o BubbleSort.o BinarySearch.o LabGMain.cpp
	g++ JoaquinsUtilities.o LinearSearch.o BubbleSort.o BinarySearch.o LabGMain.cpp -o LabG
	#valgrind --tool=memcheck --leak-check=yes LabG

LinearSearch.o: LinearSearch.hpp LinearSearch.cpp
	g++ -c LinearSearch.cpp

BubbleSort.o: BubbleSort.hpp BubbleSort.cpp
	g++ -c BubbleSort.cpp

BinarySearch.o: BinarySearch.hpp BinarySearch.cpp
	g++ -c BinarySearch.cpp

JoaquinsUtilities.o: JoaquinsUtilities.hpp JoaquinsUtilities.cpp 
	g++ -c JoaquinsUtilities.cpp 

clean: 
	rm -rf *.o *.txt *~ LabG

	
