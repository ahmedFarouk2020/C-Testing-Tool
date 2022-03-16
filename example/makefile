# add flags here
Flags = -ltesting -Wall -w

lib_path = ../lib

# Add source file here
CFiles = ./example.c
output_file = example.exe

	
Build:
	gcc -o $(output_file) $(CFiles) -L $(lib_path) $(Flags)
	
.PHONY: clean
clean:
	rm $(output_file)