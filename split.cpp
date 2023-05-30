#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

vector<string> split(string str, char delimeter){
    vector<string> output;
    string token;

    for(char i : str){
        if(i==delimeter){
            output.push_back(token);
            token.clear();
        }else{
            token.push_back(i);
        }
    }
    output.push_back(token);
    
    return output;
}