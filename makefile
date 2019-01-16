# Final Project: A Test-based Game
# Author: Melisa Lee
# Date: 12/3/2018

CXX = g++
CXXFLAGS = -std=c++0x
CXXFLAGS += -Wall
CXXFLAGS += -pedantic-errors
CXXFLAGS += -g
#CXXFLAGS += -O3LDFLAGS = -lboost_date_time
LDFLAGS = -lboost_date_time

HEADER = Bag.hpp Bowser.hpp Character.hpp FinalSpace.hpp Game.hpp LuckySpace.hpp Luigi.hpp Mario.hpp Menu.hpp Space.hpp StartSpace.hpp UnluckySpace.hpp validate.hpp

OBJS = Bag.o Bowser.o Character.o FinalSpace.o Game.o LuckySpace.o Luigi.o Mario.o Menu.o Space.o StartSpace.o UnluckySpace.o validate.o main.o

SRCS = Bag.cpp Bowser.cpp Character.cpp FinalSpace.cpp Game.cpp LuckySpace.cpp Luigi.cpp Mario.cpp Menu.cpp Space.cpp StartSpace.cpp UnluckySpace.cpp validate.cpp main.cpp

FP: ${OBJS} ${HEADER}
	${CXX} ${LDFLAGS} ${OBJS} -o FP
${OBJS}: ${SRCS}
	${CXX} ${CXXFLAGS} -c $(@:.o=.cpp)

clean:
	rm *o FP

