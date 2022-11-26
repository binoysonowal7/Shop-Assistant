current_dir = $(shell pwd)

default:
	g++-11 -I$(current_dir)/src $(current_dir)/src/*.cpp $(current_dir)/src/*.h $(current_dir)/main.cpp
