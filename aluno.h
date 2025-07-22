#ifndef ALUNO_H
#define ALUNO_H
#include <chrono>
#include <string>
#include <ctime> 

using namespace std;
using namespace std::chrono;
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
    
    //Date AnoDeNascimento;
    string NomeDoPai;
    string NomeDaMae;
    string NomeDoEncarregado;
    string ContactoDoPai;
    string ContactoDaMae;
    string ContactoDoEncarregado;
public:
    Aluno();
    Aluno(string& nomeCompleto, string& genero, int& idade, string& contacto,
    string& email, string& numeroDeIdentidade, string& cidadeDeNascimento, 
    string& provinciaDeNascimento, string& paisDeNascimento, string& endereco, 
    string& nomeDoPai, string& nomeDaMae, string& nomeDoEncarregado, string& contactoDoPai,
    string& contactoDaMae, string& contactoDoEncarregado);
};

#endif // ALUNO_H
