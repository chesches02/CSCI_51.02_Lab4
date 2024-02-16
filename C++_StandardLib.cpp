#include <iostream>
#include <string>
using namespace std;

//White Spaces
//What happens if you input "I like spaces"?
using namespace std;
int main( void )
{
    string s;
    cout << "Input a string: ";
    cin >> s;
    cout << "You typed: " << s << endl;
    return 0;
}

 

//What happens if we change cin to getline( )?
/*int main( void )
{
    string s;
    cout << "Input a string: ";
    getline( cin, s );
    cout << "You typed: " << s << endl;
    return 0;
}*/

 

//Let's try to cool and do the old school, C.

/*int main( void )
{
    char s[80]; // limit of 80 characters
    cout << "Input a string: ";
    scanf( "%s", s );
    printf( "You typed: %s\n", s );
    return 0;
}*/

//What happens if we change scanf to fgets( )?
/*int main( void )
{
    char s[80]; // limit of 80 characters
    cout << "Input a string: ";
    fgets( s, 80, stdin );
    printf( "You typed: %s", s );
    return 0;
}*/

 

//The table below lists the differences between getline( ) and fgets( ).
//getline( ) 	fgets( )
//accepts a string 	accepts a character array
//does not include the newline character '\n' in the string 	includes the newline character '\n' in the string

 

//Parsing Data

//Say that we are expecting an input sequence with data type int, char, then float.

/*int main( void )
{
    int i; char c; float f;
    cin >> i >> c >> f;
    cout << "Read: " << i << " " << c;
    cout << " " << f << endl;
    // couldn't fit the whole line :P
    return 0;
}*/

 

//The next sample code shows why old-school is cool, now in C.
/*int main( void )
{
    int i; char c; float f;
    scanf( "%d %c %f", &i, &c, &f );
    printf( "Read: %d %c %f\n", i, c, f );
    return 0;
}*/

 

//The scanf will read an integer value, char value and float value that the user enters on the keyboard which are denoted by %d (decimal), %c (char) and %f (float), respectively.  i, c and f must therefore be declared as int, char and float, respectively.  Same goes for printf. Let's have a closer look at scanf in the sample code below.

/*int main( void )
{
    int i, j;
    cout << "Enter 2 integers separated by a space: ";
    int ret = scanf( "%d %d", &i, &j );
    cout << "scanf() returned: " << ret << endl;
    cout << "Checking i: " << i << endl;
    cout << "Checking j: " << j << endl;
    return 0;
}*/