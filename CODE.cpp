#include <iostream>
using namespace std;

int main() {    //start of the program
    char asterisk;  //input of asterisk
    const char letterO = 'O'; // "const char" provides the ability for the character's to not be changed. (Applies to all)
    const char equalSign = '=';
    const char backSlash = '\\';
    const char forwardSlash = '/';
    const char hyphen = '-';
    
    asterisk = ‘*‘; // asterisk is assigned to it's pointer (*)
    // the output output's a tree drawing
    cout << ' '<< ' ' << ' ' << asterisk << ' ' << ' ' << ' '<< endl; //' ' mean spaces in the codeline
    cout << ' ' <<  ' ' << asterisk << asterisk << asterisk << ' ' << ' ' << endl; // endl; creates a newline
    cout << ' ' << asterisk <<  asterisk << asterisk << asterisk << asterisk << ' ' << endl; //asterisk is going to show "*" in the executer
    cout << asterisk << asterisk << asterisk << asterisk << asterisk << asterisk << asterisk << endl ; 
    cout << ' ' << ' ' << asterisk << asterisk << asterisk << ' ' << ' '<< endl;
// double space to seperate the two drawings
    cout << endl;
    cout << endl;
// outputs the drawing of a cat
    cout << forwardSlash << backSlash << ' ' << forwardSlash << backSlash << endl;
    cout << ' ' << letterO << ' ' << letterO << ' ' << endl;
    cout << ' ' << equalSign << ' ' << equalSign << ' ' << endl;
    cout << ' ' << hyphen << hyphen << hyphen << ' ' << endl;
    
    
    
    // end of the program
    return 0;
}

