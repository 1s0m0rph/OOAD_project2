OUTPUT = zoo

all: Animal.o EatBehavior.o RoamBehavior.o Zookeeper.o ZooAnnouncer.o main.o
	g++ $? -g -o $(OUTPUT)

Animal.o: Animal.cpp
	g++ $? -g -c -o $@

EatBehavior.o: EatBehavior.cpp
	g++ $? -g -c -o $@

RoamBehavior.o: RoamBehavior.cpp
	g++ $? -g -c -o $@

Zookeeper.o: Zookeeper.cpp
	g++ $? -g -c -o $@

ZooAnnouncer.o: ZooAnnouncer.cpp
	g++ $? -g -c -o $@

main.o: main.cpp
	g++ $? -g -c -o $@

clean:
	rm *.o
	rm $(OUTPUT)
