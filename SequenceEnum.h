//
// Created by nick on 11/9/17.
//

#ifndef P4_SEQUENCEENUM_H
#define P4_SEQUENCEENUM_H
#include<string>

using namespace std;


class SequenceEnum {
private:
    string word;
    int state;

public:
    SequenceEnum();
    SequenceEnum(string word);
    void SetWord(string word);
    void Activate();
    void Deactivate();
    string GetWord();

};


#endif //P4_SEQUENCEENUM_H
