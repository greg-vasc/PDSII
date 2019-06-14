#ifndef SEARCH_MACHINE_WORD_H
#define SEARCH_MACHINE_WORD_H

#include <iostream>
using namespace std;

//CLASSE QUE VAI CARREGAR A PALAVRA
class Word {

private:
//STRING PARA RECEBER O TEXTO
    string text;

public:

    const string &getText() const;
//FUNCAO QUE SETA O TEXTO
    void setText(const string &text);

//FUNCAO QUE TRANFORMA A PALAVRA TODA EM MINUSCULO
    void toLower();
//FUNCAO QUE TIRA OS ACENTOS
    void replaceAccents();
//FUNCAO QUE TIRA CARACTERES ALFANUMERICOS
    void removeNonAlfa();
//FUNCAO QUE VAI CARREGAR O TEXTO
    void parse(string text);

    bool operator==(const Word &rhs) const;
};


#endif //SEARCH_MACHINE_WORD_H
