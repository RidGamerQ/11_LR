#include <iostream>
using namespace std;

int main()
{
    char nazva;
    cout << "\n Enter the first letter of the country from the list: Ukraine, America, Poland, Turkey, Sweden: ";
    cin >> nazva;
    if (nazva == 'U')
    {
        cout << "\n Ukraine: population - 44 million, number of cities - 272";
    }
    else if (nazva == 'A')
    {
        cout << "\n America: population - 332 million, number of cities - 30000";
    }
    else if (nazva == 'P')
    {
        cout << "\n Poland: population - 38 million, number of cities - 964";
    }
    else if (nazva == 'T')
    {
        cout << "\n Turkey: population - 85 million, number of cities - 200";
    }
    else if (nazva == 'S')
    {
        cout << "\n Sweden: population - 10.5 million, number of cities - 96";
    }
    else if (nazva == 'G')
    {
        cout << "\n Germany: population - 83 million, number of cities - 2054";
    }
    else if (nazva == 'B')
    {
        cout << "\n Bulgaria: population - 7 million, number of cities - 96";
    }

    else
    {
        cout << "\n You entered an incorrect letter, please enter a capital letter U, A, P, T, S, G, or B!";
    }



}