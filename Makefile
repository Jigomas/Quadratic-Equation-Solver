C_FLAGS=-Wshadow -Winit-self -Wredundant-decls -Wcast-align -Wundef -Wfloat-equal -Winline -Wunreachable-code -Wmissing-declarations -Wmissing-include-dirs -Wswitch-enum -Wswitch-default -Weffc++ -Wmain -Wextra -Wall -g -pipe -fexceptions -Wcast-qual -Wconversion -Wctor-dtor-privacy -Wempty-body -Wformat-security -Wformat=2 -Wignored-qualifiers -Wlogical-op -Wno-missing-field-initializers -Wnon-virtual-dtor -Woverloaded-virtual -Wpointer-arith -Wsign-promo -Wstack-usage=8192 -Wstrict-aliasing -Wstrict-null-sentinel -Wtype-limits -Wwrite-strings -Werror=vla -D_DEBUG -D_EJUDGE_CLIENT_SIDE
EXECUTION_NAME = a.exe

all: Main.o   Tests.o   Exit_Codes.o   Inputs.o   Solvings.o
	g++ .\Main.o .\Tests.o .\Exit_Codes.o .\Inputs.o .\Solvings.o -o $(EXECUTION_NAME)

Main: Main.cpp
	g++ .\Main.cpp -c $(C_FLAGS)

Test: Tests.cpp
	g++ .\Tests.cpp -c $(C_FLAGS)

Exit_Codes: Exit_Codes.cpp
	g++ .\Exit_Codes.cpp -c $(C_FLAGS)

Inputs: Inputs.cpp
	g++ .\Inputs.cpp -c $(C_FLAGS)

Solvings: Solvings.cpp
	g++ .\Solvings.cpp -c $(C_FLAGS)



run:
	.\a.exe

clean:
	rm *.o
	rm *.exe
