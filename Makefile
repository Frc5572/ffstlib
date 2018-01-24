

all :
	g++ ${shell find src -name '*.cpp'} -o out -std=c++1y -I./src/