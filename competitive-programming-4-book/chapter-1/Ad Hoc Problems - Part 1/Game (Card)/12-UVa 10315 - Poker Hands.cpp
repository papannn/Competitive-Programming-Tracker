#include <bits/stdc++.h>

using namespace std;

unordered_map<char, int> valueCard = {
    {'T', 10},
    {'J', 11},
    {'Q', 12},
    {'K', 13},
    {'A', 14}
};

vector<int> extractValueHand(vector<string>& hand) {
    vector<int> val;
    for (int i = 0; i < hand.size(); i++) {
        if (valueCard.find(hand[i][0]) == valueCard.end()) {
            // cout << hand[i][0] - '0' << endl;
            val.push_back(hand[i][0] - '0');
        } else {
            val.push_back(valueCard[hand[i][0]]);
        }
    }

    sort(val.begin(), val.end());
    return val;
}

int isFlush(vector<string>& hand) {
    char suit = hand[0][1];
    vector<int> valHand = extractValueHand(hand);
    int maxVal = valHand[0];
    
    for (int i = 1; i < hand.size(); i++) {
        if (hand[i][1] != suit) {
            return -1;
        }
        maxVal = max(maxVal, valHand[i]);
    }

    return maxVal;
}

int isStraight(vector<string>& hand) {
    vector<int> val = extractValueHand(hand);
    sort(val.begin(), val.end());

    int prevVal = val[0];
    int maxVal = val[0];
    for (int i = 1; i < val.size(); i++) {
        if (val[i] - 1 != prevVal) {
            return -1;
        }
        maxVal = max(maxVal, val[i]);
        prevVal = val[i];
    }
    return maxVal;
}

int isStraightFlush(vector<string>& hand) {
    int flush = isFlush(hand);

    if (flush == -1) {
        return -1;
    }

    int straight = isStraight(hand);
    return straight;
}

unordered_map<int, int> extractValueCount(vector<string>& hand) {
    vector<int> valHand = extractValueHand(hand);
    unordered_map<int, int> valueCount;

    for (int& val : valHand) {
        // cout << val << endl;
        valueCount[val]++;
    }

    return valueCount;
}

int isFourOfAKind(vector<string>& hand) {
    bool res = false;
    unordered_map<int, int> valueCount = extractValueCount(hand);
    for (auto &i : valueCount) {
        if (i.second == 4) {
            return i.first;
        }
    }
    return -1;
}

int isThreeOfAKind(vector<string>& hand) {
    unordered_map<int, int> valueCount = extractValueCount(hand);
    for (auto &i : valueCount) {
        if (i.second == 3) {
            return i.first;
        }
    }
    return -1;
}

int isPair(vector<string>& hand) {
    unordered_map<int, int> valueCount = extractValueCount(hand);
    for (auto &i : valueCount) {
        // cout << i.first << " " << i.second << endl;
        if (i.second == 2) {
            return i.first;
        }
    }
    return -1;
}

vector<int> isTwoPair(vector<string>& hand) {
    unordered_map<int, int> valueCount = extractValueCount(hand);
    int count = 0;
    vector<int> res;
    for (auto &i : valueCount) {
        if (i.second == 2) {
            count++;
            res.push_back(i.first);
        }
    }
    return res;
}

int main () {
    vector<string> blackHand(5);
    vector<string> whiteHand(5);
    while (cin >> blackHand[0] >> blackHand[1] >> blackHand[2] >> blackHand[3] >> blackHand[4] >> 
    whiteHand[0] >> whiteHand[1] >> whiteHand[2] >> whiteHand[3] >> whiteHand[4]) {
        sort(blackHand.begin(), blackHand.end());
        sort(whiteHand.begin(), whiteHand.end());
        
        // isPair(blackHand);
        // cout << endl << endl;

        int blackScore = 0;
        int whiteScore = 0;
        // Check black
        // Check Straight Flush
        if (isStraightFlush(blackHand) != -1) {
            blackScore = 9;
        } else if (isFourOfAKind(blackHand) != -1) {
            blackScore = 8;
        } else if (isThreeOfAKind(blackHand) != -1 && isPair(blackHand) != -1) { // Full house
            blackScore = 7;
        } else if (isFlush(blackHand) != -1) {
            blackScore = 6;
        } else if (isStraight(blackHand) != -1) {
            blackScore = 5;
        } else if (isThreeOfAKind(blackHand) != -1) {
            blackScore = 4;
        } else if (isTwoPair(blackHand).size() == 2) {
            blackScore = 3;
        } else if (isPair(blackHand) != -1) {
            blackScore = 2;
        } else {
            blackScore = 1;
        }

        if (isStraightFlush(whiteHand) != -1) {
            whiteScore = 9;
        } else if (isFourOfAKind(whiteHand) != -1) {
            whiteScore = 8;
        } else if (isThreeOfAKind(whiteHand) != -1 && isPair(whiteHand) != -1) { // Full house
            whiteScore = 7;
        } else if (isFlush(whiteHand) != -1) {
            whiteScore = 6;
        } else if (isStraight(whiteHand) != -1) {
            whiteScore = 5;
        } else if (isThreeOfAKind(whiteHand) != -1) {
            whiteScore = 4;
        } else if (isTwoPair(whiteHand).size() == 2) {
            whiteScore = 3;
        } else if (isPair(whiteHand) != -1) {
            whiteScore = 2;
        } else {
            whiteScore = 1;
        }

        // cout << "White: " << whiteScore << endl;
        // cout << "Black: " << blackScore << endl;
        if (whiteScore > blackScore) {
            cout << "White wins." << endl;
            continue;
        } else if (whiteScore < blackScore) {
            cout << "Black wins." << endl;
            continue;
        } else {
            
            if (whiteScore == 1) {
                vector<int> valWhite = extractValueHand(whiteHand);
                vector<int> valBlack = extractValueHand(blackHand);
                bool whiteWin = false;
                bool blackWin = false;
                for (int i = valWhite.size() - 1; i >= 0; i--) {
                    if (valWhite[i] > valBlack[i]) {
                        whiteWin = true;
                        break;
                    } else if (valWhite[i] < valBlack[i]) {
                        blackWin = true;
                        break;
                    }
                }

                if (whiteWin) {
                    cout << "White wins." << endl;
                } else if (blackWin) {
                    cout << "Black wins." << endl;
                } else {
                    cout << "Tie." << endl;
                }
            } else if (whiteScore == 2) {

                int pairWhite = isPair(whiteHand);
                int pairBlack = isPair(blackHand);

                if (pairWhite > pairBlack) {
                    cout << "White wins." << endl;
                    continue;
                } else if (pairWhite < pairBlack) {
                    cout << "Black wins." << endl;
                    continue;
                } else {
                    vector<int> tempWhite;
                    vector<int> tempBlack;
                    vector<int> whiteVal = extractValueHand(whiteHand);
                    vector<int> blackVal = extractValueHand(blackHand);
                    for (int i = 0 ; i < whiteVal.size(); i++) {
                        if (whiteVal[i] != pairWhite) {
                            tempWhite.push_back(whiteVal[i]);
                        }
                    }

                    for (int i = 0 ; i < blackVal.size(); i++) {
                        if (blackVal[i] != pairBlack) {
                            tempBlack.push_back(blackVal[i]);
                        }
                    }

                    bool whiteWin = false;
                    bool blackWin = false;
                    for (int i = tempWhite.size() - 1; i >= 0; i--) {
                        if (tempWhite[i] > tempBlack[i]) {
                            whiteWin = true;
                            break;
                        } else if (tempWhite[i] < tempBlack[i]) {
                            blackWin = true;
                            break;
                        }
                    }

                    if (whiteWin) {
                        cout << "White wins." << endl;
                        continue;
                    } else if (blackWin) {
                        cout << "Black wins." << endl;
                        continue;
                    } else {
                        cout << "Tie." << endl;
                        continue;
                    }
                }

            } else if (whiteScore == 3) {
                vector<int> valWhitePair = isTwoPair(whiteHand);
                vector<int> valBlackPair = isTwoPair(blackHand);

                int whiteMax = *max_element(valWhitePair.begin(), valWhitePair.end());
                int blackMax = *max_element(valBlackPair.begin(), valBlackPair.end());

                if (whiteMax > blackMax) {
                    cout << "White wins." << endl;
                    continue;
                } else if (whiteMax < blackMax) {
                    cout << "Black wins." << endl;
                    continue;
                }

                int whiteMin = *min_element(valWhitePair.begin(), valWhitePair.end());
                int blackMin = *min_element(valBlackPair.begin(), valBlackPair.end());
                if (whiteMin > blackMin) {
                    cout << "White wins." << endl;
                    continue;
                } else if (whiteMin < blackMin) {
                    cout << "Black wins." << endl;
                    continue;
                }

                vector<int> whiteVal = extractValueHand(whiteHand);
                vector<int> blackVal = extractValueHand(blackHand);
                int whiteFind;
                for (int i = 0 ; i < whiteVal.size(); i++) {
                    if (whiteVal[i] != whiteMax && whiteVal[i] != whiteMin) {
                        whiteFind = whiteVal[i];
                        break;
                    }
                }

                int blackFind;
                for (int i = 0 ; i < blackVal.size(); i++) {
                    if (blackVal[i] != blackMax && blackVal[i] != blackMax) {
                        blackFind = blackVal[i];
                        break;
                    }
                }

                if (whiteFind > blackFind) {
                    cout << "White wins." << endl;
                    continue;
                } else if (whiteFind < blackFind) {
                    cout << "Black wins." << endl;
                    continue;
                } else {
                    cout << "Tie." << endl;
                    continue;
                }
            } else if (whiteScore == 4) {
                int threeWhite = isThreeOfAKind(whiteHand);
                int threeBlack = isThreeOfAKind(blackHand);

                if (threeWhite > threeBlack) {
                    cout << "White wins." << endl;
                    continue;
                } else if (threeWhite < threeBlack) {
                    cout << "Black wins." << endl;
                    continue;
                }

                vector<int> whiteVal = extractValueHand(whiteHand);
                vector<int> blackVal = extractValueHand(blackHand);
                vector<int> tempWhite;
                vector<int> tempBlack;

                for (int i = 0 ; i < whiteVal.size(); i++) {
                    if (whiteVal[i] != threeWhite) {
                        tempWhite.push_back(whiteVal[i]);
                    }
                }

                for (int i = 0 ; i < blackVal.size(); i++) {
                    if (blackVal[i] != threeBlack) {
                        tempBlack.push_back(blackVal[i]);
                    }
                }

                int whiteMax = *max_element(tempWhite.begin(), tempWhite.end());
                int blackMax = *max_element(tempBlack.begin(), tempBlack.end());
                if (whiteMax > blackMax) {
                    cout << "White wins." << endl;
                    continue;
                } else if (whiteMax < blackMax) {
                    cout << "Black wins." << endl;
                    continue;
                }

                int whiteMin = *min_element(tempWhite.begin(), tempWhite.end());
                int blackMin = *min_element(tempBlack.begin(), tempBlack.end());
                if (whiteMin > blackMin) {
                    cout << "White wins." << endl;
                    continue;
                } else if (whiteMin < blackMin) {
                    cout << "Black wins." << endl;
                    continue;
                } else {
                    cout << "Tie." << endl;
                    continue;
                }
            } else if (whiteScore == 5) {
                int whiteStraight = isStraight(whiteHand);
                int blackStraight = isStraight(blackHand);

                if (whiteStraight > blackStraight) {
                    cout << "White wins." << endl;
                    continue;
                } else if (whiteStraight < blackStraight) {
                    cout << "Black wins." << endl;
                    continue;
                } else {
                    cout << "Tie." << endl;
                    continue;
                }
            } else if (whiteScore == 6) {
                vector<int> tempWhite = extractValueHand(whiteHand);
                vector<int> tempBlack = extractValueHand(blackHand);
                bool whiteWin = false;
                bool blackWin = false;
                for (int i = tempWhite.size() - 1; i >= 0; i--) {
                    if (tempWhite[i] > tempBlack[i]) {
                        whiteWin = true;
                        break;
                    } else if (tempWhite[i] < tempBlack[i]) {
                        blackWin = true;
                        break;
                    }
                }

                if (whiteWin) {
                    cout << "White wins." << endl;
                    continue;
                } else if (blackWin) {
                    cout << "Black wins." << endl;
                    continue;
                } else {
                    cout << "Tie." << endl;
                    continue;
                }
            } else if (whiteScore == 7) {
                int threeWhite = isThreeOfAKind(whiteHand);
                int threeBlack = isThreeOfAKind(blackHand);

                if (threeWhite > threeBlack) {
                    cout << "White wins." << endl;
                    continue;
                } else if (threeWhite < threeBlack) {
                    cout << "Black wins." << endl;
                    continue;
                }

                int pairWhite = isPair(whiteHand);
                int pairBlack = isPair(blackHand);

                if (pairWhite > pairBlack) {
                    cout << "White wins." << endl;
                    continue;
                } else if (pairWhite < pairBlack) {
                    cout << "Black wins." << endl;
                    continue;
                } else {
                    cout << "Tie." << endl;
                    continue;
                }
            } else if (whiteScore == 8) {
                int fourWhite = isFourOfAKind(whiteHand);
                int fourBlack = isFourOfAKind(blackHand);

                if (fourWhite > fourBlack) {
                    cout << "White wins." << endl;
                    continue;
                } else if (fourWhite < fourBlack) {
                    cout << "Black wins." << endl;
                    continue;
                }

                vector<int> whiteVal = extractValueHand(whiteHand);
                vector<int> blackVal = extractValueHand(blackHand);

                int whiteFind;
                for (int i = 0 ; i < whiteVal.size(); i++) {
                    if (whiteVal[i] != fourWhite) {
                        whiteFind = whiteVal[i];
                        break;
                    }
                }

                int blackFind;
                for (int i = 0 ; i < blackVal.size(); i++) {
                    if (blackVal[i] != fourWhite) {
                        blackFind = blackVal[i];
                        break;
                    }
                }

                if (whiteFind > blackFind) {
                    cout << "White wins." << endl;
                    continue;
                } else if (whiteFind < blackFind) {
                    cout << "Black wins." << endl;
                    continue;
                } else {
                    cout << "Tie." << endl;
                    continue;
                }
            } else if (whiteScore == 9) {
                int whiteStraightFlush = isStraightFlush(whiteHand);
                int blackStraightFlush = isStraightFlush(blackHand);

                if (whiteStraightFlush > blackStraightFlush) {
                    cout << "White wins." << endl;
                    continue;
                } else if (whiteStraightFlush < blackStraightFlush) {
                    cout << "Black wins." << endl;
                    continue;
                } else {
                    cout << "Tie." << endl;
                    continue;
                }
            }
        }
    }
}