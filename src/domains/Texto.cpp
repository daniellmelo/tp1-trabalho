#include "Texto.hpp"
#include <iostream>
Texto::Texto(std::string texto){
    try{
        validar(texto);
        m_texto = texto;
    } catch (std::invalid_argument& e){
        std::cout << e.what() << std::endl;
        throw std::invalid_argument("Formato de texto inválido.");
    };
};

void Texto::validar(std::string texto){
    // Verificar se o texto tem entre 5 e 30 caracteres
    if (texto.size() < 5 || texto.size() > 30) {
        throw std::invalid_argument("Deve conter entre 5 a 30 caracteres.");
    }

    // Verificar se cada caractere e letra, digito, sinal de pontuacao ou espaco em branco
    if (!std::regex_match(texto, std::regex("^[A-Za-z0-9.,;?! ]+$"))) {
        throw std::invalid_argument("Sao permitidos somente letras (a-z A-Z), digitos (0-9), sinais de pontuacao(.,;?!) e espacos em branco.");
    }

    char prevChar = '\0'; // Caractere anterior (inicializado com um caractere nulo)
    bool prevSpace = false; // Flag para verificar espacos em branco em sequencia
    bool prevPunctuation = false; // Flag para verificar sinais de pontuacao em sequência

    for (char c : texto) {
        // Verificar se nao ha acentuacao (assumindo que a entrada esta em ASCII)
        if (c < 0 || c > 127) {
            throw std::invalid_argument("Nao deve conter acentuacao.");
        }

        // Verificar se o primeiro caractere e letra maiuscula
        if (!std::isalpha(texto[0]) || !std::isupper(texto[0])) {
            throw std::invalid_argument("O primeiro caractere deve ser letra maiuscula.");
        }

        // Verificar se o primeiro caractere apos sinal de pontuacao (exceto virgula ou ponto-e-vi rgula) e letra maiuscula
        if (prevChar != ',' && prevChar != ';' && std::ispunct(prevChar) && !std::isupper(c)) {
            throw std::invalid_argument("Primeiro caractere apos sinal de pontuacao (exceto virgula e ponto-e-virgula) deve ser maiusculo.");
        }

        // Verificar espacos em branco em sequencia
        if (c == ' ') {
            if (prevSpace) {
                throw std::invalid_argument("Nao pode haver espacos em branco em sequencia.");
            }
            prevSpace = true;
        } else {
            prevSpace = false;
        }

        // Verificar sinais de pontuacao em sequencia
        if (std::ispunct(c)) {
            if (prevPunctuation) {
                throw std::invalid_argument("Nao pode conter sinais de pontucao em sequencia.");
            }
            prevPunctuation = true;
        } else {
            prevPunctuation = false;
        }
        prevChar = c;
    }
};

std::string Texto::getTexto() const{
    return m_texto;
};

void Texto::setTexto(std::string novoTexto){
    try{
        validar(novoTexto);
        m_texto = novoTexto;
    } catch (std::invalid_argument& e){
        std::cout << e.what() << std::endl;
    }
}

