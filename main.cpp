#include <iostream>
#include "string"
#include "bank.h"
using namespace std;
using namespace N;
int main() {

    bank obj;
    string myString;

    string data = obj.getter();
    cout<<"testing"<<endl;

    for(auto &ch : data){
        if(ch ==' ' || ch=='$'){
            cout<<myString<<endl;
            myString="";
        } else{
            string st(1,ch);
            myString = myString + st;
        }

    }

    return 0;
}
