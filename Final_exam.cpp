//marc gabriel galleno

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool destroy(int mass, vector<int>& asteroids) {
   sort(asteroids.begin(), asteroids.end());
   for (int asteroid : asteroids) {
       if (mass >= asteroid) {
           mass += asteroid;
       } else {
           return false;
       }
   }
   return true;
}

int mass = 0;
int main() {
    cout << "input mass= ";
    cin >> mass;
    cout << "mass: " << mass << ", asteroids: {3, 9, 19, 5, 21}"  << endl;
    vector<int> asteroids1 = {3, 9, 19, 5, 21};
    cout << "Output: " <<(destroy(mass, asteroids1) ? "true" : "false") << endl;
}




