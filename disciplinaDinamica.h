#ifndef DISCIPLINADINAMICA_H
#define DISCIPLINADINAMICA_H
#include <string>

class DisciplinaDinamica
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
    DisciplinaDinamica();

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

#endif // DISCIPLINADINAMICA_H
