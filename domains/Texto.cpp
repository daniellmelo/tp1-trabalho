
#include "Texto.hpp"


bool Texto::validar(std::string texto){
    // Verificar se o texto tem entre 5 e 30 caracteres
    if (texto.size() < 5 || texto.size() > 30) {
        return false;
    }

    // Verificar se cada caractere é letra, dígito, sinal de pontuação ou espaço em branco
    if (!std::regex_match(texto, std::regex("^[A-Za-z0-9.,;?! ]+$"))) {
        return false;
    }

    char prevChar = '\0'; // Caractere anterior (inicializado com um caractere nulo)
    bool prevSpace = false; // Flag para verificar espaços em branco em sequência
    bool prevPunctuation = false; // Flag para verificar sinais de pontuação em sequência

    for (char c : texto) {
        // Verificar se não há acentuação (assumindo que a entrada está em ASCII)
        if (c < 0 || c > 127) {
            return false;
        }

        // Verificar se o primeiro caractere é letra maiúscula
        if (!std::isalpha(texto[0]) || !std::isupper(texto[0])) {
            return false;
        }

        // Verificar se o primeiro caractere após sinal de pontuação (exceto vírgula ou ponto-e-vírgula) é letra maiúscula
        if (prevChar != ',' && prevChar != ';' && std::ispunct(prevChar) && !std::isupper(c)) {
            return false;
        }

        // Verificar espaços em branco em sequência
        if (c == ' ') {
            if (prevSpace) {
                return false;
            }
            prevSpace = true;
        } else {
            prevSpace = false;
        }

        // Verificar sinais de pontuação em sequência
        if (std::ispunct(c)) {
            if (prevPunctuation) {
                return false;
            }
            prevPunctuation = true;
        } else {
            prevPunctuation = false;
        }

        prevChar = c;
    }

    return true;
};


std::string Texto::getTexto(){

    return m_texto;
};

void Texto::setTexto(std::string novoTexto){

    if (validar(novoTexto)){
        m_texto = novoTexto;
    } else {
        throw std::invalid_argument("Texto inválido");

    }
}

