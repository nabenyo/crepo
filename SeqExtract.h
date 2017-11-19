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
    string Extract(string word);

private:
    string ExtractContainer;
};


#endif //P4_SEQEXTRACT_H
