// Rock Paper Scissors
#include <iostream>
#include <map>
#include <string>

using namespace std;

// Part two
int main()
{
    // A = rock         
    // B = paper        
    // C = scissors     
    
    // X = Lose         
    // Y = Draw        
    // Z = Win     

    // Win              +6
    // Draw             +3
    // Lose             +0

    map<string, int> game_combinations
                                        {
                                            { "A X" , 4}, { "A Y" , 8}, { "A Z" , 3}, 
                                            { "B X" , 1}, { "B Y" , 5}, { "B Z" , 9}, 
                                            { "C X" , 7}, { "C Y" , 2}, { "C Z" , 6}, 
                                        };
    map<string, int>

    int total{};
    string buffer{};

    while (getline(cin, buffer))
    {
        total += game_combinations[buffer];
    }

    cout << total << endl;




    return 0;
}

// Part one
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