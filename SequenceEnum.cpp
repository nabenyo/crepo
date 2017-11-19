//
// Created by nick on 11/9/17.
//

#include "SequenceEnum.h"
#include<iostream>

SequenceEnum::SequenceEnum() {
    this->state = 0;
}

SequenceEnum::SequenceEnum(string word){
    this->container = word;
    this->state = 1;
}

void SequenceEnum::SetWord(string word){
    this->container = word;
}

void SequenceEnum::Deactivate(){
    this->state = 0;
}

void SequenceEnum::Activate() {
    this->state = 1;
}

string SequenceEnum::GetWord(){
    if(state == 1){
        string emit = container + container.substr(0, 2);
        return emit;
    }else {
        return this->container;
    }
}
