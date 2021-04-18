//
//  main.cpp
//  C++_TestProgram_Q2P2_AlanPowell
//
//  Created by Alanté Powell on 4/17/21.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int i;
    int variableWithinScope = 0;
    
    for (i = 0; i < 5; i++) {
        int variableOutsideOfScope = 100;
        variableWithinScope = 50;
    }
    
    cout << "This will not throw an error. The value of the variable within scope is: " << variableWithinScope << endl;
//    cout << "This WILL throw an error. The value of the variable out of scope is not determinable." << variableOutsideOfScope << endl;
}
