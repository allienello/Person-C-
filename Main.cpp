/***********************************
 * Program 01
 * Written by Allie Ianello
 ***********************************/ 

#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
using namespace std;

#include "Person.h"

#define PERSON_MAX  10

/*********************************
 * Main 
 *********************************/
void main()
{
    int i, n;
    string fname;
    fstream f;
    person map[PERSON_MAX];

    // Get file name

    cout << "Enter file name: ";
    cin >> fname;

    // Open file

    f.open(fname, ios::in);
    if (!f.is_open()) return;

    // Read from file

    n = 0;
    while (n < PERSON_MAX && !f.eof())  // Loop until end of array or file
    {
        if (map[n].get(f))           // Use the return value of get
            n++;                      // to test for valid input
    };

    // Close file

    f.close();

    // Sort array

    person x; 

    for (i = 0; i < n; i++)
    {
        for (int y = 0; y < n - 1; y++)
        {
            if (map[y] > map[y + 1])
            {
                x = map[y];
                map[y] = map[y + 1];
                map[y + 1] = x;
            }
        }
    }

    // Display contents of array

    cout << "Last          " << "First     " << "Age" << endl;
    cout << "------------  --------  ---" << endl;
    for (i = 0; i < n; i++)
    {
        map[i].put(cout);
        cout << endl;
    };

}

 