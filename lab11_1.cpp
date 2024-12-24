// cout << "Press Enter 3 times to reveal your future.";
// cout << "You will get A in this 261102.";

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    cout << "Press Enter 3 times to reveal your future." << endl;
    int enter = 0;
    while (enter < 3) {
        getchar();
        enter++;
    }
    
    srand(time(0));
    int grade = rand() % 9;
    string grades[] = {"A", "B+", "B", "C+", "C", "D+", "D", "F", "W"};
    cout << "You will get " << grades[grade] << " in this 261102." << endl;

    return 0;
}
