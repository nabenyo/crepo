//
// Created by nick on 11/9/17.
//

#include "SequenceEnum.h"
#include<iostream>

SequenceEnum::SequenceEnum() {
    this->state = 0;
}

SequenceEnum::SequenceEnum(string word){
    if(word.length() > 3)
        this->word = word;
        this->state = 0;
}

void SequenceEnum::SetWord(string word){
    this->word = word;
}

void SequenceEnum::Deactivate(){
    this->state = 0;
}

void SequenceEnum::Activate() {
    this->state = 1;
}

string SequenceEnum::GetWord(){
    if(state == 1){
        string emit = word + word.substr(0, 2);
        return emit;
    }else {
        return this->word;
    }
}
