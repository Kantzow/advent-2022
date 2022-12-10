// Rock Paper Scissors
#include <iostream>
#include <map>
#include <string>
#include <sstream>
#include <set>

using namespace std;

/* Part 2 */
auto initiate_outcomes()
{
    map<char, int> rock{
        {'X', 3},
        {'Y', 4},
        {'Z', 8}};

    map<char, int> paper{
        {'X', 1},
        {'Y', 5},
        {'Z', 9}};

    map<char, int> scissors{
        {'X', 2},
        {'Y', 6},
        {'Z', 7}};

    map<char, map<char, int>> result{
        {'A', rock},
        {'B', paper},
        {'C', scissors}};

    return result;
}


int main()
{
    // A = rock
    // B = paper
    // C = scissors

    // X = Lose
    // Y = Draw
    // Z = Win

    // Rock             +1
    // Paper            +2
    // scissors         +3

    // Win              +6
    // Draw             +3
    // Lose             +0

    // {wanted outcome, points }

    map<char, map<char, int>> outcomes{initiate_outcomes()};
    int total{};
    string buffer{};
    stringstream ss{};

    while (getline(cin, buffer))
    {
        ss.str(buffer);

        char elf_hand {};
        char my_hand {};

        ss >> elf_hand >> my_hand;

        total += outcomes[elf_hand][my_hand];
    }

    cout << total << endl;

    return 0;
}
/* Part 2 end*/

/* Part 1 */
// int main()
// {
//     // A = rock
//     // B = paper
//     // C = scissors

//     // X = rock         +1
//     // Y = paper        +2
//     // Z = scissors     +3

//     // Win              +6
//     // Draw             +3
//     // Lose             +0

//     map<string, int> game_combinations
//                                         {
//                                             { "A X" , 4}, { "A Y" , 8}, { "A Z" , 3}, 
//                                             { "B X" , 1}, { "B Y" , 5}, { "B Z" , 9}, 
//                                             { "C X" , 7}, { "C Y" , 2}, { "C Z" , 6}, 
//                                         };

//     int total{};
//     string buffer{};

//     while (getline(cin, buffer))
//     {
//         total += game_combinations[buffer];
//     }

//     cout << total << endl;




//     return 0;
// }
/* Part 1 end*/