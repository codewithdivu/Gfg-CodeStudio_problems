#include <utility>

pair<char, int> averageMarks(char firstLetterOfName, int m1, int m2, int m3) {
    // Write your code here.

//     AverageMarks.first = firstLetterOfName
//     AverageMarks.second = (m1+m2+m3)/3;
    int average = (m1+m2+m3)/3;
    
    return {firstLetterOfName,average};
}
