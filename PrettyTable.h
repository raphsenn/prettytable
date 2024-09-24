
// PrettyTable
// Author: Raphael Senn

#pragma once

#include <vector>
#include <string>
#include <tuple>
#include <array>


template<typename... Args>
class PrettyTable {

  private:
    int rows;
    int cols;

  public:
    PrettyTable();
    ~PrettyTable();
    
    std::vector<std::string> field_names;
    std::vector<std::tuple<Args>> rows;
};

// Prints a table in SQL style.
template<typename... Args>
void print(PrettyTable<Args...> table);