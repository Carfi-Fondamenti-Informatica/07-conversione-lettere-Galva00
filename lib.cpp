
#include "lib.h"
bool convert (char & a){
    if (a>=65 and a<=90){
        a +=32;
        return true;
    }else if(a>=97 and a<=122){
        a -= 32;
        return true;
    }
    return false;
}
