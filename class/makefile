libdate.so:date.o
	g++ --shared -o libdate.so date.o

date.o:date.cpp date.h
	g++ -c -fPIC date.cpp 

install:libdate.so date.h 
	sudo cp date.h /usr/include/
	sudo cp libdate.so /usr/lib/

uninstall:/usr/lib/libdate.so /usr/include/date.h
	sudo rm -rf /usr/include/date.h
	sudo rm -rf /usr/lib/libdate.so

clean:
	rm -rf libdate.so
