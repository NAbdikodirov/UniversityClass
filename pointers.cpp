//this is a solid example for the Pointers in C++


#include <iostream>
#include <vector>
using namespace std;

class Car {
   public:
      Car(int distanceToSet = 0);
      int GetDistanceTraveled() const;
   private:
      int distanceTraveled;
};

Car::Car(int distanceToSet) {
   distanceTraveled = distanceToSet;
}

int Car::GetDistanceTraveled() const {
   return distanceTraveled;
}

int GetTotalMiles(vector<Car*> carsList) {
   int totalMiles;
   unsigned int i;

   totalMiles = 0;

   for (i = 0; i < carsList.size(); i++) {
      totalMiles = totalMiles + carsList.at(i)->GetDistanceTraveled();
   }

   return totalMiles;
}

int main() {
   vector<Car*> garage;
   garage.push_back(new Car(30));
   garage.push_back(new Car(20));
   garage.push_back(new Car(5));

   cout << "Traveled: " << GetTotalMiles(garage) << endl;
   delete garage.at(1);
   garage.erase(garage.begin() + 1);
   cout << "Traveled: " << GetTotalMiles(garage) << endl;

   return 0;
}


//How to find char in C string

#include <iostream>
#include <cstring>
using namespace std;

int main() {
   char personName[100];
   char searchChar;
   char* searchResult = nullptr;

   cin.getline(personName, 100);
   cin >> searchChar;

   /* Your solution goes here  */
   searchResult = strchr(personName, searchChar);

   if (searchResult != nullptr) {
      cout << "Character found." << endl;
   }
   else {
      cout << "Character not found." << endl;
   }

   return 0;
}
