#include<iostream>


int main() {
   int *adi = new int;
   double *add = new double[100];
   *adi = 5;
   add[0]=1;
   std::cout << *adi << std::endl;
   std::cout << add[0] << std::endl;
   delete adi;
   delete add;
}

