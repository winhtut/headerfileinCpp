//
// Created by National Cyber City on 10/25/2022.
//
#include "iostream"
#include "bank.h"
using namespace N;
using namespace std;

int bank::adding(int a, int b) {

    return (a*b);

}

string bank::getter() {
    string newamount = to_string(amount);
    string data = name+" "+newamount+"$";
    return data;
}

void bank::setter(int a, std::string newName) {

    amount = a;
    name = newName;
}