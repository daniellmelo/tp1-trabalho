#include <iostream>
#include <cctype>

using namespace std;

class Email {
    private:
        string value;
        void validar(string);
    public:
        void setEmail(string);
        string getEmail();
};

class Texto {

};

class Senha {

};

class Codigo {

};

class Limite {
    private:
        int limite;
        void validar(int);
    public:
        void setLimite(string);
        string getLimite();
};

class Coluna {
    private:
        string coluna;
        void validar(string);
    public:
        void setColuna(string);
        string getColuna();
};
