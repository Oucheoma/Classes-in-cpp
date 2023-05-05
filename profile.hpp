#include <string>
#include <vector>


class Profile{

  std::string name;
  int age;
  std::string city;
  std::string country;
  std::string hobbies;


  public:
//using constructors
  Profile (std::string user_name, int user_age, std::string user_city, std::string user_country, std::string user_hobbies);

 std::string get_profile();

//  void add_hobby(std::string new_hobby);







};
