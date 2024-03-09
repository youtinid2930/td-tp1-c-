#include<iostream>

struct T {
int n;
float x;
};

void zero (T *t) {
t->n=0;
t->x=0;
}

int main ()  {
   T t = {4,73.394};

   std::cout << "avant la fonction zero n=" << t.n << " x=" << t.x <<std::endl;
   zero(&t);
   std::cout << "apres la fonction zero n="<< t.n <<" x="<< t.x <<std::endl;


}
