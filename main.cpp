#include <stdio.h>
#include <iostream>
#include <string>
#include <vector>
#include <ranges>
#include "sha256.h"

class Block {
    public:
        int32_t index;
        int64_t timestamp;
        int64_t nonce;
        int64_t difficulty;
        std::vector<int8_t> hashvalue;
        std::vector<int8_t> previous;

        Block (int32_t index, int64_t timestamp, int64_t difficulty, std::vector<int8_t> previous) {
            this->index = index;
            this->timestamp = timestamp;
            this->nonce = 0;
            this->difficulty = difficulty;
            this->hashvalue = std::vector<int8_t>(32, 0);
            this->previous = previous;
        }

        void mine() {
            std::cout << "MINE" << std::endl;

            for (int n = 0; n < UINT_MAX; n++) {
                this->nonce = n;
                this->hashvalue = this->hash();
            }
        }

        std::vector<int8_t> hash() {
            std::cout << "HASH" << std::endl;

        }
};

int main() {
    std::cout << "MAIN" << std::endl;

    Block block(0, 0, 0, std::vector<int8_t>(32, 0));

    block.mine();

    return 0;
}