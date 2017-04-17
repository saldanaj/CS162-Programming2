all: LabD

LabD: JoaquinsUtilities.o Transformer.o CopyTransformer.o ToUpperCaseTransformer.o EncryptTransformer.o CipherTextTransformer.o LabDMain.cpp
	g++ JoaquinsUtilities.o Transformer.o CopyTransformer.o ToUpperCaseTransformer.o EncryptTransformer.o CipherTextTransformer.o LabDMain.cpp -o LabD
	#valgrind --tool=memcheck --leak-check=yes LabD

Transformer.o: Transformer.hpp Transformer.cpp
	g++ -c Transformer.cpp

CopyTransformer.o: CopyTransformer.hpp CopyTransformer.cpp
	g++ -c CopyTransformer.cpp

ToUpperCaseTransformer.o: ToUpperCaseTransformer.hpp ToUpperCaseTransformer.cpp
	g++ -c ToUpperCaseTransformer.cpp

EncryptTransformer.o: EncryptTransformer.hpp EncryptTransformer.cpp
	g++ -c EncryptTransformer.cpp

CipherTextTransformer.o: CipherTextTransformer.hpp CipherTextTransformer.cpp 
	g++ -c CipherTextTransformer.cpp

JoaquinsUtilities.o: JoaquinsUtilities.hpp JoaquinsUtilities.cpp 
	g++ -c JoaquinsUtilities.cpp 

clean: 
	rm -rf *.o *.txt *~ LabD

	
