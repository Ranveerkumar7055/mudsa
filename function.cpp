#include <iostream>
using namespace std;

void printDiamond(int rows) {
    for (int currentRow = 1; currentRow <= rows; currentRow++) {
        for (int space = currentRow; space < rows; space++) {
            cout << " ";
        }
        for (int star = 1; star <= (2 * currentRow - 1); star++) {
            cout << "*";
        }
        cout << endl;
    }

    for (int currentRow = rows - 1; currentRow >= 1; currentRow--) {
        for (int space = rows; space > currentRow; space--) {
            cout << " ";
        }
        for (int star = 1; star <= (2 * currentRow - 1); star++) {
            cout << "*";
        }
        cout << endl;
    }
}

int main() {
    int rows;
    cout << "Enter the number of rows: ";
    cin >> rows;

    if (rows <= 0) {
        cout << "Rows must be greater than 0." << endl;
        return 1;
    }

    printDiamond(rows);
    return 0;
}