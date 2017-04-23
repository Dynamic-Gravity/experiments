#include <iostream>
#include <string>
#include <thread>
#include <ctime>
#include <vector>
#include "functions.h"
#define SIZE 10000000
using namespace std;
void t01(){
        thread t1(task);
        t1.detach();
}
void t02(){
        thread t1(task);
        t1.detach();
        thread t2(task);
        t2.detach();
}
void t03(){
        thread t1(task);
        t1.detach();
        thread t2(task);
        t2.detach();
        thread t3(task);
        t3.detach();
}
void t04(){
        thread t1(task);
        t1.detach();
        thread t2(task);
        t2.detach();
        thread t3(task);
        t3.detach();
        thread t4(task);
        t4.detach();
}
void t05(){
        thread t1(task);
        t1.detach();
        thread t2(task);
        t2.detach();
        thread t3(task);
        t3.detach();
        thread t4(task);
        t4.detach();
        thread t5(task);
        t5.detach();
}
void t06(){
        thread t1(task);
        t1.detach();
        thread t2(task);
        t2.detach();
        thread t3(task);
        t3.detach();
        thread t4(task);
        t4.detach();
        thread t5(task);
        t5.detach();
        thread t6(task);
        t6.detach();
}
void t07(){
        thread t1(task);
        t1.detach();
        thread t2(task);
        t2.detach();
        thread t3(task);
        t3.detach();
        thread t4(task);
        t4.detach();
        thread t5(task);
        t5.detach();
        thread t6(task);
        t6.detach();
        thread t7(task);
        t7.detach();
}
void t08(){
        thread t1(task);
        t1.detach();
        thread t2(task);
        t2.detach();
        thread t3(task);
        t3.detach();
        thread t4(task);
        t4.detach();
        thread t5(task);
        t5.detach();
        thread t6(task);
        t6.detach();
        thread t7(task);
        t7.detach();
        thread t8(task);
        t8.detach();
}
void t09(){
        thread t1(task);
        t1.detach();
        thread t2(task);
        t2.detach();
        thread t3(task);
        t3.detach();
        thread t4(task);
        t4.detach();
        thread t5(task);
        t5.detach();
        thread t6(task);
        t6.detach();
        thread t7(task);
        t7.detach();
        thread t8(task);
        t8.detach();
        thread t9(task);
        t9.detach();
}
void t10(){
        thread t1(task);
        t1.detach();
        thread t2(task);
        t2.detach();
        thread t3(task);
        t3.detach();
        thread t4(task);
        t4.detach();
        thread t5(task);
        t5.detach();
        thread t6(task);
        t6.detach();
        thread t7(task);
        t7.detach();
        thread t8(task);
        t8.detach();
        thread t9(task);
        t9.detach();
        thread t10(task);
        t10.detach();
}
void t11(){
        thread t1(task);
        t1.detach();
        thread t2(task);
        t2.detach();
        thread t3(task);
        t3.detach();
        thread t4(task);
        t4.detach();
        thread t5(task);
        t5.detach();
        thread t6(task);
        t6.detach();
        thread t7(task);
        t7.detach();
        thread t8(task);
        t8.detach();
        thread t9(task);
        t9.detach();
        thread t10(task);
        t10.detach();
        thread t11(task);
        t11.detach();
}
void t12(){
        thread t1(task);
        t1.detach();
        thread t2(task);
        t2.detach();
        thread t3(task);
        t3.detach();
        thread t4(task);
        t4.detach();
        thread t5(task);
        t5.detach();
        thread t6(task);
        t6.detach();
        thread t7(task);
        t7.detach();
        thread t8(task);
        t8.detach();
        thread t9(task);
        t9.detach();
        thread t10(task);
        t10.detach();
        thread t11(task);
        t11.detach();
        thread t12(task);
        t12.detach();
}
void t13(){
        thread t1(task);
        t1.detach();
        thread t2(task);
        t2.detach();
        thread t3(task);
        t3.detach();
        thread t4(task);
        t4.detach();
        thread t5(task);
        t5.detach();
        thread t6(task);
        t6.detach();
        thread t7(task);
        t7.detach();
        thread t8(task);
        t8.detach();
        thread t9(task);
        t9.detach();
        thread t10(task);
        t10.detach();
        thread t11(task);
        t11.detach();
        thread t12(task);
        t12.detach();
        thread t13(task);
        t13.detach();
}
void t14(){
        thread t1(task);
        t1.detach();
        thread t2(task);
        t2.detach();
        thread t3(task);
        t3.detach();
        thread t4(task);
        t4.detach();
        thread t5(task);
        t5.detach();
        thread t6(task);
        t6.detach();
        thread t7(task);
        t7.detach();
        thread t8(task);
        t8.detach();
        thread t9(task);
        t9.detach();
        thread t10(task);
        t10.detach();
        thread t11(task);
        t11.detach();
        thread t12(task);
        t12.detach();
        thread t13(task);
        t13.detach();
        thread t14(task);
        t14.detach();
}
void t15(){
        thread t1(task);
        t1.detach();
        thread t2(task);
        t2.detach();
        thread t3(task);
        t3.detach();
        thread t4(task);
        t4.detach();
        thread t5(task);
        t5.detach();
        thread t6(task);
        t6.detach();
        thread t7(task);
        t7.detach();
        thread t8(task);
        t8.detach();
        thread t9(task);
        t9.detach();
        thread t10(task);
        t10.detach();
        thread t11(task);
        t11.detach();
        thread t12(task);
        t12.detach();
        thread t13(task);
        t13.detach();
        thread t14(task);
        t14.detach();
        thread t15(task);
        t15.detach();
}
void t16(){
        thread t1(task);
        t1.detach();
        thread t2(task);
        t2.detach();
        thread t3(task);
        t3.detach();
        thread t4(task);
        t4.detach();
        thread t5(task);
        t5.detach();
        thread t6(task);
        t6.detach();
        thread t7(task);
        t7.detach();
        thread t8(task);
        t8.detach();
        thread t9(task);
        t9.detach();
        thread t10(task);
        t10.detach();
        thread t11(task);
        t11.detach();
        thread t12(task);
        t12.detach();
        thread t13(task);
        t13.detach();
        thread t14(task);
        t14.detach();
        thread t15(task);
        t15.detach();
        thread t16(task);
        t16.detach();
}
void t17(){
        thread t1(task);
        t1.detach();
        thread t2(task);
        t2.detach();
        thread t3(task);
        t3.detach();
        thread t4(task);
        t4.detach();
        thread t5(task);
        t5.detach();
        thread t6(task);
        t6.detach();
        thread t7(task);
        t7.detach();
        thread t8(task);
        t8.detach();
        thread t9(task);
        t9.detach();
        thread t10(task);
        t10.detach();
        thread t11(task);
        t11.detach();
        thread t12(task);
        t12.detach();
        thread t13(task);
        t13.detach();
        thread t14(task);
        t14.detach();
        thread t15(task);
        t15.detach();
        thread t16(task);
        t16.detach();
        thread t17(task);
        t17.detach();
}
void t18(){
        thread t1(task);
        t1.detach();
        thread t2(task);
        t2.detach();
        thread t3(task);
        t3.detach();
        thread t4(task);
        t4.detach();
        thread t5(task);
        t5.detach();
        thread t6(task);
        t6.detach();
        thread t7(task);
        t7.detach();
        thread t8(task);
        t8.detach();
        thread t9(task);
        t9.detach();
        thread t10(task);
        t10.detach();
        thread t11(task);
        t11.detach();
        thread t12(task);
        t12.detach();
        thread t13(task);
        t13.detach();
        thread t14(task);
        t14.detach();
        thread t15(task);
        t15.detach();
        thread t16(task);
        t16.detach();
        thread t17(task);
        t17.detach();
        thread t18(task);
        t18.detach();
}
void t19(){
        thread t1(task);
        t1.detach();
        thread t2(task);
        t2.detach();
        thread t3(task);
        t3.detach();
        thread t4(task);
        t4.detach();
        thread t5(task);
        t5.detach();
        thread t6(task);
        t6.detach();
        thread t7(task);
        t7.detach();
        thread t8(task);
        t8.detach();
        thread t9(task);
        t9.detach();
        thread t10(task);
        t10.detach();
        thread t11(task);
        t11.detach();
        thread t12(task);
        t12.detach();
        thread t13(task);
        t13.detach();
        thread t14(task);
        t14.detach();
        thread t15(task);
        t15.detach();
        thread t16(task);
        t16.detach();
        thread t17(task);
        t17.detach();
        thread t18(task);
        t18.detach();
        thread t19(task);
        t19.detach();
}
void t20(){
        thread t1(task);
        t1.detach();
        thread t2(task);
        t2.detach();
        thread t3(task);
        t3.detach();
        thread t4(task);
        t4.detach();
        thread t5(task);
        t5.detach();
        thread t6(task);
        t6.detach();
        thread t7(task);
        t7.detach();
        thread t8(task);
        t8.detach();
        thread t9(task);
        t9.detach();
        thread t10(task);
        t10.detach();
        thread t11(task);
        t11.detach();
        thread t12(task);
        t12.detach();
        thread t13(task);
        t13.detach();
        thread t14(task);
        t14.detach();
        thread t15(task);
        t15.detach();
        thread t16(task);
        t16.detach();
        thread t17(task);
        t17.detach();
        thread t18(task);
        t18.detach();
        thread t19(task);
        t19.detach();
        thread t20(task);
        t20.detach();
}

void manager(int r){
        switch(r) {
        case 1: t01();
                break;
        case 2: t02();
                break;
        case 3: t03();
                break;
        case 4: t04();
                break;
        case 5: t05();
                break;
        case 6: t06();
                break;
        case 7: t07();
                break;
        case 8: t08();
                break;
        case 9: t09();
                break;
        case 10: t10();
                break;
        case 11: t11();
                break;
        case 12: t12();
                break;
        case 13: t13();
                break;
        case 14: t14();
                break;
        case 15: t15();
                break;
        case 16: t16();
                break;
        case 17: t17();
                break;
        case 18: t18();
                break;
        case 19: t19();
                break;
        case 20: t20();
                break;
        default : cout << "Not a valid response. Try again with (1-20).\n";
        }
}

/**
 * [task description]
 * https://stackoverflow.com/questions/5200879/printing-prime-numbers-from-1-through-100
 */
void task(){
        int i=3;
        unsigned j=0;
        vector<int> primes;

        primes.push_back(2);
        clock_t begin = clock();

        for( i=3; i < SIZE; i++) {
                bool prime=true;
                for(j=0; j<primes.size() && primes[j]*primes[j] <= i; ++j) {
                        if(i % primes[j] == 0) {
                                prime=false;
                                break;
                        }
                }
                if(prime) {
                        primes.push_back(i);
                        //cout << i << " ";
                }
        }

        cout << "Total prime numbers found: " << primes.size()-1 << "\n";

        //measures the duration of the thread execution time
        clock_t end = clock();
        double elapsed_secs = double(end - begin) / CLOCKS_PER_SEC;
        cout << "Thread used " << elapsed_secs << " seconds of CPU time.\n";
        echo(-3);
}

/**
 * [echo description]
 * @param option [description]
 */
void echo(int option){
        string reply;
        switch(option) {
        case -3:
                reply = "exiting...\n";
                break;
        case -2:
                reply = "How many threads would you like to use?\n>";
                break;

        case -1:
                reply = "Performing calculations, please wait...\n";
                break;

        case 0:
                reply = "What are you running this on, a potato?\n";
                break;

        case 1:
                reply = "1 thread will be used\n";

                break;

        case 2:
                reply = "2 threads will be used\n";
                break;

        case 3:
                reply = "3 threads will be used\n";
                break;

        case 4:
                reply = "4 threads will be used\n";
                break;

        default: reply = "Not a valid response. Try again.\n";
        }
        cout << reply;
}
