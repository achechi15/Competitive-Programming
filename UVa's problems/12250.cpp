#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    cin >> s;
    unordered_map<string, string>idioms = {
        {"HELLO", "ENGLISH"},
        {"HOLA", "SPANISH"},
        {"HALLO", "GERMAN"},
        {"BONJOUR", "FRENCH"},
        {"CIAO", "ITALIAN"},
        {"ZDRAVSTVUJTE", "RUSSIAN"}
    };
    int number = 1;
    while (s != "#") {
        if (idioms.find(s) != idioms.end()) {
            cout << "Case " << number << ": " <<idioms[s] << endl;
        }
        else cout << "Case " << number << ": " << "UNKNOWN" << endl;
        cin >> s;
        number++;
    } 
    return 0;
}