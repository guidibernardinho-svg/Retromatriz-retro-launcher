// core/emulator.h
#pragma once
#include <string>

class Emulator {
public:
    virtual bool loadROM(const std::string& path) = 0;
    virtual void runFrame() = 0;
    virtual void reset() = 0;
    virtual ~Emulator() {}
};
