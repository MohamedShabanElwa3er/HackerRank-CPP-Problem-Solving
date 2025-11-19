#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'timeConversion' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string timeConversion(string s) 
{
    int hh = std::stoi(s.substr(0,2),nullptr,10);
    std::string mmss = s.substr(2,6);
    if(s.find("AM")!=std::string::npos)
    {
        if(hh==12) 
            hh=0;
    }
    else 
    {
        if(hh!=12)
            hh+=12;
    }
    std::stringstream ret ;
    ret << std::setw(2)<<std::setfill('0')<<hh<<mmss;
    return ret.str();
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
