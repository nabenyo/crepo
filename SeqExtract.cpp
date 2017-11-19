//
// Created by nick on 11/9/17.
//

#include "SeqExtract.h"
#include<iostream>

SeqExtract::SeqExtract(string word)
        :SequenceEnum(word){
    ExtractContainer = word;
}

string SeqExtract::Extract(string word){
    int wordLen = word.length();
    int wordLoc = ExtractContainer.find(word);
    if(ExtractContainer.find(word) == 0)
        return ExtractContainer.substr(wordLoc + wordLen);
    else

        return ExtractContainer.substr(0,wordLoc)
               + ExtractContainer.substr(wordLoc + wordLen);
}