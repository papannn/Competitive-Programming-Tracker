#include <iostream>

using namespace std;
int main () {
    long long mosquito, pupae, larvae, eggLaid, larvaSurvivalRate, pupaeSurvivalRate, week;
    
    while (cin >> mosquito >> pupae >> larvae >> eggLaid >> larvaSurvivalRate >> pupaeSurvivalRate >> week) {
        long long egg = 0;
        while (week--) {
            long long eggToday = mosquito * eggLaid;
            mosquito = pupae / pupaeSurvivalRate;
            pupae = larvae / larvaSurvivalRate;
            larvae = egg;
            larvae += eggToday;
        }
        cout << mosquito << endl;
    }
}