#ifndef DISCIPLINAINFO_H
#define DISCIPLINAINFO_H
#include <string>
class DisciplinaInfo
{
private:
    std::string NomeDaCadeira;
    std::string NomeDoDocente;
public:
    DisciplinaInfo();
    DisciplinaInfo(const std::string nomeDaCadeira, const std::string& nomeDoDocente);

    //Getters
    std::string getNomeDaCadeira() const;
    std::string getNomeDoDocente() const;

    //Setters
    void setNomeDaCadeira(std::string& nomeDaCadeira);
    void setNomeDoDocente(std::string& nomeDoDocente);
};

#endif // DISCIPLINAINFO_H
