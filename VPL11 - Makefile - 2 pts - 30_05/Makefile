main: build/main.o build/Professor.o build/Funcionario.o build/Pessoa.o
	# Linking the object files to create the executable
	c++ -I include -std=c++17 build/main.o build/Professor.o build/Funcionario.o build/Pessoa.o -o vpl_execution

build/Pessoa.o: src/entidades/Pessoa.cpp include/Pessoa.hpp
	# Compiling Pessoa.cpp to create the object file Pessoa.o
	c++ -I include -std=c++17 -c src/entidades/Pessoa.cpp -o build/Pessoa.o

build/Funcionario.o: src/entidades/Funcionario.cpp include/Funcionario.hpp
	# Compiling Funcionario.cpp to create the object file Funcionario.o
	c++ -I include -std=c++17 -c src/entidades/Funcionario.cpp -o build/Funcionario.o

build/Professor.o: src/entidades/Professor.cpp include/Professor.hpp
	# Compiling Professor.cpp to create the object file Professor.o
	c++ -I include -std=c++17 -c src/entidades/Professor.cpp -o build/Professor.o

build/main.o: src/main.cpp
	# Compiling main.cpp to create the object file main.o
	c++ -I include -std=c++17 -c src/main.cpp -o build/main.o
