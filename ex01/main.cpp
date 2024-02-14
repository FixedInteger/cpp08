#include <iostream>
#include <vector>
template <typename T>
typename T::iterator easyfind(T &container, int value) {
    typename T::iterator it = std::find(container.begin(), container.end(), value);
    if (it == container.end()) {
        throw std::exception();
    }
    return it;
}
int main()
{
    std::vector<int> v;
    for (int i = 0; i < 88 ;i++)
        v.push_back(i);
    try
    {
        std::vector<int>::iterator it = easyfind(v, 5);
        std::cout << "Found: " << *it << std::endl;
    }
    catch (std::exception &e)
    {
        std::cerr << "Not found" << std::endl;
    }
    try
    {
        std::vector<int>::iterator it = easyfind(v, 10);
        std::cout << "Found: " << *it << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << "Not found" << std::endl;
    }
    return 0;

}