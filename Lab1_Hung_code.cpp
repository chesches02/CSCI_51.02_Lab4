#include <cstdlib>
#include <iostream>
#include <string>
#include <cstring>
using namespace std;
int numberFiveFunc(char* x){
        switch(*x) {
            //printf("%s\n", x);
            case 'a':
                *x='b';
                break;
            case 'b':
                *x='c';
                break;
            case 'c':
                *x='d';
                break;
            case 'd':
                *x='e';
                break;
            case 'e':
                *x='f';
                break;
            case 'f':
                *x='g';
                break;
            case 'g':
                *x='h';
                break;
            case 'h':
                *x='i';
                break;
            case 'i':
                *x='j';
                break;
            case 'j':
                *x='k';
                break;
            case 'k':
                *x='l';
                break;
            case 'l':
                *x='m';
                break;
            case 'm':
                *x='n';
                break;
            case 'n':
                *x='o';
                break;
            case 'o':
                *x='p';
                break;
            case 'p':
                *x='q';
                break;
            case 'q':
                *x='r';
                break;
            case 'r':
                *x='s';
                break;
            case 's':
                *x='t';
                break;
            case 't':
                *x='u';
                break;
                case 'u':
                *x='v';
                break;
            case 'v':
                *x='w';
                break;
            case 'w':
                *x='x';
                break;
            case 'x':
                *x='y';
                break;
            case 'y':
                *x='z';
                break;
            case 'z':
                *x='a';
                break;
            case 'A':
                *x='B';
                break;
            case 'B':
                *x='C';
                break;
            case 'C':
                *x='D';
                break;
            case 'D':
                *x='E';
                break;
            case 'E':
                *x='F';
                break;
            case 'F':
                *x='G';
                break;
            case 'G':
                *x='H';
                break;
            case 'H':
                *x='I';
                break;
            case 'I':
                *x='J';
                break;
            case 'J':
                *x='K';
                break;
            case 'K':
                *x='L';
                break;
            case 'L':
                *x='M';
                break;
            case 'M':
                *x='N';
                break;
            case 'N':
                *x='O';
                break;
            case 'O':
                *x='P';
                break;
            case 'P':
                *x='Q';
                break;
            case 'Q':
                *x='R';
                break;
            case 'R':
                *x='S';
                break;
            case 'S':
                *x='T';
                break;
            case 'T':
                *x='U';
                break;
                case 'U':
                *x='V';
                break;
            case 'V':
                *x='W';
                break;
            case 'W':
                *x='X';
                break;
            case 'X':
                *x='Y';
                break;
            case 'Y':
                *x='Z';
                break;
            case 'Z':
                *x='A';
                break;
            default: 
            *x=*x;

            
    }

    //Print the string
    return *x;
}
    

int main(void) {
    string name;
    cin >> name; // cin >> name; CSCI 51.02 ...
    cout << name<<endl;

    const int length = name.length(); 
    char* name_array=new char[length+1];

    //conversion
    strcpy(name_array, name.c_str());

    //prints the first letter and replaces the rest with '#'

    printf("%c", name_array[0]);
    for (int i = 1; i < length; i++) 
    { 
        printf("#");
    } 
    printf("\n");

    //change one letter to next letter 
    //https://www.w3resource.com/cpp-exercises/string/cpp-string-exercise-2.php

    //int location;
    //for(int i=0; i<length;i++){
        //location=int(name_array[i]);
        // Check if the character is 'z', then change it to 'a'
		//if (location == 122)
		//{
		//	name_array[i] = char(97);
		//}
		// Check if the character is 'Z', then change it to 'A'
		//else if (location == 90)
		//{
		//	name_array[i] = char(65);
		//}
		// Check if the character is an uppercase or lowercase letter
		//else if (location >= 65 && location <= 90 || location >= 97 && location <= 122)
		//{
		//	name_array[i] = char(location + 1); // Change to the next character in the ASCII sequence
		//}
        //printf("%c",name_array[i]);

        for( int i =  0; i < name.length(); i++  ) // for strings
        {    
            numberFiveFunc(&name_array[i] );      // you  can change the function  name
            //NOTE:  this function  DOES NOT print anything
        }
        cout  << name_array << endl;
            return 0;
    }




