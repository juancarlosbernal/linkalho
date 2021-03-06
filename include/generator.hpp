#ifndef __LINKALHO_GENERATOR_HPP__
#define __LINKALHO_GENERATOR_HPP__

#include <string>

class Generator{
private:
    Generator(); // Disallow instantiation outside of the class.

    unsigned long _nasId;
    std::string _nasIdStr;
    unsigned long _baasUserId;

public:
    Generator(const Generator&) = delete;
    Generator& operator=(const Generator &) = delete;
    Generator(Generator &&) = delete;
    Generator & operator=(Generator &&) = delete;

    static auto& instance(){
        static Generator gen;
        return gen;
    }

    const std::string& nasIdStr();
    void writeBaas(const std::string& fullpath);
    void writeProfileDat(const std::string& fullpath);
    void writeProfileJson(const std::string& fullpath);

};

#endif  // __LINKALHO_GENERATOR_HPP__