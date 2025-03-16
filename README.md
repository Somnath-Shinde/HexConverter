# Hexadecimal Data Converter

## Description
The **Hexadecimal Data Converter** is a command-line tool that allows users to convert between different numerical formats such as binary, decimal, hexadecimal, and ASCII. It also supports batch file processing to handle multiple conversions at once.

## Features
- Convert **Binary to Decimal**
- Convert **Binary to Hex**
- Convert **Decimal to Binary**
- Convert **Decimal to Hex**
- Convert **Hex to Decimal**
- Convert **Hex to Binary**
- Convert **ASCII to Hex**
- Convert **Hex to ASCII**
- **Batch File Processing** for bulk conversions
- Compute **Checksum** for error detection

## How to Use
### Running the Program
Compile and run the program using a C++ compiler (e.g., g++ for GCC):

 g++ -o hex_converter hex_converter.cpp
 
 ./hex_converter


### Menu Options
1. **Binary to Decimal** - Enter a binary number (e.g., `1010`) to get its decimal equivalent.
2. **Binary to Hex** - Enter a binary number to get its hexadecimal equivalent.
3. **Decimal to Binary** - Enter a decimal number (e.g., `10`) to get its binary equivalent.
4. **Decimal to Hex** - Enter a decimal number to get its hexadecimal equivalent.
5. **Hex to Decimal** - Enter a hexadecimal number (e.g., `A`) to get its decimal equivalent.
6. **Hex to Binary** - Enter a hexadecimal number to get its binary equivalent.
7. **ASCII to Hex** - Enter an ASCII string to get its hexadecimal representation.
8. **Hex to ASCII** - Enter a hexadecimal string to get its ASCII representation.
9. **Process Batch File** - Provide a filename containing multiple decimal numbers, and the program will convert them into different formats.
10. **Exit** - Terminates the program.

## Batch File Processing
You can provide a text file with multiple decimal numbers, and the program will process them one by one.

### Example File (`input.txt`):
```
65
100
255
```

Run the program and enter `input.txt` when prompted for the filename.

## Example Usage
```
Hexadecimal Data Converter
1. Binary to Decimal
2. Binary to Hex
3. Decimal to Binary
4. Decimal to Hex
5. Hex to Decimal
6. Hex to Binary
7. ASCII to Hex
8. Hex to ASCII
9. Process Batch File
10. Exit
Enter your choice: 3
Enter input: 15
Binary: 00001111
```

## Requirements
- C++ compiler (e.g., GCC, Clang, MSVC)
- Standard C++ Library

## Author
Developed by **Somnath Shinde**

