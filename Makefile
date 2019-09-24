CFLAGS = -I ./include
##LIB    = ./lib/fmod/libfmodex64.so
LFLAGS = -lrt -lX11 -lGLU -lGL -lm #-lXrandr

all: rainforest

<<<<<<< HEAD
rainforest: rainforest.cpp log.cpp brianM.cpp krystalR.cpp graceloveS.cpp angelaT.cpp
	g++ $(CFLAGS) rainforest.cpp brianM.cpp krystalR.cpp graceloveS.cpp angelaT.cpp log.cpp libggfonts.a -Wall -Wextra $(LFLAGS) -o rainforest
=======
rainforest: rainforest.cpp log.cpp brianM.cpp krystalR.cpp graceloveS.cpp
	g++ $(CFLAGS) rainforest.cpp brianM.cpp krystalR.cpp graceloveS.cpp log.cpp libggfonts.a -Wall -Wextra $(LFLAGS) -o rainforest
>>>>>>> 84eb98511506d738238b8ae6b89f777aef6471f5

clean:
	rm -f rainforest
	rm -f *.o

