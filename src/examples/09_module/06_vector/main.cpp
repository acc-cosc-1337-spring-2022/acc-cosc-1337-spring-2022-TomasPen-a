//
#include "vector.h"
#include<stdlib.h>
#include<memory>

using namespace std;

int main()
{
    Vector v(3);
    Vector v1 = move(v);

    return 0;
}