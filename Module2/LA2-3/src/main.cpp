#include <array>
#include <iostream>
#include <string>
#include <fstream>
#include <iomanip> //for formatted output
using namespace std;

/**
 * @brief Shows how to define and use an ofstream object to write to a file.
 *
 * We will define ofstream objects and then see some of the operators
 * and functions that work with these objects.
 *
 * @return int 0 means function exited with success
 */
int main() {
  // arrays that contain data
  const int kMaxSize = 20;
  array<int, kMaxSize> commute_minutes = {22, 51, 63, 12, 17, 93, 45,
                                          18, 66, 45, 43, 77, 38, 43,
                                          52, 21, 8,  19, 7,  14};

  array<int, kMaxSize> commute_miles = {8,  22, 28, 2,  4,  62, 15, 6, 42, 28,
                                        16, 43, 27, 18, 41, 8,  3,  5, 2,  4};

  array<string, kMaxSize> towns = {
      "Bountiful",    "Centerville",        "Clinton",       "South Weber",
      "West Point",   "Cottonwood Heights", "Murray",        "Salt Lake City",
      "South Jordan", "West Jordan",        "American Fork", "Lindon",
      "Payson",       "Pleasant Grove",  "Spanish Fork",  "Harrisville",
      "Ogden",        "Pleasant View",      "Riverdale",     "South Ogden"};

  array<string, kMaxSize> names = {
      "Walter", "Chris", "Stan",   "Mary",  "Shelly", "Kim",  "Kelly",
      "George", "Sam",   "Walter", "Ann",   "Laura",  "Paul", "Phillip",
      "Susan",  "Hal",   "Olivia", "Polly", "Roy",    "Scott"};

  // create a variable of type ofstream
  std::ofstream commute_file;

  // open the file commute.txt
  commute_file.open("../commute.txt");
  if( commute_file.fail())
  {
    std::cout << "Unable to open file commute file.\n Shutting down\n";
    return 1;
  }

  // write commute_minutes and commute_miles to the file commute.txt
  for (int index =0; index < kMaxSize; ++index)
  {
    std::cout << commute_minutes[index] << ", " << commute_miles[index] << std::endl;
    commute_file << commute_minutes[index] << ", " << commute_miles[index] << std::endl;
  }

  
  // create a variable of type ofstream and open the file town.txt
  std::ofstream town;
  town.open("../town.txt");
  if( town.fail())
  {
    std::cout << "Unable to open file town file.\n Shutting down\n";
    return 1;
  }

  // write the towns to the file town.txt
  for (int index =0; index < kMaxSize; ++index)
  {
    std::cout << towns[index] << "," << names[index] << std::endl;
    town << towns[index] << ", " << names[index] << std::endl;
  }


  // create a variable of type ofstream and open the file commute_data.txt
  std::ofstream commute_data;
  commute_data.open("../commute_data.csv");
  if( commute_data.fail())
  {
    std::cout << "Unable to open file data file.\n Shutting down\n";
    return 1;
  }


  // write commute_minutes, commute_miles, and towns to the file commute.txt
  for (int index =0; index < kMaxSize; ++index)
  {
    std::cout << commute_minutes[index] << ", " << commute_miles[index] << std::endl;
    commute_file << commute_minutes[index] << ", " << commute_miles[index] << ", " << towns[index] << endl;;
  }

  // do computations and add labeling to data before writing to file

  // write a report to the commute_report.txt file. Include name, town,
  // commute_minutes, commute_miles, and average minutes per mile to the file
  // commute.txt
  std::ofstream utah_file;
  utah_file.open("../utah_file.csv");
  if( utah_file.fail())
  {
    std::cout << "Unable to open file Utah_data.\n Shutting down\n";
    return 1;
  }


  std::string header = "Version,minutes,miles,min/miles,name,town\n";
  utah_file << header;
  cout << setiosflags(ios::showpoint);
  for(int index = 0; index < kMaxSize; ++index)
  {
    utah_file << setw(4) << commute_miles[index] << ","//field 0
      << setw(4) <<commute_minutes[index] << ","
      << setw(4) <<static_cast<float>(commute_minutes[index])/commute_miles[index] << ","
      << setw(4) <<names[index] << ","
      << setw(4) << towns[index]
      << std::endl;
  } 

  return 0;
}
