/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string name; 
    
    int x1, x2, x3, x4, x5;
    
    double avg;
    
    cout << "hello, what is your name? " << endl;
    cin >> name;
    cout << "hello, " << name << endl;
    cout << "please enter 5 test scores:" << endl;
    cout << "Test 1: " << endl;
    cin >> x1;
    cout << "Test 2: " << endl;
    cin >> x2;
    cout << "Test 3: " << endl;
    cin >> x3;
    cout << "Test 4: " << endl;
    cin >> x4;
    cout << "Test 5: " << endl;
    cin >> x5;
    
    avg = static_cast<double>((x1+x2+x3+x4+x5)/5);
    
    cout << name << " your average test score is " << avg << "." << endl;
    
    return 0;
}
