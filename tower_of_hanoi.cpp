#include <iostream>

using namespace std;

void Tower_of_Hanoi(int disk, char first, char mid, char last) {
    if (disk == 1) {
        cout << "Move disk [" << disk << "] from [" << first << "] to destination [" << last << "]" << endl;
    }
    else {
    Tower_of_Hanoi(disk-1, first, last, mid);
    cout << "Move disk [" << disk << "] from [" << first << "] to destination [" << last << "]" << endl;
    Tower_of_Hanoi(disk-1, mid, first, last);
    }
}

int main() {
    int disk;
    cout << "Enter number of disk: ";
    cin >> disk;

    Tower_of_Hanoi(disk, 'A', 'B', 'C');   
}