#include "disciplinaAluno.h"
#include <iostream>
#include <algorithm>
#include <cctype>

DisciplinaAluno::DisciplinaAluno()
    : Teste1(0), Teste2(0), TrabalhoIndividual(0), TrabalhoEmGrupo(0), Media(0), Exame(0), EstadoRegular("Regular")
{}

// Getters
std::string DisciplinaAluno::getEstadoRegular() const {
    return EstadoRegular;
}

double DisciplinaAluno::getTeste1() const {
    return Teste1;
}

double DisciplinaAluno::getTeste2() const {
    return Teste2;
}

double DisciplinaAluno::getTrabalhoIndividual() const {
    return TrabalhoIndividual;
}

double DisciplinaAluno::getTrabalhoEmGrupo() const {
    return TrabalhoEmGrupo;
}

double DisciplinaAluno::getMedia() {
    setMedia();
    return Media;
}

double DisciplinaAluno::getExame() const {
    return Exame;
}

// Setters
void DisciplinaAluno::setEstadoRegular(std::string& estadoRegular) {
    EstadoRegular = estadoRegular;
}

void DisciplinaAluno::setTeste1(double& teste1) {
    Teste1 = teste1;
}

void DisciplinaAluno::setTeste2(double& teste2) {
    Teste2 = teste2;
}

void DisciplinaAluno::setTrabalhoIndividual(double& trabalhoIndividual) {
    TrabalhoIndividual = trabalhoIndividual;
}

void DisciplinaAluno::setTrabalhoEmGrupo(double& trabalhoEmGrupo) {
    TrabalhoEmGrupo = trabalhoEmGrupo;
}

void DisciplinaAluno::setMedia() {
    Media = (Teste1 * 0.3) + (Teste2 * 0.3) + (TrabalhoEmGrupo * 0.15) + (TrabalhoIndividual * 0.25);
}

void DisciplinaAluno::setExame(double& exame) {
    Exame = exame;
}
