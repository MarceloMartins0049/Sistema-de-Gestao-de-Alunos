#include "aluno.h"
#include <iostream>

Aluno::Aluno() = default;

Aluno::Aluno(string& nomeCompleto, string& genero, int& idade, string& contacto,
             string& email, string& numeroDeIdentidade, string& cidadeDeNascimento,
             string& provinciaDeNascimento, string& paisDeNascimento, string& endereco,
             string& nomeDoPai, string& nomeDaMae, string& nomeDoEncarregado, string& contactoDoPai,
             string& contactoDaMae, string& contactoDoEncarregado)
    : NomeCompleto(nomeCompleto), Genero(genero), Idade(idade), Contacto(contacto),
    Email(email), NumeroDeIdentidade(numeroDeIdentidade), CidadeDeNascimento(cidadeDeNascimento),
    ProvinciaDeNascimento(provinciaDeNascimento), PaisDeNascimento(paisDeNascimento), Endereco(endereco),
    NomeDoPai(nomeDoPai), NomeDaMae(nomeDaMae), NomeDoEncarregado(nomeDoEncarregado),
    ContactoDoPai(contactoDoPai), ContactoDaMae(contactoDaMae), ContactoDoEncarregado(contactoDoEncarregado)
{ }

void Aluno::adicionarNota(shared_ptr<DisciplinaEstatica> disciplina, float valor) {
    for (auto& nota : notas) {
        if (nota.getDisciplina()->getNomeDaCadeira() == disciplina->getNomeDaCadeira()) {
            nota.adicionarNota(valor);
            return;
        }
    }
    Nota novaNota(disciplina);
    novaNota.adicionarNota(valor);
    notas.push_back(novaNota);
}

void Aluno::mostrarNotas() const {
    std::cout << "Notas de " << NomeCompleto << ":\n";
    for (const auto& nota : notas) {
        std::cout << "- " << nota.getDisciplina()->getNomeDaCadeira() << ": ";
        for (auto val : nota.getValores()) {
            std::cout << val << " ";
        }
        std::cout << "\n";
    }
}
