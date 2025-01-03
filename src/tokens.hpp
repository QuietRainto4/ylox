#define TOKEN

#include "Value.hpp"

namespace ylox {
	
    enum class TokenType {
      // Single-character tokens.
      LEFT_PAREN, RIGHT_PAREN, LEFT_BRACE, RIGHT_BRACE,
      COMMA, DOT, MINUS, PLUS, SEMICOLON, SLASH, STAR,
    
      // One or two character tokens.
      BANG, BANG_EQUAL,
      EQUAL, EQUAL_EQUAL,
      GREATER, GREATER_EQUAL,
      LESS, LESS_EQUAL,
    
      // Literals.
      IDENTIFIER, STRING, NUMBER,
    
      // Keywords.
      AND, CLASS, ELSE, FALSE, FUN, FOR, IF, NIL, OR,
      PRINT, RETURN, SUPER, THIS, TRUE, VAR, WHILE,
    
      EOF
    }

    class Token {
    public:
        TokenType get_type() const {return type};
        std:stringi& get_lexeme() const {return lexeme};
	Value& get_literal() const {return literal};
	int get_line() const {return line};
        	

    private:
        TokenType type;
	std:string lexeme;
	Value literal;
	int line;
	
    }
}
