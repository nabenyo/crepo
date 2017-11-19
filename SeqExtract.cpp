//
// Created by nick on 11/9/17.
//

#include "SeqExtract.h"
#include<iostream>

SeqExtract::SeqExtract(string word)
        :SequenceEnum(word){
    //SeqExtractWord = word;
}

string SeqExtract::Extract(string profer){
    string SeqExtractWord = this->GetWord();
    int wordLen = profer.length();
    int wordLoc = SeqExtractWord.find(profer);
    if(SeqExtractWord.find(profer) == 0)
        return SeqExtractWord.substr(wordLoc + wordLen);
    else

        return SeqExtractWord.substr(0,wordLoc)
               + SeqExtractWord.substr(wordLoc + wordLen);
}