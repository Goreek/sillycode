#include <iostream>

int main()
{
    std::string parts[2]={
R"(#include <iostream>

int main()
{
    std::string parts[2]={
)",
R"(
    };
    std::cout << parts[0];
    for( int i = 0; i < 2; i++)
        std::cout << "R" << '"' << "(" << parts[i] << ')' << '"' << "," << std::endl;
    std::cout << parts[1];
    return 0;
}
)",

    };
    std::cout << parts[0];
    for( int i = 0; i < 2; i++)
        std::cout << "R" << '"' << "(" << parts[i] << ')' << '"' << "," << std::endl;
    std::cout << parts[1];
    return 0;
}
