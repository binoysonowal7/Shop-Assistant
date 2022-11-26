current_dir = $(shell pwd)

default:
	g++-11 -I$(current_dir)/lib $(current_dir)/src/*.cpp $(current_dir)/main.cpp -o output

cook-headers:
	g++-11 -I$(current_dir)/lib $(current_dir)/lib/*.h
	@echo "Precompiled headers created!"