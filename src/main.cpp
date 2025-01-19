#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main()
{
    cout << std::unitbuf;
    cerr << std::unitbuf;

    string command;
    string userInput;

    const string exitCommand = "exit";
    const string echoCommand = "echo";

    while (true)
    {
        cout << "$ ";
        getline(cin, userInput);
        istringstream iss(userInput); // Parse the user input
        iss >> command; // Extract the command

        if (command == exitCommand)
        {
            if (int exitCode = 0; iss >> exitCode && iss.eof())
            {
                return exitCode; // Exit with the exit code 0
            }
            cout << command << ": command not found" << endl;
        }
        else if (command == echoCommand)
        {
            string echoInput;
            getline(iss, echoInput); // Get the rest of the input
            cout << echoInput << endl; // Output
        }
        else
        {
            cout << command << ": command not found" << endl;
        }
    }
}
