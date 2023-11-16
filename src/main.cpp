#include <iostream>
#include <cstdlib>
#include "spotify/spotify.h"
#include "curl/curl.h"
using namespace std;

int main() {
    const char* clientId = getenv("CLIENT_ID");
    if (clientId != nullptr) {
        cout << "Client ID: " << clientId << endl;
    } else {
        cout << " Client ID not set in environment" << endl;
    }

	cout << "env imported\n";
	cout << "Hello again\n";
	spotifyFunction(); // Now you can call the function
    return 0;
}

