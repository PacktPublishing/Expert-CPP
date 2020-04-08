struct Email {
  std::string subject;
  std::string body;
  std::string from;
  std::string when;
};
...
// let's suppose a million emails is the max for anyone
int MAX_EMAILS = 1000000; 
Email inbox[1000000];

std::vector<Email> search(const std::string& word) {
  std::vector<Email> search_results;  
  for (all-million-emails) {
    if (inbox[i].subject.contains(word)) {
      search_results.push_back(inbox[i]);
    }
  }
  return search_results;
}
