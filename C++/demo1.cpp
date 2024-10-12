#include <iostream>

#include <cstdio>

#include <cmath>

using namespace std;

int main()
{

  const double PI = 3.14;

  double angle;

  cout << "Angle in degree?:";

  cin >> angle;

  // convert to radians 
  double radians = (PI * angle)/180.0;

  // prepare the canvas 
  const int DIMEN = 24;

  // fill the canvas with NULLs 
  char canvas [DIMEN][DIMEN] = {{0}};

  for(int row = 0; row < DIMEN; row++)
  {

    for(int col = 0; col < DIMEN; col++)
    {

      // origin is at the center, 
      // so obtain the x and y coord- 
      //-inates of each element with
      // respect to the middle 
      double x = col - DIMEN/2;

      double y = DIMEN/2 - row;

      if(y < 0)
      {

        continue;

      }

      // equation to be plotted: y = mx 
      // y = x tanθ 
      double eqn = y - x * tan(radians);

      // select all those points that 
      // satisfy the above line, 
      // tolerance of ±0.75 so that 
      // more points can be shown 
      // and also select all 
      // those as lie on the "horizontal 
      // arm" of the angle towards 
      // the +x side 
      if(
      (abs(eqn) <= 0.75)
      ||
      ((0 == y) && (x >= 0)
      )
      )
      {

        canvas[row][col] = '*';

      }

    }

  }

  // print 
  for(int row = 0; row < DIMEN; row++)
  {

    for(int col = 0; col < DIMEN; col++)
    {

      // THERE IS A SPACE AFTER %c 
      // ... done for nicer looks 
      printf("%c ", canvas[row][col]);

    }

    cout << endl;

  }

  printf("Angle: %0.2f degree\n",angle);

  return 0;

}