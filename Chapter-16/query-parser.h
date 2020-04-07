#include <string>
#include <unordered_map>

struct Token
{
     using Word = std::string;
     using Weight = int;
     Word value;
     std::unordered_map<Word, Weight> related;
};

struct Query
{
     std::string raw_query;
     std::string normalized_query;
     std::vector<Token> tokens;
     std::string dialog_id; // we will use this in Dialog Generator
};

class QueryParser
{
public:
     static Query parse(const std::string& query_string, const std::string& dialog_id = "")
     {
          Query qr;
          qr.raw_query = query_string; qr.dialog_id = dialog_id;
          qr.tokens = QueryParser::tokenize(query_string); QueryParser::retrieve_word_relations(qr.tokens); return qr;
     }

private:
     static std::vector<Token> tokenize(const std::string& raw_string) {
          // 1. split raw_string by space
          // 2. construct for each word a Token // 3. return the list of tokens
     }
     static void retrieve_word_relations(std::vector<Token>& tokens) {
          // for each token, request the Knowledge Base
          // to retrieve relations and update tokens list
     } 
};
