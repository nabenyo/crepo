#include <iostream>
#include "SeqExtract.h"

int main() {
    SeqExtract test = SeqExtract("Nick");
    cout << test.Extract("Ni");
}