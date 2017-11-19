#include <iostream>
#include "SeqExtract.h"

int main() {
    SeqExtract test = SeqExtract("Nick");
    cout << test.Extract("Ni");
    //cout << endl << test.Extract("ck") << endl;
    cout << endl << test.Extract("c") << endl;
    /*string word = "Nick";
    string extract = "ck";
    cout << word.substr(0,word.length()-extract.length()) << endl;
    extract = "ck";
    cout << word.substr(0,word.find(extract)) + word.substr(word.find(extract)+extract.length());*/
}