#include <iostream>
#include <string>

using namespace std;

bool matchesRegex(const string& input);

int main() 
{
    string input;
    cout << "Input a DNA Sequence: ";
    cin >> input;

    if (matchesRegex(input))
        cout << "The pattern " << input << " is valid for RE (TT + G)* (A + T)" << endl;
    else
        cout << "The pattern " << input << " is not valid for RE (TT + G)* (A + T)" << endl;

    return 0;
}

bool matchesRegex(const string& input) 
{
    bool hasRE = true;
    for (size_t i = 0; i < input.length(); i++) 
    {
        if (input[i] == 'G' && i == input.length() - 1) 
        {
            hasRE = false;
            break;
        }
        else if ((input[i] == 'A' || input[i] == 'T') && i == input.length() - 1)
            break;
        else if (input[i] == 'T' && i < input.length() - 1) 
        {
            if (input[i + 1] == 'T' && i == input.length() - 1) 
            {
                hasRE = false;
                break;
            }
            if (input[i + 1] != 'T') 
            {
                hasRE = false;
                break;
            }
            else
                i += 1;
        }
    }
    return hasRE;
}
