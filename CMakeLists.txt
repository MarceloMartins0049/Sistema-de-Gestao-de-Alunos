cmake_minimum_required(VERSION 3.16)

project(Marcelo LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Marcelo main.cpp
    disciplinaDinamica.h disciplinaDinamica.cpp
    aluno.h aluno.cpp

    disciplinaEstatica.h disciplinaEstatica.cpp
    disciplinas.h disciplinas.cpp
    GerenciadorDisciplina.h GerenciadorDisciplina.cpp
    nota.h nota.cpp

)

include(GNUInstallDirs)
install(TARGETS Marcelo
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
