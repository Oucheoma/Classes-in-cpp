#include <iostream>
#include "profile.hpp"

int main() {

  Profile sam ("Sam Dickens", 23, "Halifax", "Canada", "Cooking and Sleeping");

  std::cout << sam.get_profile() << "\n";

  

}
