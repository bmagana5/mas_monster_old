CFLAGS = -I ./include
##LIB    = ./lib/fmod/libfmodex64.so
LFLAGS = -lrt -lX11 -lGLU -lGL -lm #-lXrandr

all: rainforest


rainforest: rainforest.cpp log.cpp brianM.cpp krystalR.cpp graceloveS.cpp angelaT.cpp credits.cpp 
	g++ $(CFLAGS) rainforest.cpp brianM.cpp krystalR.cpp graceloveS.cpp angelaT.cpp log.cpp credits.cpp libggfonts.a -Wall -Wextra -lcrypto -lssl $(LFLAGS) -o rainforest


clean:
	rm -f rainforest
	rm -f *.o

