#include <iostream>

#include <cstdio>

#include <ctime>

using namespace std;

// COMPILE ON VISUAL STUDIO EXPRESS 2012 
// we shall use 3x5 matrix for each 
// digit. one column is for space 
// between two digits. so total cols per 
// digit = 3 + 1 = 4 
const int COLS = 4;

const int ROWS = 5;

// any symbol is used as the 
// clock char, you can change 
// it to whatever 
const char CLOCK_CHAR = 'O';

// each digit is made of 5x4 = 20 dots 
// the last column is the spacer 
// empty dots are set as 0, filled 
// dots are set as 1 
// example of how 3 is encoded- 
// 1 1 1 0 
// 0 0 1 0 
// 1 1 1 0 
// 0 0 1 0 
// 1 1 1 0 
// combining: 1110-0010-1110-0010-1110 
const char* const codes [] =
{

  // digit 0 
  "11101010101010101110",
  // digit 1 
  "01000100010001000100",
  // digit 2 
  "11100010111010001110",
  // digit 3 
  "11100010111000101110",
  // digit 4 
  "10101010111000100010",
  // digit 5 
  "11101000111000101110",
  // digit 6 
  "11101000111010101110",
  // digit 7 
  "1110001000100010001",
  // digit 8 
  "11101010111010101110",
  // digit 9 
  "11101010111000100010",
  // semi-colon separator 
  "00000100000001000000"
};

// we have to print HH:MM that will 
// be of 5 digits. so canvas is x 5 
char canvas [ROWS][COLS * 5] = {{0}};

// helper function to store a digit 
// at offset from the left most digit 
void storeDigit(int digit, int offset);

int main()
{

start:
  // get current system time 
  // this is the c library method 
  // for details check documentation 
  time_t t;

  time(&t);

  tm* local = localtime(&t);

  // hour 0-23 
  int hour = local->tm_hour;

  // min 0-59 
  int min = local->tm_min;

  // HOURS TENS at offset 0 
  storeDigit(hour/10, 0);

  // HOURS UNITS at offset 4 
  storeDigit(hour % 10, 4);

  // COLON at offset 8 
  storeDigit(10, 8);

  // MINS TENS at offset 12 
  storeDigit(min/10, 12);

  // MINS UNITS at offset 16 
  storeDigit(min % 10, 16);

  // display the canvas 
  for(int row = 0; row < ROWS; row++)
  {

    for(int col=0; col < COLS * 5;col++)
    {

      printf("%c ", canvas[row][col]);

    }

    cout << endl;

  }

  cout << "updating in 15 seconds...";

  _sleep(15000);

  system("cls");

  goto start;

  return 0;

}

// definition of the function 
// offsets are- 
// HOURS TENS at offset of 0 
// HOURS UNITS at offset of 4 
// COLON at offset of 8 
// MINS TENS at offset of 12 
// MINS UNITS at offset of 16 
void storeDigit(int digit, int offset)
{

  for(int row = 0; row < ROWS; row++)
  {

    for(int col = 0; col < COLS; col++)
    {

      int x = offset + col;

      int y = row;

      int dot = COLS * row + col;

      if('1' == codes [digit][dot])
      {

        canvas[y][x] = CLOCK_CHAR;

      }

    }

  }

}