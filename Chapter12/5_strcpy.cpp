#include <cstdio>
#include <cstring>

int main()
{
  char small_buffer[4];
  const char* long_text = "This text is long enough to overflow small buffers!";
  strcpy(small_buffer, long_text);
}