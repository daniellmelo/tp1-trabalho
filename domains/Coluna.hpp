#ifndef COLUNA_HPP_INCLUDED
#define COLUNA_HPP_INCLUDED


class Coluna : virtual public Validador {
    private:
        string coluna;
        void validar(string);
    public:
        void setColuna(string);
        string getColuna();
};


#endif // COLUNA_HPP_INCLUDED
