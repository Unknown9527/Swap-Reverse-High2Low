#include "solution.h"
#include <string>
// #include <algorithm>

//Swap TEST to ETST
string Solution::SwapZeroOne(string s, int i, int j){
    // return s+ to_string(a)+ to_string(b);
    swap(s[i], s[j]);
    return s;
}

//Reverse EE599 to 995EE
string Solution::ReverseString(string s1){
    // return s+ to_string(a)+ to_string(b);
    int StringSize = s1.size();
    int i = 0;
    int j = StringSize - 1;

    for (i = 0; i < j; i++, j--)
    {
        swap(s1[i], s1[j]);
    }

    // swap(s1[0], s1[4]);
    // swap(s1[1], s1[3]);
    // return to_string(StringSize);
    return s1;
}

//Covert EE599 to ee599
string Solution::UpToLow(string s2){

    transform(s2.begin(), s2.end(), s2.begin(), ::tolower);
    return s2;
}


