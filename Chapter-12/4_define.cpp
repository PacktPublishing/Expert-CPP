#define DOUBLE_IT(arg) (arg * arg)

int main()
{
    int res = DOUBLE_IT(3 + 1);
    std::cout << res << std::endl;
}