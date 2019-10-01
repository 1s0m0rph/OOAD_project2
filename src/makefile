OUTPUT = zoo

all: Animal.o EatBehavior.o RoamBehavior.o Zookeeper.o ZooAnnouncer.o main.o
	g++ $? --std=c++11 -g -o $(OUTPUT)

Animal.o: Animal.cpp
	g++ $? --std=c++11 -g -c -o $@

EatBehavior.o: EatBehavior.cpp
	g++ $? --std=c++11 -g -c -o $@

RoamBehavior.o: RoamBehavior.cpp
	g++ $? --std=c++11 -g -c -o $@

Zookeeper.o: Zookeeper.cpp
	g++ $? --std=c++11 -g -c -o $@

ZooAnnouncer.o: ZooAnnouncer.cpp
	g++ $? --std=c++11 -g -c -o $@

main.o: main.cpp
	g++ $? --std=c++11 -g -c -o $@

clean:
	rm *.o
	rm $(OUTPUT)
