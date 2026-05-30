/*
    A program that helps to count words in the text file.
    Copy the file and paste it to the text file's direction.
    Rename the text file into "input.txt".

    Last edit: 30.05.2026
*/

#include <iostream>
#include <string>
#include <sstream>
#include <vector>
using namespace std;

int main() {
    freopen("input.txt", "r", stdin);

    int cnt = 0;
    string tmp;

    while (cin >> tmp) {
        cnt++;
    }

    cout << "Word count: " << cnt << "\n";

    return 0;
}