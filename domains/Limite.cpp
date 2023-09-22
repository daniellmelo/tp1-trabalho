
#include "Limite.hpp"

bool Limite::validar(std::string limite){
    if(limite != "5" || limite != "10" || limite != "15" || limite != "20"){
        throw std::invalid_argument("");
    }
}
