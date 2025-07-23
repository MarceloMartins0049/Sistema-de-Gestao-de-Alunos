#ifndef ALUNO_H
#define ALUNO_H

#include <string>
#include <vector>
#include <memory>
#include "nota.h"
#include "disciplinaEstatica.h"

using namespace std;

class Aluno
{
private:
    string NomeCompleto;
    string Genero;
    int Idade;
    string Contacto;
    string Email;
    string NumeroDeIdentidade;
    string CidadeDeNascimento;
    string ProvinciaDeNascimento;
    string PaisDeNascimento;
    string Endereco;

    string NomeDoPai;
    string NomeDaMae;
    string NomeDoEncarregado;
    string ContactoDoPai;
    string ContactoDaMae;
    string ContactoDoEncarregado;

    vector<Nota> notas;  // vetor de notas do aluno

public:
    Aluno();
    Aluno(string& nomeCompleto, string& genero, int& idade, string& contacto,
          string& email, string& numeroDeIdentidade, string& cidadeDeNascimento,
          string& provinciaDeNascimento, string& paisDeNascimento, string& endereco,
          string& nomeDoPai, string& nomeDaMae, string& nomeDoEncarregado, string& contactoDoPai,
          string& contactoDaMae, string& contactoDoEncarregado);

    void adicionarNota(shared_ptr<DisciplinaEstatica> disciplina, float valor);
    void mostrarNotas() const;

    // Outros getters/setters podem ser adicionados aqui
};

#endif // ALUNO_H
