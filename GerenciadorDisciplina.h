#ifndef GERENCIADORDISCIPLINAS_H
#define GERENCIADORDISCIPLINAS_H

#include <memory>
#include "disciplinas.h"

class GerenciadorDisciplinas
{
public:
    std::shared_ptr<Zootecnia> zootecnia;
    std::shared_ptr<MecanizacaoAgricola> mecanizacao;
    std::shared_ptr<FundamentosDaTeologiaCatolica> teologia;

    GerenciadorDisciplinas() {
        zootecnia = std::make_shared<Zootecnia>();
        mecanizacao = std::make_shared<MecanizacaoAgricola>();
        teologia = std::make_shared<FundamentosDaTeologiaCatolica>();
    }
};

#endif // GERENCIADORDISCIPLINAS_H
