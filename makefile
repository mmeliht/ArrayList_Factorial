program: derle calistir

derle:
	g++ -I ./include/ -o ./lib/ArrayList.o -c ./src/ArrayList.cpp
	g++ -I ./include/ -o ./lib/Factorial.o -c ./src/Factorial.cpp
	g++ -I ./include/ -o ./bin/Test ./lib/ArrayList.o ./lib/Factorial.o ./src/Test.cpp
calistir:
	./bin/Test