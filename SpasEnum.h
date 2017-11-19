//
// Created by nick on 11/9/17.
//

#ifndef P4_SPASENUM_H
#define P4_SPASENUM_H
#include<string>
#include "SequenceEnum.h"

using namespace std;

class SpasEnum:SequenceEnum {
public:
    SpasEnum(string word);
    //Description:
    //Preconditions:
    //Postconditions:
    string Spas();
    //Description:
    //Preconditions:
    //Postconditions:
private:
    string SpasEnumState;

};


#endif //P4_SPASENUM_H