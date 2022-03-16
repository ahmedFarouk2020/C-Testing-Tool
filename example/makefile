#---------------------------------------------
#-------	For User Configurations
#-----------------------------------------------

# add flags here (don't remove.. add only)
Flags = -ltesting -Wall -w

# configure the lib folder path
lib_path = ../lib

# Add source file to be compiled
CFiles = ./example.c

# Configure output file name
output_file = example.exe


#========================================================
#======		Don't change here	
#========================================================
Build:
	gcc -o $(output_file) $(CFiles) -L $(lib_path) $(Flags)
	
.PHONY: clean
clean:
	rm $(output_file)