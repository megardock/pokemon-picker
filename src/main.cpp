#include <stdio.h>
#include <fstream>
#include <string>
#include <streambuf>
#include <iostream>

#include <nlohmann/json.hpp>

using namespace std;
using json = nlohmann::json;

int main(){
    std::ifstream pokemon_file("./data/pokemons.json");
    json pokemon_json;
    pokemon_file >> pokemon_json;
    cout << "Pick a pokemon number (Max 151)\n";
    uint8_t number;
    cin >> number;
    cout << "----------\n";
    json pokemon = pokemon_json[std::to_string(number)];
    cout << pokemon.dump(4) << endl;
    return 0;
}