//
// Created by nick on 11/9/17.
//

#ifndef P4_SEQEXTRACT_H
#define P4_SEQEXTRACT_H
#include<string>
#include "SequenceEnum.h"

using namespace std;


class SeqExtract: public SequenceEnum {
public:
    SeqExtract(string word);
    string Extract(string profer);
    //Description: Valid input - sequence extracted using this method must be continuous. Example: if extracting from the word
    //"statement", "tate", "state", and "ment" are valid inputs, "stment" is not.
    //Preconditions:
    //Postconditions:

private:
    //string SeqExtractWord;
    string SeqExtractState;
};


#endif //P4_SEQEXTRACT_H
