#include<iostream>
using namespace seb;
    int main(){
        int n = 8;
        int m = 64;
        int multiple = n*m;
        if(multiple<1){
            cout << "No chocolate to split"; 
        }else{
            int num_squares = multiple/1;
            int num_breaks = num_squares-1;
            cout << num_breaks + "Breaks required";
        }
    }