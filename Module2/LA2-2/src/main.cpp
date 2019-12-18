#include <array>     // for array containers
#include <iostream>  // basic i/o
#include <string>    // strings
#include <fstream>   // file stream
#include <array>

using namespace std;

/**
 * @brief Shows how to define and use an ifstream object to read from a file.
 *
 * We will define ifstream objects and then see some operators
 * and methods that work with these objects.
 *
 * @return int 0 means function exited with success
 */

const int kMaxSize = 24;
int main() {
  // create an ojbect of type ifstream
  std::ifstream in; //input filestream
  // open the file age.txt
  in.open("../age.txt");  //This is the relevent path from the exe
  if (in.fail())
  {
    std::cout << "Unable to open file age.txt \nShutting down\n";
    return 1;
  }

  

  // read from the age file and store values in an array
  std::array<int, kMaxSize> ages;
  ages.fill(-1); //initialize elements to -1
  int age_size = 0;
  
  //in >> ages[age_size];

  // print out the values in the array

  // read to the end of the file

  while (age_size < kMaxSize && in >> ages[age_size])
  {
    age_size++;
  }

  // print out the valid values in the array
  for(auto age: ages)
  {
    std::cout << age << std::endl;
  }

   //close file
   in.close();
  // print out the all the values in the array


  // Define an ifstream object and open the file name.txt
  
  
  //input filestream
  std::ifstream infile;

  // open the file names.txt
  
  infile.open("../name.txt");  //This is the relevent path from the exe
  if (infile.fail())
  {
    std::cout << "Unable to open file name.txt \nShutting down\n";
    return 1;
  }
  
  // read one name, store it in the array, and print it
  std::array <string, kMaxSize > names;
  names.fill("-");
  int names_size = 0;
  while(age_size < kMaxSize && std::getline(infile, names[names_size]))
  {
    names_size++;
  }

  // read the rest of the names in the file
  for(auto name: names)
  {
    std::cout << name << std::endl;
  }
  infile.close();
  // print valid elements in the names array

  names.fill("-");
  ages.fill(-1);

  std::ifstream big                ;

  // std::array <string, kMaxSize > age_names;

  big.open("../name_age.txt");  //This is the relevent path from the exe
  if (big.fail())
  {
    std::cout << "Unable to open file name_age.txt \nShutting down\n";
    return 1;
  }

  int index = 0;
  
  while(index < kMaxSize && big >> ages[index])
  {
      big.ignore();
      std::getline(big, names[index]);
      index++;
  }

  for(int num = 0; num < index; ++num)
  {
    std::cout << ages[num] << " for name: " <<
      names[num]  << std::endl;
  }

  return 0;
}

