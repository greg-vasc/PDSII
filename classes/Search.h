#ifndef SEARCH_MACHINE_SEARCH_H
#define SEARCH_MACHINE_SEARCH_H

#include "Collection.h"

class Search {

private:
//STRING QUE VAI ARMAZENAR A EXPRESSÃO (DOCUMENTO)
    string expression;
//VETOR DE PALAVRAS QUE VAI SETAR OS TERMOS
    vector<Word> terms;

//COLECAO CONJUNTO DE ARQUIVOS
    Collection collection;
//VETOR DE DOCUMENTOS EM QUE ALGUM TERMO DA EXPRESSÃO PESQUISADA ESTA CONTIDO
    vector<Document> documentsFound;
//IMPORTANCIA DA PALAVRA DENTRO DA COLECAO
    map<string, float> wordImportance;

  //VECTOR QUE VAI CARREGARR A COORDENADA W(IDF, IDF)
    map<map<string, string>, float> coordinate;

//METODO DE CARREGAR O TERMO
    void loadTerms();
//METODO QUE CARREGA OS DOCUMENTOS ACHADOS
    void loadDocumentsFound(Word word);
//METODO QUE CARREGA A IMPORTANCIA DA PALAVRA
    void loadWordImportance();
//METODO QUE CARREGA A COORDENADA
    void loadCoordinate();


public:

    Search(const string &expression, Collection collection);

    const string &getExpression() const;

    void setExpression(const string &expression);

    const vector<Word> &getTerms() const;

    void setTerms(const vector<Word> &terms);

    const Collection &getCollection() const;

    void setCollection(const Collection &collection);

    const vector<Document> &getDocumentsFound() const;

    void setDocumentsFound(const vector<Document> &documentsFound);

    const map<string, float> &getWordImportance() const;

    void setWordImportance(const map<string, float> &wordImportance);

    const map<map<string, string>, float> &getCoordinate() const;

    void setCoordinate(const map<map<string, string>, float> &coordinate);

};


#endif //SEARCH_MACHINE_SEARCH_H
