//Nurillo Abdikodirov
//CS-255 C++
//Elmhurst University

#include <iostream>
using namespace std;

/* Introduction to the Arrays in C++, and I am gpoing to write small and simple lines of code 
* to demonstrate the meaning of Arrays.
*/

int main(){
  int itemCounts[3];
  
  itemCounts[0] = 155;
  itemCounts[1] = 119;
  itemCounts[2] = 125;
  
  cout << itemCounts[1];
  
  return 0;
}


//Array's nth element can directly accessed using [n-1]: Oldest people program.


#include <iostream>

using namespace std;

int main()
{
   int oldestPeople[5];
   int nthPerson;
   
   oldestPeople[0] = 122;
   oldestPeople[1] = 119;
   oldestPeople[2] = 117;
   oldestPeople[3] = 117;
   oldestPeople[4] = 116;
   
   cout << "Enter N (1..5): ";
   cin >> nthPerson;
   
   if((nthPerson>=1) && (nthPerson <= 5)){
       cout << "The " << nthPerson << " the oldest person lived ";
       cout << oldestPeople[nthPerson - 1] << " years." << endl;
   }
   
    return 0;
}


//Arrays with loops
#include <iostream>

using namespace std;

int main(){
  const int NUM_ELEMENTS = 8;
  int userVals[NUM_ELEMENTS];
  int i;
  
  cout << "Enter " << NUM_ELEMENTS << " integer values" << endl;
  for(i = 0; i < NUM_ELEMENTS; ++i){
    cout << "Value: ";
    cin >> userVals[i];
  }
  
  cout << "You entered: ";
  for(i = 0; i < NUM_ELEMENTS; ++i){
      cout << userVals[i] << " ";
  }
  cout << endl;
  
  return 0;
}


//Annual salary tax rate calculation with vectors

#include <iostream>
#include <vector>
using namespace std;

int main() {
   const int MAX_ELEMENTS = 10;
   int annualSalary;
   double taxRate;
   int taxToPay;
   int numSalaries;
   bool keepLooking;
   unsigned int i;
   vector<int> salaryBase(5);
   vector<double> taxBase(5);
   // FIXME: Declare annualSalaries and taxesToPay vectors to hold 10 elements each.
   // FIXME: Use the constant MAX_ELEMENTS to declare the vectors

   salaryBase.at(0) = 0;
   salaryBase.at(1) = 20000;
   salaryBase.at(2) = 50000;
   salaryBase.at(3) = 100000;
   salaryBase.at(4) = 99999999;

   taxBase.at(0) = 0.0;
   taxBase.at(1) = 0.10;
   taxBase.at(2) = 0.20;
   taxBase.at(3) = 0.30;
   taxBase.at(4) = 0.40;

   numSalaries = 0;

   cout << "\nEnter annual salary (0 to exit): " << endl;
   cin >> annualSalary;

   while (annualSalary > 0) {
      i = 0;
      keepLooking = true;

      // Search for the appropriate table row for given annualSalary
      while ((i < salaryBase.size()) && keepLooking) {
         if (annualSalary <= salaryBase.at(i)) {
            taxRate = taxBase.at(i);
            keepLooking = false;
         }
         else {
            ++i;
         }
      } // End inner loop (search for appropriate table row)

      taxToPay = static_cast<int>(annualSalary * taxRate);   // Truncate tax to an integer amount

      // FIXME: Insert code to include entries to the annual salaries and taxes to pay
      // FIXME: tables. Replace the appropriate variables with the vector element.
      cout << "Annual salary: " << annualSalary <<
              "\tTax rate: " << taxRate <<
              "\tTax to pay: " << taxToPay << endl;

      // Get the next annual salary
      cout << "\nEnter annual salary (0 to exit): " << endl;
      cin >> annualSalary;
   } // End outer while loop (valid annualSalary entered)

   // FIXME: Challenge - add code to sum the annual salaries and taxes to pay
   //        and print the totals

   return 0;
}

















