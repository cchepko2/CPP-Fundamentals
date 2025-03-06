#include <iostream>

using namespace std;

void changeScore(int &score)
{
    cout << "&score = " << &score << endl;
    score += 7;
}

int main()
{
    int userScore = 30;

    // Write your code below
    int & scoreRef = userScore;

    cout << "scoreRef = " << scoreRef << endl;
    cout << "userScore = " << scoreRef << endl;

    scoreRef = 145;

    cout << "scoreRef = " << scoreRef << endl;
    cout << "userScore = " << scoreRef << endl;

    changeScore(userScore);

    cout << "scoreRef = " << scoreRef << endl;
    cout << "userScore = " << scoreRef << endl;

    cout << "&userScore = " << &userScore << endl;
    cout << "&scoreRef = " << &scoreRef << endl;

    return 0;
}
