#ifndef NOTAS_H
#define NOTAS_H

#include <memory>
#include <vector>
#include "disciplinas.h"

// Guarda as notas de um aluno para uma disciplina específica
class Nota
{
private:
    std::shared_ptr<DisciplinaEstatica> disciplina;
    std::vector<float> valores;

public:
    Nota(std::shared_ptr<DisciplinaEstatica> disc) : disciplina(disc) {}

    void adicionarNota(float nota) {
        valores.push_back(nota);
    }

    std::shared_ptr<DisciplinaEstatica> getDisciplina() const {
        return disciplina;
    }

    const std::vector<float>& getValores() const {
        return valores;
    }
};

#endif // NOTAS_H
