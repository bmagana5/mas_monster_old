CFLAGS = -I ./include
##LIB    = ./lib/fmod/libfmodex64.so
LFLAGS = -lrt -lX11 -lGLU -lGL -lm #-lXrandr

all: rainforest

rainforest: rainforest.cpp log.cpp brianM.cpp krystalR.cpp graceloveS.cpp
	g++ $(CFLAGS) rainforest.cpp brianM.cpp krystalR.cpp graceloveS.cpp log.cpp libggfonts.a -Wall -Wextra $(LFLAGS) -o rainforest

clean:
	rm -f rainforest
	rm -f *.o

