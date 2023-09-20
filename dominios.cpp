#include "dominios.hpp"

void Email::validar(string email){
    size_t atPos = email.find('@');
    if (atPos == string::npos || atPos == 0 || atPos == email.length() - 1) {
        throw invalid_argument("Formato inválido: o '@' deve estar presente e não pode ser o primeiro ou último caractere.");
    }

    string nome = email.substr(0, atPos);
    string dominio = email.substr(atPos + 1);
    
    if (nome.length() < 2 || nome.length() > 10 || dominio.length() < 2 || dominio.length() > 20) {
        throw invalid_argument("Formato inválido: o nome e o domínio devem ter entre 2 e 10 (nome) e entre 2 e 20 (domínio) caracteres, respectivamente.");
    }
    
    for (char c : nome) {
        if (!isalnum(c) && c != '.') {
            throw invalid_argument("Formato inválido: o nome deve conter apenas letras, dígitos (0-9) ou pontos.");
        }
    }

    for (char c : dominio) {
        if (!isalnum(c) && c != '.') {
            throw invalid_argument("Formato inválido: o domínio deve conter apenas letras, dígitos (0-9) ou pontos.");
        }
    }

    if (nome.find("..") != string::npos || dominio.find("..") != string::npos) {
        throw invalid_argument("Formato inválido: não podem haver pontos em sequência.");
    }

    if (nome.find(".@") != string::npos || nome.find("@.") != string::npos ||
        dominio.find(".@") != string::npos || dominio.find("@.") != string::npos) {
        throw invalid_argument("Formato inválido: o '@' não pode ser precedido ou sucedido por um ponto.");
    }
}

void Limite::validar(int limite){
    if(limite != 5 || limite != 10 || limite != 15 || limite != 20){
        throw invalid_argument("");
    }
}

void Coluna::validar(string coluna){
    if(coluna != "SOLICITADO" || coluna != "EM EXECUCAO" || coluna != "CONCLUIDO"){
        throw invalid_argument("Insira uma coluna válida");
    }
}