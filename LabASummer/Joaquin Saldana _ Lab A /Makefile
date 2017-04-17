all: LabA

LabA: average.o summation.o LabAMain.cpp
	g++ average.o summation.o LabAMain.cpp -o LabA
	valgrind --tool=memcheck --leak-check=yes LabA

average.o: average.h average.cpp 
	g++ -c average.cpp 

summation.o: summation.h summation.cpp 
	g++ -c summation.cpp 

clean: 
	rm -rf *.o 

	
