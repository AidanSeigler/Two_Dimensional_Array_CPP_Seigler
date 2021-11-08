// Student Name: Aidan Seigler

// Teacher: Dr. Tyson McMillan

// Date: 11/8/2021

// A program to practice working with multi-dimensional arrays

#include <iostream>
using namespace std;

/*  
Research Input data: go to http://www.weather.com (Links to an external site.)

Pick two cities of your choice. Fill in the temperature for the 7 days of this week of both cities. Fill in this text data table, which will be used in your program.

//Fort_Worth = 1, Dallas = 2  Replace City_One and City_Two with the names of your cities

//Data Table

//City X, Day X: Temp

Fort_Worth, Day 1: TEMP

Fort_Worth, Day 2: TEMP

Fort_Worth, Day 3: TEMP

Fort_Worth, Day 4: TEMP

Fort_Worth, Day 5: TEMP

Fort_Worth, Day 6: TEMP

Fort_Worth, Day 7: TEMP

Dallas, Day 1: TEMP

Dallas, Day 2: TEMP

Dallas, Day 3: TEMP

Dallas, Day 4: TEMP

Dallas, Day 5: TEMP

Dallas, Day 6: TEMP

Dallas, Day 7: TEMP
*/

int main()
{
  const int CITY = 2;
  const int WEEK = 7;

  int temperature[CITY][WEEK];
  // Note your input data from the above

  cout << "Enter all temperature for a week of first city and then second city.\n";

  // Inserting the values into the temperature array
  // Note for every dimension of the array you need a for loop 2 dimensions = 2 for loops

  for (int i = 0; i < CITY; ++i)
  {
    for (int j = 0; j < WEEK; ++j)
    {
      cout << "City " << i + 1 << ", Day " << j + 1 << " : ";
      cin >> temperature[i][j];
    }
  }

  cout << "\n\nDisplaying Values:\n";

  // Accessing the values from the temperature array
  for (int i = 0; i < CITY; ++i)
  {
    for (int j = 0; j < WEEK; ++j)
    {
      cout << "City " << i + 1 << ", Day" << j + 1 << " = " << temperature[i][j] << endl;
    }
  }

  return 0;
}