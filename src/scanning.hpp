#ifndef SCANNING
#define SCANNING

#include <string>
#include <vector>

#include "tokens.cpp"

namespace {
    class Scanner {
    public:
        // explicit enforces programmer to define as the type, reducing unintentional behaviors
	explicit Scanner(std::string src);
        const std::vector<Token>& scan_tokens();
    private:





}

#endif //SCANNING
