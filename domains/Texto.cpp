
#include "Texto.hpp"


bool Texto::validar(std::string texto){
    // Verificar se o texto tem entre 5 e 30 caracteres
    if (texto.size() < 5 || texto.size() > 30) {
        return false;
    }

    // Verificar se cada caractere � letra, d�gito, sinal de pontua��o ou espa�o em branco
    if (!std::regex_match(texto, std::regex("^[A-Za-z0-9.,;?! ]+$"))) {
        return false;
    }

    char prevChar = '\0'; // Caractere anterior (inicializado com um caractere nulo)
    bool prevSpace = false; // Flag para verificar espa�os em branco em sequ�ncia
    bool prevPunctuation = false; // Flag para verificar sinais de pontua��o em sequ�ncia

    for (char c : texto) {
        // Verificar se n�o h� acentua��o (assumindo que a entrada est� em ASCII)
        if (c < 0 || c > 127) {
            return false;
        }

        // Verificar se o primeiro caractere � letra mai�scula
        if (!std::isalpha(texto[0]) || !std::isupper(texto[0])) {
            return false;
        }

        // Verificar se o primeiro caractere ap�s sinal de pontua��o (exceto v�rgula ou ponto-e-v�rgula) � letra mai�scula
        if (prevChar != ',' && prevChar != ';' && std::ispunct(prevChar) && !std::isupper(c)) {
            return false;
        }

        // Verificar espa�os em branco em sequ�ncia
        if (c == ' ') {
            if (prevSpace) {
                return false;
            }
            prevSpace = true;
        } else {
            prevSpace = false;
        }

        // Verificar sinais de pontua��o em sequ�ncia
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
        throw std::invalid_argument("Texto inv�lido");

    }
}

