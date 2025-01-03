// Scanner file which given a string of code, will return a vector of tokens

#include "Value.hpp"
#include "Token.hpp"

namespace ylox {
    std::vector<Token>& Scanner::scan_tokens() {
        while (not is_at_end()) {
            start = current;
            scan_token();
        }

    tokens_.emplace_back(TokenType::Eof, "", line_);
    return tokens;
  }



}


