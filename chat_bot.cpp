#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

// Convert string to lowercase for easier matching
string toLower(string str) {
    transform(str.begin(), str.end(), str.begin(), ::tolower);
    return str;
}

string getResponse(string input) {
    input = toLower(input);

    if (input.find("hello") != string::npos || input.find("hi") != string::npos) {
        return "👋 Hello! How can I help you today?";
    } else if (input.find("how are you") != string::npos) {
        return "😊 I'm just code, but I'm functioning perfectly!";
    } else if (input.find("your name") != string::npos) {
        return "🤖 I'm a simple chat bot created by C++ magic.";
    } else if (input.find("bye") != string::npos || input.find("exit") != string::npos) {
        return "👋 Goodbye! Have a great day!";
    } else if (input.find("love") != string::npos) {
        return "❤️ That's sweet of you!";
    } else {
        return "🤔 I'm not sure how to respond to that.";
    }
}

int main() {
    string userInput;

    cout << "🤖 Welcome to the Chat Simulator Bot!\n";
    cout << "Type 'exit' to end the chat.\n\n";

    while (true) {
        cout << "You: ";
        getline(cin, userInput);

        if (toLower(userInput) == "exit") {
            cout << "Bot: 👋 Goodbye!\n";
            break;
        }

        string response = getResponse(userInput);
        cout << "Bot: " << response << "\n\n";
    }

    return 0;
}
