#ifndef DISCIPLINAS_H
#define DISCIPLINAS_H

#include "disciplinaEstatica.h"
#include <memory>

class Zootecnia : public DisciplinaEstatica
{
public:
    Zootecnia() : DisciplinaEstatica("Zootecnia", "Prof. Fulano") {}
};

class FundamentosDaTeologiaCatolica : public DisciplinaEstatica
{
public:
    FundamentosDaTeologiaCatolica() : DisciplinaEstatica("Teologia", "Prof. Beltrano") {}
};

class ClimatologiaAgricola : public DisciplinaEstatica
{
public:
    ClimatologiaAgricola() : DisciplinaEstatica("Climatologia", "Prof. Ciclano") {}
};

class EstatisticaAplicadaAAgronomia : public DisciplinaEstatica
{
public:
    EstatisticaAplicadaAAgronomia() : DisciplinaEstatica("Estatística", "Prof. Maria") {}
};

class MecanizacaoAgricola : public DisciplinaEstatica
{
public:
    MecanizacaoAgricola() : DisciplinaEstatica("Mecanização", "Prof. José") {}
};

#endif // DISCIPLINAS_H
