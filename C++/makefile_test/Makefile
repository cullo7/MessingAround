
output: main.o message.o
	g++ main.o message.o -o output

main.o: main.cpp
	g++ -std=c++17 -c main.cpp

message.o: message.cpp message.h
	g++ -std=c++17 -c message.cpp

clean:
	rm *.o output *~ \#*\#
