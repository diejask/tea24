#include <fmt/chrono.h>
#include <fmt/format.h>

#include "config.h"

int globalVar = 1;
int globalVar2 = 1;

static int globalVar3 = 1;
const int globalVar4 = 1;

void foo() { 
    fmt::print("Hello from foo!\\n"); 
}


int main(int argc, char **argv) {

    /*TEIL 1*/
    fmt::print("Hello, {}!\n", tea::PROJECT_NAME);
    fmt::print("Value of globalVar: {} and address of globalVar: {}!\n", globalVar, fmt::ptr(&globalVar));
    fmt::print("Value of globalVar2: {} and address of globalVar2: {}!\n", globalVar2, fmt::ptr(&globalVar2));
    fmt::print("Value of globalVar3: {} and address of globalVar3: {}!\n", globalVar3, fmt::ptr(&globalVar3));
    fmt::print("Value of globalVar4: {} and address of globalVar4: {}!\n", globalVar4, fmt::ptr(&globalVar4));
    /* wenn global deklariert sind Anfangsbit der Adressen gleich*/

    /*TEIL 2*/
    int localVar = 2;
    fmt::print("Value of localVar: {} and address of localVar: {}!\n", localVar, fmt::ptr(&localVar));
    static int localVar2 = 2;
    const int localVar3 = 2;
    fmt::print("Value of localVar2: {} and address of localVar2: {}!\n", localVar2, fmt::ptr(&localVar2));
    fmt::print("Value of localVar3: {} and address of localVar3: {}!\n", localVar3, fmt::ptr(&localVar3));
    /* wenn lokal deklariert sind die Adressen anders, normal und const sind ähnlich*/

    /*TEIL 3*/
    int* heapVar = new int(3);
    fmt::print("adress of heapVar: {}\n", fmt::ptr(&heapVar));
    delete heapVar;

    /*TEIL 4*/
    fmt::print("Adresse von foo: {}\n", fmt::ptr(&foo));
    

    return 0; /* exit gracefully*/
}
