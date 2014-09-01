#include <iostream>

int main()
{
    std::cout << "====================\n";
#ifdef __GNUC__
    std::cout << "__GNUC__\n";
#endif
#ifdef __clang__
    std::cout << "__clang__\n";
#endif
    std::cout << "__cplusplus:" << __cplusplus << '\n';
    std::cout << "====================\n";
    return 0;
}
