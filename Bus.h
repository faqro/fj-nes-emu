#pragma once
#include <cstdint>
#include "cpu6502.h"

class Bus {
    public:
        Bus();
        ~Bus();

    public:
        cpu6502 cpu; //cpu
        std::array<uint8_t, 64*1024> ram; //memory

    public: //Read & Write
        void write(uint16_t addr, uint8_t data);
        uint8_t read(uint16_t addr, bool bReadOnly=false);
};