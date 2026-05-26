CXX = g++

CXXFLAGS = -Wall -W -std=c++17

all: programa

programa:
	$(CXX) $(CXXFLAGS) \
	main.cpp \
	sequencia/sequencia.cpp \
	conjunto/arrayset.cpp \
	array_sequence/arraysequence.cpp \
	-o programa

run: programa
	./programa

clean:
	rm -f programa