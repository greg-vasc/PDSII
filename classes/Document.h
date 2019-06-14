#ifndef SEARCH_MACHINE_DOCUMENT_H
#define SEARCH_MACHINE_DOCUMENT_H

#include <fstream>
#include <vector>
#include <map>
#include "Word.h"

//classe que vai setar o documento
class Document {

private:
//STRING PARA ARMAZENAR O NOME
    string name, path;
  // VECTOR PARA SEPARAR A PALAVRA
    vector<Word> words;
  //VECTOR PARA SEPARAR A FREQUENCIA DE PALAVRAS
    map<string, int> wordFrquency;
//FUNCAO QUE LE O ARQUIVO
    void read(string fullPath);
//FUNCAO QUE CARREGA A FREQUENCIA DE PALAVRAS
    void loadWordFrequency(ifstream &file);

public:
//DOCUMENTO RECEBENDO AS VARIAVEIS
    Document(const string &name, const string &path);
//CONST PARA RECEBER A STRING DA PALAVRA E GETNOME
    const string &getName() const;

    void setName(const string &name);

    const string &getPath() const;

    void setPath(const string &path);

    const vector<Word> &getWords() const;

    void setWords(const vector<Word> &words);

    const map<string, int> &getWordFrquency() const;

    void setWordFrquency(const map<string, int> &wordFrquency);

    bool operator==(const Document &rhs) const;
};


#endif //SEARCH_MACHINE_DOCUMENT_H
