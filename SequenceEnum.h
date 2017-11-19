// Author: Nicholas Benyo
// Filename: EncryptWord.h
// Date: 2017-11-09
// Version: 1.0
//
// Description: --
//
//
// Functionality:
//  SetWord, GetWord, Activate, Deactivate, SequenceEnum[constructors]
//
// Dependencies:
//  EncryptWord class
//
// Legal States:
//  Active Status - 1 (Active, will emit a sequence, word must exist) 0 (Will
//  not emit a sequence, word may or may not exist when object is inactive)
//
// Legal Inputs:
//  SequenceEnum can be initialized (or later a word added with SetWord) with
//  and alpha (upper or lowercase) string consisting of 3 characters or
//  greater.
//
// Assumptions:
//
//
// Class Invariants:
//  The EncryptWord object is being used appropriately (words longer than four
//  characters, containing only alpha lowercase). The wordNumber and struct
//  collection of EncryptWord objects are considered critical to the
//  definition of a FindFault object. All overloaded operators are specific to
//  these data members.
//
// Interface Invariants:
//  As this class is dependent on the EncryptWord object, it requires the
//  following all pre and post conditions of the setWord(), getWord(),
//  checkState(), and encrypt() methods of the EncryptWord object. Class is
//  built on a static 10 object limit for adding additional encryptWords, will
//  not function if this limit is exceeded.
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
    //Description:
    // The default constructor for the class. Can be initialized
    // without first setting a word. State is dependent on a word being set
    // and child classes.
    //Preconditions:
    // None (object does not yet exist)
    //Postconditions:
    // Inactive (object will not be active without word)
    SequenceEnum(string word);
    //Description:
    // Alternate constructor, used to declare word upon construction
    //Preconditions:
    // None (object does not yet exist)
    //Postconditions:
    // State of object is active when a word is assigned.
    void SetWord(string word);
    //Description:
    // Used to set a word for objects initialized without a value
    // in the word data member. Cannot be used to change word once it has
    // been declared. Will return a bool of true if word was successfully
    // set, and a bool of false if word data member was already initialized.
    //Preconditions:
    //Postconditions:
    void Activate();
    //Description:
    //Preconditions:
    //Postconditions:
    void Deactivate();
    //Description:
    //Preconditions:
    //Postconditions:
    string GetWord();
    //Description:
    //Preconditions:
    //Postconditions:

};


#endif //P4_SEQUENCEENUM_H
