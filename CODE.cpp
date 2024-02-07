#include <iostream>
using namespace std;

int main() {
    char asterisk;  
    const char letterO = 'O'; 
    const char equalSign = '=';
    const char backSlash = '\\';
    const char forwardSlash = '/';
    const char hyphen = '-';
    
    asterisk = ‘*‘;
    
    cout << ' '<< ' ' << ' ' << asterisk << ' ' << ' ' << ' '<< endl;
    cout << ' ' <<  ' ' << asterisk << asterisk << asterisk << ' ' << ' ' << endl;
    cout << ' ' << asterisk <<  asterisk << asterisk << asterisk << asterisk << ' ' << endl;
    cout << asterisk << asterisk << asterisk << asterisk << asterisk << asterisk << asterisk << endl ; 
    cout << ' ' << ' ' << asterisk << asterisk << asterisk << ' ' << ' '<< endl;

    cout << endl;
    cout << endl;

    cout << forwardSlash << backSlash << ' ' << forwardSlash << backSlash << endl;
    cout << ' ' << letterO << ' ' << letterO << ' ' << endl;
    cout << ' ' << equalSign << ' ' << equalSign << ' ' << endl;
    cout << ' ' << hyphen << hyphen << hyphen << ' ' << endl;
    
    
    
    
    return 0;
}

