#include <iostream>
#include <vector>
#include <string>

int main()
{
    std::vector<std::string> result;

    for (int i = 0; i < 5; i++)
    {
        result.push_back("Hello python !");
    }

    // Print result like Python list
    std::cout << "[";
    for (size_t i = 0; i < result.size(); i++)
    {
        std::cout << "'" << result[i] << "'";
        if (i < result.size() - 1)
            std::cout << ", ";
    }
    std::cout << "]";

    return 0;
}
