#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<string> questions{"Do yhou have the gil to join the guild?", "Can you hold more than 500lbs?", "Can you one shot goblins?", "Are you a virgin?", "Are you above lv 40"};
    string name;
    int score = 0;
    char answer = ' ';

    cout << "type y for yes and n for no" << endl << endl;
    cout << "Welcome you dirty Scum" << endl << endl;

    cout << "Passing score is 3, anything under is a fail" << endl;

    cout << "what is your name?" << endl;
    cin >> name;

    for (int i = 0; i < questions.size(); i++) {
        cout << questions[i] << endl;
        cin >> answer;

        if (answer == 'y') {
            score = score + 1;
        }
        else if (answer == 'n') {
            score = score - 1;
        }
        else {
            cout << "ughh thats not an answer" << endl;
            cin >> answer;
        }
    }
    
    if (score >= 3) {
        cout << "huh you passed? thats not right." << endl << "score: " << score << endl;
    }
    else {
        cout << "HHAHAHAHHAHHAHA FUCKING LOSER" << endl << "score: " << score << endl;
    }
   
    cin.ignore().get();
    return 0;
}
