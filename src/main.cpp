#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main()
{
    cout << std::unitbuf;
    cerr << std::unitbuf;

    string command;
    string input;
    int exitCode;

    const string exitCommand = "exit";
    const string echoCommand = "echo";

    while (true)
    {
        cout << "$ ";
        getline(cin, input);
        istringstream iss(input); // Parse the command and the exit code
        iss >> command >> exitCode; // as string and integer

        if (input.find(exitCommand) == 0 && iss.eof())
        {
            if (command == exitCommand && exitCode == 0)
            {
                return exitCode;
            }
        }
        std::cout << input << ": command not found" << std::endl;
    }
}
