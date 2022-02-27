
#include <iostream>
using namespace std;

class Dog {
   public:
      void SetWeightAndAge(int weightToSet, int ageToSet);
      int GetHumanYears() const;
   private:
      int years;
      int weight;
      string size;
      int humanYears;
      void SetHumanYears();
};

void Dog::SetWeightAndAge(int weightToSet, int yearsToSet) {
   weight = weightToSet;

   if (weight <= 25) {
      size = "small";
   }
   else if (weight <= 50) {
      size = "medium";
   }
   else {
      size = "large";
   }

   years = yearsToSet;
   SetHumanYears();
}

void Dog::SetHumanYears() {
   int factor;

   if (size == "small") {
      factor = 6;
   }
   else if (size == "medium") {
      factor = 7;
   }
   else {
      factor = 8;
   }

   humanYears = years * factor;
}

int Dog::GetHumanYears() const {
   return humanYears;
}

int main() {
   Dog buddy;

   buddy.SetWeightAndAge(52, 7);

   cout << "Human years: " << buddy.GetHumanYears();
   
