struct Document {
  // place document related fields here
};

class QueryProcessor
{
public:
  using Documents = std::vector<Document>;
  static Documents process_query(const Query& query) { 
    if (!query.dialog_id.empty()) {
      // request the knowledge graph for new terms
    }
    // retrieve documents from the index
    // sort and return documents
  }
};
