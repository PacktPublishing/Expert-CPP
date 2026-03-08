#include <concepts>

template<typename T> concept DefaultConstructible = std::default_initializable<T>;

template <DefaultConstructible T>
T make_T() {
    return T();
}

int main() {}
