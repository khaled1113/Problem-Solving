#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    vector<char> output; // Changed variable name from "vector" to "output"

    string input;
    int count = 0;
    int count2 = 0;

    char candy = '?';
    char snow = '*';

    cin >> input;

    for (int i = 0; i < input.length(); i++)
    {
        if (input[i] != candy && input[i] != snow)
        {
            output.push_back(input[i]); // Changed "vector" to "output"
        }
        else if (input[i] == candy)
        {
            count += 1;
            count2 = 0; // Added to reset count2 when candy is found

            if (count == 1)
            {
                input.erase(i - 1, 2); // Changed the erase indices to erase the previous letter and candy
                output.push_back(input[i - 1]); // Push the previous letter to the output vector
            }
            else if (count == 2)
            {
                input.erase(i, 1); // Changed the erase indices to erase the candy
                output.push_back(input[i]); // Push the current character to the output vector
            }
        }
        else if (input[i] == snow)
        {
            count2 += 1;
            count = 0; // Added to reset count when snow is found

            if (count2 == 1)
            {
                input[i - 1] = input[i - 1] * 2; // Double the previous letter
                input.erase(i, 1); // Erase the snow
                output.push_back(input[i - 1]); // Push the doubled letter to the output vector
            }
            else if (count2 == 2)
            {
                input.erase(i - 1, 2); // Changed the erase indices to erase the previous letter and snow
            }
            else if (count2 == 3)
            {
                input.erase(i, 1); // Erase the snow
            }
        }
    }

    // Output the vector
    for (int i = 0; i < output.size(); i++)
    {
        cout << output[i];
    }

    return 0;
}

