#include "testlib.h"
#include <iostream>
using namespace std;

string options[] = {"piedra", "papel", "tijeras"};


int main(int argc, char* argv[]) {
    registerGen(argc, argv, 1);
    int n = rnd.next(1, 10);
    int m = rnd.next(1, 10);
    // printf("%i %i\n", n, m);
    println(n, m);
    for (int i = 0; i < 1<<n; i++) {
        // if (i+1 == i<<n) printf("%s",options[rnd.next(3)].c_str());
        // else printf("%s ",options[rnd.next(3)].c_str());
        string aux = options[rnd.next(3)];
        println(aux);
    }
    for (int i = 0; i < m; i++) {
        // printf("%i %s\n", rnd.next(1, n), options[rnd.next(3)].c_str());
        println(rnd.next(1, n), options[rnd.next(3)]);
    }
    return 0;
}
