driver: main.out
	./main.out
	
main.out: main.cpp Queue.h Node.h Collection.h
	g++ -omain.out main.cpp Queue.h Node.h

clean:
	rm -rf main.out
