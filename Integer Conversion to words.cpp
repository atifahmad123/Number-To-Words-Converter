#include<iostream>
using namespace std;

int main() {
    int integer;
    cout << "\nWe can convert your integer value to words." << endl;
    cout << "\nEnter an integer between the range of 1 and 90: ";
    cin >> integer;

    if (integer >= 1 && integer <= 90) {
        if (integer <= 9) {
            switch (integer) {
                case 1:
                    cout << integer << " in words is: One" << endl;
                    break;
                case 2:
                    cout << integer << " in words is: Two" << endl;
                    break;
                case 3:
                    cout << integer << " in words is: Three" << endl;
                    break;
                case 4:
                    cout << integer << " in words is: Four" << endl;
                    break;
                case 5:
                    cout << integer << " in words is: Five" << endl;
                    break;
                case 6:
                    cout << integer << " in words is: Six" << endl;
                    break;
                case 7:
                    cout << integer << " in words is: Seven" << endl;
                    break;
                case 8:
                    cout << integer << " in words is: Eight" << endl;
                    break;
                case 9:
                    cout << integer << " in words is: Nine" << endl;
                    break;
            }
        } else {
            int tens = integer / 10;
            int ones = integer % 10;

            switch (tens) {
                case 1:
                    switch (integer) {
                        case 10:
                            cout << integer << " in words is: Ten" << endl;
                            break;
                        case 11:
                            cout << integer << " in words is: Eleven" << endl;
                            break;
                        case 12:
                            cout << integer << " in words is: Twelve" << endl;
                            break;
                        case 13:
                            cout << integer << " in words is: Thirteen" << endl;
                            break;
                        case 14:
                            cout << integer << " in words is: Fourteen" << endl;
                            break;
                        case 15:
                            cout << integer << " in words is: Fifteen" << endl;
                            break;
                        case 16:
                            cout << integer << " in words is: Sixteen" << endl;
                            break;
                        case 17:
                            cout << integer << " in words is: Seventeen" << endl;
                            break;
                        case 18:
                            cout << integer << " in words is: Eighteen" << endl;
                            break;
                        case 19:
                            cout << integer << " in words is: Nineteen" << endl;
                            break;
                    }
                    break;
                case 2:
                    cout << "Twenty";
                    break;
                case 3:
                    cout << "Thirty";
                    break;
                case 4:
                    cout << "Forty";
                    break;
                case 5:
                    cout << "Fifty";
                    break;
                case 6:
                    cout << "Sixty";
                    break;
                case 7:
                    cout << "Seventy";
                    break;
                case 8:
                    cout << "Eighty";
                    break;
                case 9:
                    cout << "Ninety";
                    break;
            }

            if (tens != 1 && ones != 0) {
                cout << " ";
            }

            if (ones != 0 && tens != 1) {
                switch (ones) {
                    case 1:
                        cout << "One";
                        break;
                    case 2:
                        cout << "Two";
                        break;
                    case 3:
                        cout << "Three";
                        break;
                    case 4:
                        cout << "Four";
                        break;
                    case 5:
                        cout << "Five";
                        break;
                    case 6:
                        cout << "Six";
                        break;
                    case 7:
                        cout << "Seven";
                        break;
                    case 8:
                        cout << "Eight";
                        break;
                    case 9:
                        cout << "Nine";
                        break;
                }
            }

            if (integer != 10 && integer != 11 && integer != 12 && integer != 13 && integer != 14 && integer != 15 && integer != 16 && integer != 17 && integer != 18 && integer != 19) {
                cout << " in words" << endl;
            }
        }
    } else {
        cout << "Number out of range." << endl;
    }

    return 0;
}