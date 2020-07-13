PROG = prog
CC = g++
CPPFLAGS = -O0 -std=c++11 -g 

$(PROG) : main.o Empresa.o Funcionario.o
	$(CC)  main.o Empresa.o Funcionario.o  -o $(PROG)

main.o :
	$(CC) $(CPPFLAGS) -c src/main.cpp

Empresa.o :  include/Empresa.hpp
	$(CC) $(CPPFLAGS) -c src/Empresa.cpp

Funcionario.o : include/Funcionario.hpp
	$(CC) $(CPPFLAGS) -c src/Funcionario.cpp

clean:
	rm -f *.o