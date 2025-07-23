#include "disciplinaDinamica.h"
#include <iostream>
#include <algorithm>
#include <cctype>


// Getters
std::string DisciplinaDinamica::getEstadoRegular() const {
    return EstadoRegular;
}

double DisciplinaDinamica::getTeste1() const {
    return Teste1;
}

double DisciplinaDinamica::getTeste2() const {
    return Teste2;
}

double DisciplinaDinamica::getTrabalhoIndividual() const {
    return TrabalhoIndividual;
}

double DisciplinaDinamica::getTrabalhoEmGrupo() const {
    return TrabalhoEmGrupo;
}

double DisciplinaDinamica::getMedia() {
    setMedia();
    return Media;
}

double DisciplinaDinamica::getExame() const {
    return Exame;
}

// Setters
void DisciplinaDinamica::setEstadoRegular(std::string& estadoRegular) {
    EstadoRegular = estadoRegular;
}

void DisciplinaDinamica::setTeste1(double& teste1) {
    Teste1 = teste1;
}

void DisciplinaDinamica::setTeste2(double& teste2) {
    Teste2 = teste2;
}

void DisciplinaDinamica::setTrabalhoIndividual(double& trabalhoIndividual) {
    TrabalhoIndividual = trabalhoIndividual;
}

void DisciplinaDinamica::setTrabalhoEmGrupo(double& trabalhoEmGrupo) {
    TrabalhoEmGrupo = trabalhoEmGrupo;
}

void DisciplinaDinamica::setMedia() {
    Media = (Teste1 * 0.3) + (Teste2 * 0.3) + (TrabalhoEmGrupo * 0.15) + (TrabalhoIndividual * 0.25);
}

void DisciplinaDinamica::setExame(double& exame) {
    Exame = exame;
}
