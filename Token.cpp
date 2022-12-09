https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
#include "Token.h"
using namespace std;

/**
 * Token for parsing. Can be used as a terminal node in a ParseTree
 * @param type The type of token (see token types). Can be read using token.getType()
 * @param value The token's value. Can be read using token.getValue()
 */
Token::Token(string type, string value) : ParseTree(type, value) {
}