// Copyright 2022 NNTU-CS
#include  <iostream>
#include  <fstream>
#include  <locale>
#include  <cstdlib>
#include  "tree.h"

std::vector<char> getPerm(const Tree& tree, int n) {
  // напишите реализацию
  std::vector<std::vector<char>> permutes = tree.getAllPermutes();
    if (permutes.size() >= n) {
        return permutes[n - 1];
    }
    return {};
}
