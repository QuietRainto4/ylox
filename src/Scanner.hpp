#ifndef SCANNER
#define SCANNER

#include <string>
#include <vector>

#include "Token.hpp"

namespace ylox
{
  class Scanner
  {
  public:
    explicit Scanner(std::string src);

    const std::vector<Token>& scan_tokens();

  private:
    bool is_alpha(const char c) const {return isalpha(c) != 0 or c == '_';}
    bool is_digit(const char c) const {return isdigit(c) != 0;}
    bool is_alpha_numeric(const char c) const {return is_alpha(c) or is_digit(c);}
    bool is_at_end() const {return current >= sourceCode.size();}

    std::string sourceCode;
    std::vector<Token> tokens;

    int start, current end;
  };
}

#endif //LOXX_SCANNER_HPP

