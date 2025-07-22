#ifndef DISCIPLINAALUNO_H
#define DISCIPLINAALUNO_H
#include <string>

class DisciplinaAluno
{
private:
    double Teste1;
    double Teste2;
    double TrabalhoIndividual;
    double TrabalhoEmGrupo;
    double Media;
    double Exame;
    std::string EstadoRegular;

public:
    DisciplinaAluno();

    // Getters
    std::string getEstadoRegular() const;
    double getTeste1() const;
    double getTeste2() const;
    double getTrabalhoIndividual() const;
    double getTrabalhoEmGrupo() const;
    double getMedia();
    double getExame() const;

    // Setters
    void setEstadoRegular(std::string& estadoRegular);
    void setTeste1(double& teste1);
    void setTeste2(double& teste2);
    void setTrabalhoIndividual(double& trabalhoIndividual);
    void setTrabalhoEmGrupo(double& trabalhoEmGrupo);
    void setMedia();
    void setExame(double& exame);
};

#endif // DISCIPLINAALUNO_H
