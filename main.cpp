#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

vector<string> split(string str, char delimeter);

int main(){
    vector<string> list;
    ifstream file;
    string str;

    file.open("input.txt");
    file>>str;
    list=split(str,',');

    for (string i : list)
        cout<<i<<endl;

    return 0;
}