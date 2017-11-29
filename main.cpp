/** Sean Gurr
 *  C00221886
 *  Ex. 2
 *  Factorial Calculator
 *  20/09/2017
 */

/**< preprocessor directives */
#include <iostream>

using namespace std;


/**< main() function */
int main()
{
    /**< variable declarations*/
    int num, factorial = 1;

    /**< Purpose of code */
    cout << "Factorial Calculator" << endl;
    /**< Prompt user to enter a value and read in value*/
    cout << "\nEnter a number to find it's factorial: ";
    cin>> num;

    /**< For loop criteria and calculate result and display */
    for (int i=1; i<=num; i++)
    {
        factorial=factorial*i;
    }
    cout << "\nThe factorial of " << num << " = " << factorial << endl;
    return 0;
}
