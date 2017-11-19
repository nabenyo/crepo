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
    return ExtractContainer.substr(ExtractContainer.find(word)+word.length());
}