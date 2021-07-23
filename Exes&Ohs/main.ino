// C++ trial
#include <iostream>
using namespace seb;
    int main(){
        string word = "xxoo";
        int count = 0;
        size_t npos = word.find('x',0);
        while (npos != string::npos){
            count++;
            npos = s.find('x',npos+1);
        }
        int countO = 0
        size_t O_pos = word.find('o',0);
        while (O_pos != string::O_pos)
        {
            countO++;
            O_pos = s.find('o',O_pos+1);
        }
        
        //Number of occurences of x
        cout << count;
        cout << countO;
        if((count == 0 ),(countO == 0)){
            cout << "Zero appearances in both cases thus equal"
            return true;
        }
        if(count = countO){
            cout "The letters occur equally";
        }else{
            cout << "The letters do not occur equally"
        }
        
        
    };
