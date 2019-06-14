#ifndef SEARCH_MACHINE_COLLECTION_H
#define SEARCH_MACHINE_COLLECTION_H


#include <dirent.h>
#include <cstring>
#include "Document.h"

class Collection {

private:
    string path;
    vector<Document> documents;
    map<string, int> wordFrquency;

//FUNCAO DE LEITURA DO ARQUIVO
    void read();
//FUNCAO DE CARREGAMENTO DE ARQUIVO
    void loadDocuments();

//FUNCAO QUE OLHA A FREQUENCIA DA PALAVRA DE ACORDO COM O DOCUMENTO
    void addWordFrequency(Document document);

public:
    Collection(const string &path);

    const string &getPath() const;

    void setPath(const string &path);

//FUNCAO PARA PEGAR O DOCUMENTO
    const vector<Document> &getDocuments() const;

//FUNCAO QUE SETA O DOCUMENTO
    void setDocuments(const vector<Document> &documents);


//CONSTRUTOR PARA DEFINIR A FREQUENCIA DE PALAVRAS
    const map<string, int> &getWordFrquency() const;

//FUNCAO QUE VAI SETAR A FREQUENCIA DA PALAVRA 
    void setWordFrquency(const map<string, int> &wordFrquency);

};


#endif //SEARCH_MACHINE_COLLECTION_H
