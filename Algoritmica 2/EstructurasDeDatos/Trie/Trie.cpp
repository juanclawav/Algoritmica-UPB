#include <bits/stdc++.h> 

using namespace std; 

struct node {

    char currentCharacter;       
    bool isWord;    

    struct node *children[27];  // [null,null,null,......,null]
}*trie;
// Inicializar 

void init() {
    trie = new node();  // Instanciar el objeto trie
    trie->isWord = false;
    trie->currentCharacter = ' ';
}

void insertWord(string word) {  

    node *currentNode =  trie;  

    for (int i = 0; i< word.length(); i++) {
        int character = word[i] - 'a';       // i = 0 'a'-'a' = 0
        if(currentNode->children[character] == NULL ) {
            currentNode->children[character] = new node();
        }
        
        currentNode = currentNode->children[character];
        currentNode->currentCharacter = word[i];
    }
    currentNode->isWord = true;
}

bool searchWord(string word) {

    node *currentNode =  trie;  

    for (int i = 0; i< word.length(); i++) {

        int character = word[i] - 'a';     
        if(currentNode->children[character] == NULL ) {
           return false;
        }
        currentNode = currentNode->children[character];
    }
    return currentNode->isWord;
}

void isThereWord(string word) {
    if(searchWord(word)) {
        cout<<"si existe: "<<word<<" en el trie"<<endl;
    } else {
        cout<<"No Existe :P"<<endl;
    }
}

void deleteWord(string word) {
    if(searchWord(word)) {
        node *currentNode = trie;
        int tempDepth = 0;
        int eliminacionDeNodo = 0;
        for (int i = 0; i< word.length(); i++) {
            int character = word[i] - 'a';
            if(currentNode->children[character]->isWord && word.length() != i+1) {
                eliminacionDeNodo+= tempDepth;
            }
            currentNode = currentNode->children[character];
            tempDepth++;
        }
        currentNode->isWord = false;
        currentNode = trie;
        for (int i = 0; i< eliminacionDeNodo; i++) {
            int character = word[i] - 'a';
            currentNode = currentNode->children[character];
        }
        currentNode = NULL;
        delete currentNode;
        cout << "Se elimino:" << word << " del array" << endl;
    }
}

int main() {
    init();  
    string word = "auto";
    insertWord(word);
    isThereWord(word);
    word = "automovil";
    insertWord(word);
    deleteWord(word);
    isThereWord("automovil");
    return 0;
}