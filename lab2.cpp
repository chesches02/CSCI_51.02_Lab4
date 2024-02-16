#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
using namespace std;
int main() {
//reads the first number and stores it as an integer, this is how many Agents there are
string myText;
ifstream MyReadFile("filename.txt");
std::string line1;
std::getline(MyReadFile,line1);
std::stringstream line1stream(line1);
int N;
line1stream>>N;

//reads all the other lines

// Use a while loop together with the getline() function to read the file line by line
int i=1;
while (getline (MyReadFile, myText)) {
    std::string allotherlines;
    std::getline(MyReadFile,allotherlines);
    std::stringstream line2stream(allotherlines);
    int X;
    int Y;
    string word;

    line1stream>>X>>Y>>word;
  // Output the text from the file
    cout << "Agent#"<<i<<"is at"<<"("<<X<<","<<Y<<")";
    cout<<"Says: "<<word;
    i++;
}
// Close the file
MyReadFile.close(); 

}