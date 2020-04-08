template <typename T>
int hash(const T& key)
{
  // generate and return and efficient
  // hash value from key based on the key's type
}

template <typename T, typename U>
void insert_into_hashtable(const T& key, const U& value)
{
  int index = hash(key);
  hash_table[index].push_back(value); // insert into the list
}
