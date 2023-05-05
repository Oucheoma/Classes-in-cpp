#include <iostream>
#include "profile.hpp"

//using constructors.
Profile::Profile (std::string user_name, int user_age, std::string user_city, std::string user_country, std::string user_hobbies){
  name = user_name;
  age = user_age;
  city = user_city;
  country = user_country;
  hobbies = user_hobbies;
}

std::string Profile::get_profile(){
  std::cout << "Name: " << name <<".\n"
  << "Age: " << age <<".\n"
  << "City: " << city <<".\n"
  << "Country: " << country << ".\n"
  << "Hobbies: " << hobbies << ".\n";
  
}

// we use push_back to add elements to vectors
// void Profile::add_hobby(std::string new_hobby){
//   hobbies.push_back(new_hobby);
// }

 
