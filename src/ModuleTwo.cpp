#include "ModuleTwo.h"
#include "../module_one/include/ModuleOne.h"

ModuleTwo::ModuleTwo() {
    // Initialization code here
}

ModuleTwo::~ModuleTwo() {
    // Cleanup code here
}

int ModuleTwo::multiply(int a, int b) {
    int result = 0;
    ModuleOne mo;
    for(int i = 0; i < b; i++) {
        result = mo.add(result, a);
    }
    return result;
}
