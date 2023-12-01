#include <iostream>
#include <fstream>
using namespace std;
int main(){
    ifstream input("input.txt");
    if(input.is_open()){
    string line;
    int sum = 0;
    while(getline(input,line)){
        string characterInt = "";
        for(unsigned long i = 0; i < line.length();i++){
            char currenctChar = line.c_str()[i];
            if(isdigit(currenctChar)){
                characterInt += currenctChar;
            }
        }
        if(characterInt.length() > 1)
        {
            string neededNumber = "";
            neededNumber += characterInt[0];
            neededNumber += characterInt[characterInt.length()-1];
            int number = stoi(neededNumber);
            sum += number;
        }
        else
        {
            string doubledNumber = characterInt + characterInt;
            sum += stoi(doubledNumber);
        }
    }
    printf("Sum: %i",sum);
    input.close();
    }
    return 0;
}
