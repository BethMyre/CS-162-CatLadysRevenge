#This makefile is based on examples from the following videos:
#	- The OSU CS 162 Makefiles lecture from Kevin McGrath
#	- Paul Programming - How to Create a Simple Makefile:
#		Introduction to Makefiles

CXX = g++
CXXFLAGS = -std=c++11
CXXFLAGS += -Wall
CXXFLAGS += -pedantic-errors

OBJS = bag.o dogMan.o game.o home.o intValidate.o main.o park.o restaurant.o space.o store.o street.o work.o 

SRCS = bag.cpp dogMan.cpp game.cpp home.cpp intValidate.cpp main.cpp park.cpp restaurant.cpp space.cpp store.cpp street.cpp work.cpp

catLady: ${OBJS} ${HEADERS}
	${CXX} ${OBJS} -o catLady

${OBJS}: ${SRCS}
	${CXX} ${CXXFLAGS} -c $(@:.o=.cpp)

clean:
	rm *.o catLady
