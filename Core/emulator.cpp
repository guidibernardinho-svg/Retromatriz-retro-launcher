// core/emulator.cpp
#include "emulator.h"
#include <iostream>

class DummyEmulator : public Emulator {
public:
    bool loadROM(const std::string& path) override {
        std::cout << "Carregando ROM: " << path << std::endl;
        return true;
    }

    void runFrame() override {
        std::cout << "Rodando frame..." << std::endl;
    }

    void reset() override {
        std::cout << "Resetando emulador..." << std::endl;
    }
};
