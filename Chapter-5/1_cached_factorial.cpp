std::unordered_map<long, long> cache;

long factorial(long n) {
  if (n <= 1) return 1;
  if (cache.contains(n)) return cache[n];
  cache[n] = n * factorial(n - 1);
  return cache[n];
}