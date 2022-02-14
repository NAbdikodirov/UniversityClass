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
