#include <iostream>
#include <string> //for string objects

using namespace std;


/**
 * @brief Shows how to define and use a string object
 *
 * We will define string variables and then see what operators and
 * functions work with these variables.
 *
 * @return int 0 means function exited with success
 */
int main() {
  // create a variable of type string
  std::string name = "Weber Waldo";

  // print it out
  std::cout << name << std::endl;

  //// get a string from a user
  //getline(std::cin, name);
 // // to get strings with spaces 
//
  // add two strings together
  cout << "Hi " << name << std::endl;

  std::string title = "Dr. ";
  std::string formal;
  formal = title + name;
  std::cout << "Hi: " << formal << std::endl;
  // how long is the string
  std::cout << "The length of the name is: " << name.size() << std::endl;
  std::cout << "The length of the title is: " << name.size() << std::endl;
  std::cout << "The length of the title is: " << title.length() << std::endl;
  std::cout << "The length of the title is: " << title.length() << std::endl;
  // use [] to get an individual character
  std::cout << "The first character of the name is: " << name[0] << std::endl;
  std::cout << "The third character of the name is: " << name[2] << std::endl;
  // get name and commute information from a user
  int minutes, miles;
  std::cout << "Enter your full name: " << std::endl;
  getline(std::cin, name);
  std::cout <<"How long is your commute in minutes?: " ;
  std::cin >> minutes;
  std::cout << "How many mile is your commute?: ";
  std::cin >> miles;
  std::cout << name << " has a " << minutes << " minutes, "
   <<miles << " miles comute" << std::endl;
  // get commute information and name from a user

  // the string function find
  std::string story = 
  "The dragons are flying over the mountains. They are hunting for a "
  "place to settle for the waldo night. What they see is endless horizon.";

  std::cout << "waldo is at: " << story.find("waldo") << std::endl;
 
  std::string n;

  // the string function replace
  std::string input;
  std::string newWord;

  cout << "The dragons are flying over the mountains. They are hunting for a "
      "place to settle for the waldo night. What they see is endless horizon." << endl;

  cout << "What word would you like to change?: " ;
  cin >> input;
  cout << "What word would you like to replace it with?: ";
  cin >> newWord;
  
  story.replace(story.find(input), story.find(input), newWord);
  cout << story << std::endl;

  return 0;
}

/*
      "The dragons are flying over the mountains. They are hunting for a "
      "place to settle for the waldo night. What they see is endless horizon."
*/
