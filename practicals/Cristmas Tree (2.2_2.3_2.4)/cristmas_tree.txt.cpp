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

using namespace std;

// Функція для зміни кольору виведення
void setColor(int colorCode) {
    cout << "\033[1;" << colorCode << "m";
}

// Функція для збереження ялинки у файл
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

// Функція для відображення ялинки з динамічним кольором іграшок
void displayTree(const vector<vector<char>>& tree, const vector<pair<int, int>>& ornaments) {
    for (int i = 0; i < tree.size(); ++i) {
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

// Функція для генерування ялинки та розміщення іграшок
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
                if (rand() % 10 == 0) {
                    char toy = "@$%#"[rand() % 4];
                    line[col] = toy;
                    ornaments.push_back({ tree.size(), col }); // зберігаємо координати іграшок
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

// Функція для реалізації блимання гірлянди
void runGarland(vector<vector<char>>& tree, vector<pair<int, int>>& ornaments) {
    while (true) {
        displayTree(tree, ornaments);
        this_thread::sleep_for(chrono::milliseconds(500));
        cout << "\033[2J\033[1;1H"; // очищення екрану
    }
}

int main() {
    int levels;
    cout << "Введіть кількість рівнів ялинки: ";
    cin >> levels;

    vector<pair<int, int>> ornaments;
    vector<vector<char>> tree = generateTree(levels, ornaments);

    // Відображення та збереження ялинки
    saveTreeToFile(tree);
    runGarland(tree, ornaments);

    return 0;
}