#include <iostream>
#include <fstream>

using namespace std;

int main(){
    //create and open a text file
    ofstream MyFile("myfile.txt");

    //close the file
    MyFile.close();

    return 0;
}
