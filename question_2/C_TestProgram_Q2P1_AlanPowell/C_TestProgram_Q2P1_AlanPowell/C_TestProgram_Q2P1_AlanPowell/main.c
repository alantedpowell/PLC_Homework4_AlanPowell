//
//  main.c
//  C_TestProgram_Q2P1_AlanPowell
//
//  Created by Alanté Powell on 4/17/21.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int i;
    int variableWithinScope = 0;
    
    for (i = 0; i < 5; i++) {
        int variableOutsideOfScope = 100;
        variableWithinScope = 50;
    }
    
    printf("This will not throw an error. The value of the variable within scope is: %d", variableWithinScope);
//    printf("This WILL throw an error. The value of the variable outside of scope is undeterminable. %d", variableOutsideOfScope)
}
