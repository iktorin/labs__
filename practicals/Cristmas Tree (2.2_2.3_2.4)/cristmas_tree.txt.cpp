/*## Task - Christmas Tree

Main Requirements (Completes one practical task -> 2.3 or 2.4)
Write a program that receives an integer n from the user, indicating the number of levels (tiers) of the Christmas tree. The program should print a tree with n levels in the form of triangles made of asterisks (*). Each level of the tree consists of several rows, where the number of asterisks increases from 1 to an odd number, and the trunk should also be displayed.

Additional Requirements (Completes two practical tasks -> 2.3 and 2.4)
+ Using a two-dimensional array
+ Rendering the tree in color
+ Adding ornaments (e.g., @, $, %, #) randomly across the tree
+ Saving the tree to a file - christmas_tree.txt

Advanced (Completes tasks 2.2, 2.3, and 2.4)
+ Add a garland where the ornaments turn on and off */
//Done : Kaznienko Viktoria
//123
#include <iostream>
#include <fstream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <thread>
#include <chrono>
#include <windows.h>

using namespace std;

void setColor(int colorCode) {
    cout << "\033[1;" << colorCode << "m";
}

void saveTreeToFile(const vector<vector<char>>& tree) {
    ofstream file("christmas_tree.txt");
    if (file.is_open()) {
        for (const auto& row : tree) {
            for (char c : row) {
                file << c;
            }
            file << '\n';
        }
        file.close();
    }
    else {
        cerr << "Не вдалося відкрити файл для запису." << endl;
    }
}

void displayTree(const vector<vector<char>>& tree, const vector<pair<int, int>>& ornaments) {
    for (int i = 0; i < tree.size(); ++i) {
        cout << "\033[" << i + 1 << ";1H"; // Переміщення курсору на початок рядка
        for (int j = 0; j < tree[i].size(); ++j) {
            char c = tree[i][j];
            if (c == '*') {
                setColor(32); // зелений колір для зірок
            }
            else if (c == '|') {
                setColor(90); // сірий колір для стовбура
            }
            else if (find(ornaments.begin(), ornaments.end(), make_pair(i, j)) != ornaments.end()) {
                int colorCode = 31 + (rand() % 5); // випадковий колір для іграшок
                setColor(colorCode);
            }
            else {
                setColor(37); // білий для інших символів
            }
            cout << c;
        }
        cout << '\n';
    }
    setColor(37); // скидання кольору до білого
}

vector<vector<char>> generateTree(int levels, vector<pair<int, int>>& ornaments) {
    vector<vector<char>> tree;
    int width = levels * 2 + 1;
    srand(time(0));

    for (int level = 0; level < levels; ++level) {
        int stars = 1;
        for (int row = 0; row <= level; ++row) {
            vector<char> line(width, ' ');
            int start = (width / 2) - row;
            for (int col = start; col < start + stars; ++col) {
                if (rand() % 4 == 0) {
                    char toy = "@$!&^#"[rand() % 4];
                    line[col] = toy;
                    ornaments.push_back({ tree.size(), col });
                }
                else {
                    line[col] = '*';
                }
            }
            tree.push_back(line);
            stars += 2;
        }
    }

    for (int i = 0; i < 2; ++i) {
        vector<char> line(width, ' ');
        line[width / 2] = '|';
        tree.push_back(line);
    }

    return tree;
}

void runGarland(vector<vector<char>>& tree, vector<pair<int, int>>& ornaments) {
    cout << "\033[2J"; // Очищення всього екрану один раз
    while (true) {
        displayTree(tree, ornaments);
        this_thread::sleep_for(chrono::milliseconds(200)); // Зміна інтервалу до 200 мс
    }
}

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    setlocale(LC_ALL, "RU");
    int levels;
    cout << "Введіть кількість рівнів ялинки: ";
    cin >> levels;

    vector<pair<int, int>> ornaments;
    vector<vector<char>> tree = generateTree(levels, ornaments);

    saveTreeToFile(tree);
    runGarland(tree, ornaments);

    return 0;
}
