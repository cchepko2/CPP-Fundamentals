/*
Author: Corin Chepko
Date: 9/25/24
Program Info: Kattis problem 
    - https://open.kattis.com/problems/chocolatedivisionhttps://open.kattis.com/problems/chocolatedivision
Algoithm Steps:
    input rows and columns
    ???
    profit
*/

#include <iostream>

using namespace std;

string solution(int, int);

int main(void)
{
    int rows, columns;
    string answer;

    cerr << "cerr is ok for kattis...\n";
    cerr << "Please enter the rows and columns: ";

    cin >> rows >> columns;

    answer = solution(rows, columns);

    cout << answer << endl;

    return 0;
}

string solution(int rows, int columns)
{
    string answer;

    if( (rows*columns)%2 == 0 )
    {
        answer = "Alf";
    }
    else{
        answer = "Beata";
    }

    return answer;
}