momo:	main.o MOHANNED.o
	g++ -o momo main.o MOHANNED.o

main.o:	main.cc MOHANNED.h
	g++ -c main.cc

MOHANNED.o: MOHANNED.cc MOHANNED.h
	g++ -c MOHANNED.cc

clean:
	rm -f *.o momo
