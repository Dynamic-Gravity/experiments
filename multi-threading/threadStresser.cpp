/**
 * Dynamic-Gravity
 * This program explores the use of multithreading.
 */
#include <iostream>
#include "functions.h"
using namespace std;
int main(){
        int reply;
        echo(-2);
        cin >> reply;
        echo(reply);
        echo(-1);
        manager(reply);
        return 0;
}
