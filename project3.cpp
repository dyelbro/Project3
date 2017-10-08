//Header and Libraries
#include <cmath>
#include <iostream>
#include <limits>
using namespace std;

/*           PROJECT 3
             October 5, 2017

   This project calculates the approximate value of pi
   for n iterations, where n is the user input.
*/


int main()
{
        //Declarations
        char ans; //loop input
        int n; //number of iterations
        double pi, sum; //pi, and summation total

        //Initiate loop
        do
        {
                //Input
                cout << "Enter the number of terms in the approximation: ";
                while (!(cin >> n) || (n < 0)) //Checks for valid input and loops
                {
                        cout << "Incorrect input. Please enter a non-negative integer: "; //Error message
                        cin.clear(); //Clear bad n
                        cin.ignore(numeric_limits<streamsize>::max(), '\n'); //Ignores rest of line until return
                }

                //Initialize variables
                pi = 0;
                sum = 0;

                //Calculations
                for (int i = 0; i < n; i++)
                {
                        sum += pow(-1,i) / (2 * i + 1);
                }

                pi = 4 * sum; //Multiply everything by 4 after summation is done

                //Output
                cout << "After " << n << " terms, pi is approximately " << pi << endl;

                cout << "Do you wish to repeat calculations for different values? (y/n): ";
                cin >> ans;

        } while (toupper(ans) == 'Y'); //change y to Y and loop if Y

}
