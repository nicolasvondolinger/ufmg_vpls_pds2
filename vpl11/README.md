Você possui um programa bem simples, estruturado de acordo com a hierarquia de diretórios abaixo.

. programa
├── Makefile
├── build/
│  └── [arquivos.o]
├── include/
│  └── Pessoa.hpp
│  └── Funcionario.hpp
│  └── Professor.hpp
└── src/
│  └── entidades/
│    └── Pessoa.cpp
│    └── Funcionario.cpp
│    └── Professor.cpp
│  └── main.cpp

O seu objetivo é unicamente escrever um arquivo Makefile para esse programa, seguindo as seguintes orientações:

    Todas as entidades e o arquivo main devem ser compilados individualmente e os arquivos *.o resultantes devem ser salvos no diretório /build/

    Em seguida, os arquivos compilados devem ser linkados em um executável resultante chamado vpl_execution, que deve ser salvo no diretório raiz da aplicação.

Você pode copiar o arquivo zipado do projeto aqui para poder fazer o desenvolvimento localmente.
