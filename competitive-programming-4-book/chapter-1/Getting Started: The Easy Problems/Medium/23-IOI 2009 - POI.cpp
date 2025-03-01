#include <bits/stdc++.h>

using namespace std;

class Contestant {
public:
    int id;
    int solvedProblem = 0;
    int score;
    vector<int> problems;

    Contestant() {}

    bool operator<(const Contestant& obj) const {
        if (this->score < obj.score) {
            return true;
        }

        if (this->score > obj.score) {
            return false;
        }

        if (this->score == obj.score) {

            if (solvedProblem < obj.solvedProblem) {
                return true;
            }

            if (solvedProblem > obj.solvedProblem) {
                return false;
            }
        }
        return id > obj.id;
    }
};

int main () {
    int contestants, task, philip;
    cin >> contestants >> task >> philip;
    vector<Contestant> contestantArr;
    vector<int> scoreTask(task);

    int id = 1;
    while (contestants--) {
        Contestant contestant;
        for (int i = 0 ; i < task; i++) {
            int solved;
            cin >> solved;

            contestant.id = id;
            contestant.problems.push_back(solved);
            contestant.solvedProblem += solved;

            scoreTask[i] += !solved;
        }

        contestantArr.push_back(contestant);
        id++;
    }

    for (int i = 0 ; i < contestantArr.size(); i++) {
        int score = 0;
        for (int j = 0 ; j < contestantArr[i].problems.size(); j++) {
            if (contestantArr[i].problems[j] == 1) {
                score += scoreTask[j];
            }
        }
        contestantArr[i].score = score;
    }
    
    sort(contestantArr.begin(), contestantArr.end());
    int rank = 1;
    for (int i = contestantArr.size() - 1 ; i >= 0; i--) {
        if (contestantArr[i].id == philip) {
            cout << contestantArr[i].score << " " << rank << endl;
            break;
        }
        rank++;
    }
}