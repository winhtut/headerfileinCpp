//
// Created by National Cyber City on 10/25/2022.
//

#ifndef TODELETE_BANK_H
#define TODELETE_BANK_H

namespace N {
    class bank {

    public:
        int adding(int a ,int b);
        std::string getter();
        void setter(int a , std::string newName);

    private:
        int amount=12000;
        std::string name="WinHtut";
    };
}

#endif //TODELETE_BANK_H
