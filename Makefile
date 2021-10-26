all: exercise1

exercise1: src/exercise1.c 
	@echo "Compiling..."
	gcc -o bin/exercise1 src/exercise1.c -I/usr/include/glib-2.0 -I/usr/lib/x86_64-linux-gnu/glib-2.0/include -lglib-2.0

clean:
	@echo "Cleaning up..."
	rm -rvf exercise1.o exercise1

#all: src/exercise1.c
#	 gcc -o bin/exercise1 src/exercise1.c -I/usr/include/glib-2.0 -I/usr/lib/x86_64-linux-gnu/glib-2.0/include -lglib-2.0
