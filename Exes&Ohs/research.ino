#include <string>
#include <iostream>

using namespace std;

int main()
{
    string s("hello hello");
    int count = 0;
    size_t nPos = s.find("hello", 0); // first occurrence
    while(nPos != string::npos)
    {
        count++;
        nPos = s.find("hello", nPos + 1);
    }

    cout << count;


    //Substrings

    std::string parentstring = "Hello Agnosticdev, I love Tutorials";
    std::string substring = "Agnosticdev";
    auto index = parentstring.find(substring);

    //If statements
    if ( std::find(vec.begin(), vec.end(), item) != vec.end() )
    do_this();
    else
    do_that();
    
};

