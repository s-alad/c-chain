#include <stdio.h>
#include <iostream>
#include <string>

int main() {
    std::cout << "MAIN" << std::endl;
    return 0;
}

class Block {
    public:
        std::string hash;
        std::string previousHash;
        Block (int index, const std::string &data);
        std::string calculateHash() const;
        void mineBlock(int difficulty);
    private:
        int index;
        long timeStamp;
        std::string data;
        int nonce;
};