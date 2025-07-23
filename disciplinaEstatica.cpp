#include "disciplinaEstatica.h"
#include <iostream>
#include <algorithm>
#include <cctype>

DisciplinaEstatica::DisciplinaEstatica(const std::string nomeDaCadeira, const std::string &nomeDoDocente)
{
    NomeDaCadeira = nomeDaCadeira;
    NomeDoDocente = nomeDoDocente;
}

//Getters
std::string DisciplinaEstatica::getNomeDaCadeira() const
{
    return NomeDaCadeira;
}
std::string DisciplinaEstatica::getNomeDoDocente() const
{
    return NomeDoDocente;
}

//Setters

void DisciplinaEstatica::setNomeDaCadeira(std::string& nomeDaCadeira)
{
    // Validação: o nome não pode estar vazio ou conter apenas espaços/brancos
    bool nomeValido = !nomeDaCadeira.empty() &&
                      !std::all_of(nomeDaCadeira.begin(), nomeDaCadeira.end(), [](char c) {
                          return std::isspace(static_cast<unsigned char>(c));
                      });

    if (nomeValido) {
        NomeDaCadeira = nomeDaCadeira;
    }
    // Se for inválido, não muda o nome atual
}

void DisciplinaEstatica::setNomeDoDocente(std::string& nomeDoDocente)
{
    NomeDoDocente = nomeDoDocente;
}
