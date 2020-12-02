#include <iostream>
#include <cstdlib>
#include <random>

using namespace std;

int main()
{
    random_device kostka;
    default_random_engine losowanie(kostka());
    uniform_int_distribution <int> uniform_dist(1, 6);

    for(int i=0; i<10; i++)
        cout << uniform_dist(losowanie);
   
    return 0;
}
