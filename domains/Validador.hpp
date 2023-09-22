#ifndef VALIDADOR_H_INCLUDED
#define VALIDADOR_H_INCLUDED

#pragma once

#include <regex>
#include <string>

class Validador{ //222035625
    public:
        virtual bool validar(std::string)= 0;

};

#endif // VALIDADOR_H_INCLUDED
