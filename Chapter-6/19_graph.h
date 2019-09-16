#include <list>
#include <unordered_map>

template <typename T>
class Graph
{
public: 
  Graph();
  Graph(const Graph&);
  Graph(Graph&&);
  Graph& operator=(const Graph&);
  Graph& operator=(Graph&&);
  ~Graph();

public:
  void insert_edge(const T& source, const T& target);
  void remove_edge(const T& source, const T& target);

  bool connected(const T& source, const T& target);

private:
  std::unordered_map<T, std::list<T> > hashtable_;
};
