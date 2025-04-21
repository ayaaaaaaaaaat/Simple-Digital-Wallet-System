#pragma once
#include <string>
#include <vector>

class FileHandler {
public:
    virtual ~FileHandler() = default;

    virtual bool load(const std::string& filename) = 0;
    virtual bool save(const std::string& filename) const = 0;

};