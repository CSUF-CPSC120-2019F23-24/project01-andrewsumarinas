// Name: Andrew Sumarinas
// This program calculates and displays business expenses.

#include <iostream>
#include <string>
#include <iomanip>

int main()
{
  std::string myLocation;    // I added the <string> directive in
  int myDays;               //order to use the string variable type
  double myHotelExpense;
  double myMealExpense;
  double myTotal;

  std::cout << "Hello, and welcome to Business Trip Tracker!" << std::endl << std::endl;

  std::cout << "Please input the following information: " << std::endl <<std::endl;
  std::cout << "Where will the bussiness trip be located at? ";
  std::cin >> myLocation;

  std::cout << std::endl;

  std::cout << "How many days will the trip take? ";
  std::cin >> myDays;

  std::cout << std::endl;

  std::cout << "What is the total hotel expense? ";
  std::cout << "$";
  std::cin >> myHotelExpense;

  std::cout<< std::endl;

  std::cout << "What is the total meal expense? ";
  std::cout << "$";
  std::cin >> myMealExpense;
  std::cout << std::endl;

  myTotal = myHotelExpense + myMealExpense; //Calculation for the total expenses

  std::cout << "Thank you for choosing Business Trip Tracker! Kindly review the following: ";
  std::cout << std::endl;
  std::cout << std::endl;


  //this is where the first row of the tables are set
  std::cout << std::setw(15) << "Location" << std::setw(8) << "Days" << std::setw(12)
  << "Hotel" << std::setw(12) << "Meal" << std::setw(12) << "Total" << std::endl;

  //and here are the corresponding data inputted by the user
  std::cout << std::setw(15) << myLocation << std::setw(8) << myDays << std::setw(12)
  << myHotelExpense << std::setw(12) << myMealExpense <<
  std::setw(12) << myTotal;

  std::cout << std::endl;
  std::cout << std::endl;

  return 0;


}
