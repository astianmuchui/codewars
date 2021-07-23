#include<iostream>
#include <string>
using namespace std;
int main(){
    string word = "test";
    int length = word.length();
    if(length%2 == 0){
        int half = length/2;
        int start_point = half-1;
        int end_point = half;
        cout << word.substr(start_point,end_point+1);

    }else{
        float half = length/2;
        int char_pos = round(half);
        int start_point = char_pos-1;
        int end_point = length-char_pos;
        cout << word.substr(start_point,end_point);

    }

}