#include <algorithm>
#include <iostream>
#include <utility>
#include <vector>

int main()
{
    int array[] = { 0, 1, 2, 3, 4, 5 };

    // part
    /*
    std::vector<int> part(&array[2], &array[5]);
    for (const auto v : part)
    {
        std::cout << v << std::endl;
    }
    */

    // full
    /*
    std::vector<int> full(array, array + 6);
    for (const auto v : full)
    {
        std::cout << v << std::endl;
    }
    */

    /*
    std::vector<int> full(array, array + 6);
    for (size_t left = 0, right = full.size() - 1; left < right; ++left, --right)
    {
        std::swap(full[left], full[right]);
    }
    */

    std::vector<int> full(array, array + 6);
    for (auto it = full.begin(); it != full.end(); it += 2)
    {
        it = full.insert(it, *it);
    }

    for (auto e : full)
    {
        std::cout << e << std::endl;
    }

    // Suppression totale
    /*
    while (!full.empty())
    {
        full.pop_back();
    }
    */

    // Suppression un élément précis
    /*
    full.erase(full.begin() + 3);
    */

    std::vector v { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

    // Supprimer portion
    /*
    v.erase(v.begin() + 2, v.begin() + 7);
    */

    auto pos = std::find(v.begin(), v.end(), 9);
    v.erase(pos);

    std::cout << "Apres suppression" << std::endl;
    for (auto e : v)
    {
        std::cout << e << std::endl;
    }

    v.assign(5, 2);
    v.assign({ 0, 2, 32, -4, 3 });
    v.clear();

    return 0;
}