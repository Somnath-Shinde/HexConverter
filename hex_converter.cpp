#include <iostream>
#include <sstream>
#include <bitset>
#include <vector>
#include <iomanip>
#include <cstdlib>  
#include <fstream>  

using namespace std;

int binaryToDecimal(const string &binary) {
    return strtol(binary.c_str(), nullptr, 2);
}

string binaryToHex(const string &binary) {
    stringstream ss;
    ss << hex << uppercase << setw(2) << setfill('0') << binaryToDecimal(binary);
    return ss.str();
}

string decimalToBinary(int decimal) {
    return bitset<8>(decimal).to_string();
}
string decimalToHex(int decimal) {
    stringstream ss;
    ss << hex << uppercase << decimal;
    return ss.str();
}

int hexToDecimal(const string &hex) {
    return strtol(hex.c_str(), nullptr, 16);
}

string hexToBinary(const string &hex) {
    return bitset<8>(hexToDecimal(hex)).to_string();
}

string asciiToHex(const string &ascii) {
    stringstream ss;
    for (char ch : ascii) {
        ss << hex << uppercase << setw(2) << setfill('0') << static_cast<int>(ch);
    }
    return ss.str();
}

string hexToAscii(const string &hex) {
    stringstream ss;
    for (size_t i = 0; i < hex.length(); i += 2) {
        string byte = hex.substr(i, 2);
        char ch = static_cast<char>(strtol(byte.c_str(), nullptr, 16));
        ss << ch;
    }
    return ss.str();
}
char calculateChecksum(const string &data) {
    char checksum = 0;
    for (char ch : data) {
        checksum ^= ch;
    }
    return checksum;
}

void processFile(const string &filename) {
    ifstream file(filename);
    if (!file.is_open()) {
        cerr << "Error opening file!" << endl;
        return;
    }

    string line;
    while (getline(file, line)) {
        try {
            int number = stoi(line);
            cout << "Original: " << line << endl;
            cout << "Binary: " << decimalToBinary(number) << endl;
            cout << "Hex: " << decimalToHex(number) << endl;
            cout << "ASCII: " << static_cast<char>(number) << endl;
            cout << "Checksum: " << hex << static_cast<int>(calculateChecksum(line)) << endl;
        } catch (const invalid_argument &e) {
            cerr << "Invalid input: " << line << " (Skipping...)" << endl;
        }
        cout << "--------------------" << endl;
    }
    file.close();
}

int main() {
    int choice;
    string input;
    
    while (true) {
        cout << "Hexadecimal Data Converter" << endl;
        cout << "1. Binary to Decimal" << endl;
        cout << "2. Binary to Hex" << endl;
        cout << "3. Decimal to Binary" << endl;
        cout << "4. Decimal to Hex" << endl;
        cout << "5. Hex to Decimal" << endl;
        cout << "6. Hex to Binary" << endl;
        cout << "7. ASCII to Hex" << endl;
        cout << "8. Hex to ASCII" << endl;
        cout << "9. Process Batch File" << endl;
        cout << "10. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        
        if (choice == 10) break;

        if (choice == 9) {
            cout << "Enter filename: ";
            string filename;
            cin >> filename;
            processFile(filename);
            continue;
        }

        cout << "Enter input: ";
        cin >> input;
        
        switch (choice) {
            case 1:
                cout << "Decimal: " << binaryToDecimal(input) << endl;
                break;
            case 2:
                cout << "Hex: " << binaryToHex(input) << endl;
                break;
            case 3:
                cout << "Binary: " << decimalToBinary(stoi(input)) << endl;
                break;
            case 4:
                cout << "Hex: " << decimalToHex(stoi(input)) << endl;
                break;
            case 5:
                cout << "Decimal: " << hexToDecimal(input) << endl;
                break;
            case 6:
                cout << "Binary: " << hexToBinary(input) << endl;
                break;
            case 7:
                cout << "Hex: " << asciiToHex(input) << endl;
                break;
            case 8:
                cout << "ASCII: " << hexToAscii(input) << endl;
                break;
            default:
                cout << "Invalid choice!" << endl;
        }
        cout << "----------------------" << endl;
    }
    return 0;
}
