#include <array>
#include <iostream>
#include <list>
#include <stack>
#include <string>
#include <vector>

enum Fruit
{
    Apricot,
    Cherry,
    Mango,
    Raspberry,

    Fruit_Count,
};

void try_arrays()
{
    std::array<std::string, Fruit_Count> fruits_name;
    fruits_name[Apricot]   = "Apricot";
    fruits_name[Cherry]    = "Cherry";
    fruits_name[Mango]     = "Mango";
    fruits_name[Raspberry] = "Raspberry";
}

void try_lists()
{
    std::list<int> l1 { -2, -3, 7, 200, -8, 6 };
    std::list<int> l2(3, -45);

    std::list<int> l3;
    l3.assign({ 41, 6, 12 });

    std::list<int> l4;
    l4.emplace_front(0);
    l4.emplace_front(4);
    l4.emplace_front(6);

    // First possibility : sort first, then use merge.
    l1.sort();
    l2.sort();
    l1.merge(l2);

    // Second possibility : append one to the other, then use sort.
    l3.splice(l3.begin(), l4);
    l3.sort();

    // Find the middle of the list by using function std::advance, and insert the other list at this position.
    auto mid = l1.begin();
    std::advance(mid, l1.size() / 2);
    l1.splice(mid, l3);
}

void try_stacks()
{
    std::stack<int, std::vector<int>> stack;
    stack.emplace(0);
    stack.emplace(1);
    stack.emplace(2);

    std::vector<int>                  v { 0, 1, 2 };
    std::stack<int, std::vector<int>> s2 { v };

    for (auto e : stack)
    {
        std::cout << e << std::endl;
    }
}

int main()
{
    try_arrays();
    try_lists();
    try_stacks();

    return 0;
}