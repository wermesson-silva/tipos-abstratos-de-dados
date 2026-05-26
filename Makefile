CXX = g++

CXXFLAGS = -Wall -W -std=c++17

all: programa

programa:
	$(CXX) $(CXXFLAGS) \
	main.cpp \
	sequencia/Sequencia.cpp \
	conjunto/Set.cpp \
	array_sequence/ArraySequence.cpp \
	-o programa

run: programa
	./programa

clean:
	rm -f programa