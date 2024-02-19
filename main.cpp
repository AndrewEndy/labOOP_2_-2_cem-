#include <iostream>
#include "Mechanic.h"
#include "Membrane.h"
#include "Optical.h"

using namespace std;
int main() {
    Optical popa("qweqwe",1.232);
    popa.info();

    Membrane wowa("wowa",1.3,"plastic", true);
    wowa.info();

    Mechanic MMM("SMM",10,"beton",true);
    MMM.info();
    return 0;
}
