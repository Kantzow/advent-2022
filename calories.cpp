#include <iostream>
#include <map>
#include <sstream>

using namespace std;

pair<int, int> get_calories(stringstream & ss, int const elf_num)
{
    int calories_buffer{};
    int sum{};
    while(ss >> calories_buffer)
    {
        sum += calories_buffer;
    }

    return {sum, elf_num};
}

int main()
{
    map<int, int> calories{};

    string buffer{};
    stringstream ss{};
    int elf_num{};
    while(getline(cin, buffer))
    {   
        if (buffer.empty())
        {
            calories.insert( get_calories(ss, elf_num) );
            ss.str("");
            ss.clear();
            ++elf_num;
            continue;
        }
        ss << buffer << " ";
    }
    calories.insert(get_calories(ss, elf_num));

    int calories_sum {};

    auto curr {--calories.end()};
    for (int i {}; i < 3; ++i)
    {
        calories_sum += curr->first;
        --curr;
    }
    cout << calories_sum << endl;

    return 0;
}