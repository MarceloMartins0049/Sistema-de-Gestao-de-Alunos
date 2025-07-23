#ifndef DISCIPLINAESTATICA_H
#define DISCIPLINAESTATICA_H
#include <string>
class DisciplinaEstatica
{
private:
    std::string NomeDaCadeira;
    std::string NomeDoDocente;
public:
    DisciplinaEstatica();
    DisciplinaEstatica(const std::string nomeDaCadeira, const std::string& nomeDoDocente);


    //Getters
    std::string getNomeDaCadeira() const;
    std::string getNomeDoDocente() const;

    //Setters
    void setNomeDaCadeira(std::string& nomeDaCadeira);
    void setNomeDoDocente(std::string& nomeDoDocente);
};

#endif // DISCIPLINAESTATICA_H
