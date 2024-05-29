#include <iostream>
#include <fstream>

using namespace std;

int main() {
    
    ifstream cin("virgule.in");
    ofstream cout("virgule.out");

    int num;
    int num_ant = -1;
    while (cin >> num) {
        if (num > num_ant) {
            if (num_ant != -1) {
                cout << ',';
            }
            cout << num;
        } else {
            cout << num;
        }
        num_ant = num;
    }
    cin.close();
    cout.close();
    return 0;
}
