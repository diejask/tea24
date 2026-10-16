#include <fmt/chrono.h>
#include <fmt/format.h>

#include "config.h"

void changeValueByParameter(int value) {
    value = 99;
    fmt::print("Value of val: {}\n", value);
};

void changeValueByPointer(int* ptr) {
    *ptr = 77;
    fmt::print("Value of ptr: {}\n", *ptr);
};

int main(int argc, char **argv) {

    int var = 4711;
    int x = 10;
    int* p = &x;
    double* d = new double(3.1415);
    int val = 100;
    int* ptr = &val;
    int y = 7;

    /**
     * The {fmt} lib is a cross platform library for printing and formatting text
     * it is much more convenient than std::cout and printf
     * More info at https://fmt.dev/12.0/api/
     */
    fmt::print("Hello, {}!\n", tea::PROJECT_NAME);

    /* INSERT YOUR CODE HERE */
    fmt::print("Value of var: {}!\n", var);

    /* TEIL 1*/
    fmt::print("Value of x: {} and the address of x: {}\n", x, fmt::ptr(&x));
    fmt::print("Value of p: {} and the address of p: {}\n", *p, fmt::ptr(&p));

    x = 42;
    fmt::print("Value of x: {}\n", x);
    fmt::print("Value of p: {}\n", *p, fmt::ptr(&p));

    /*TEIL 2*/
    fmt::println("Value of d: {} and the address of d: {}", *d, fmt::ptr(&d));
    delete d;

    /*TEIL 3*/
    changeValueByParameter(val);
    changeValueByPointer(ptr);

    /*AUFGABE*/
    fmt::print("Value of y before: {}\n", y);
    changeValueByParameter(y);
    fmt::print("Value of y after: {}\n", y);

    fmt::print("Value of address y before: {}\n", y);
    changeValueByPointer(&y);
    fmt::print("Value of address y after: {}\n", y);


    return 0; /* exit gracefully*/
}
