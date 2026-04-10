#include <stdio.h>
#include "polynomial.h"

int main() {
    polynomial a, b, c;

    a.read();
    b.read();

    c.add(a, b);

    a.display("A = ");
    b.display("B = ");
    c.display("A+B = ");

    return 0;
}
