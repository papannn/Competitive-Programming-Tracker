#include <iostream>
#include <vector>
#include <string>
#include <set>
// #include <

using namespace std;
int main () {
    int t;
    cin >> t;
    while (t--) {
        long long n, x;
        cin >> n >> x;
        string binary = "";
        int copyX = x;
        int countOne = 0;
        set<long long> set1;
        while (x > 0) {
            int bit = x % 2;
            // binary = (char) ('0' + bit) + "" + binary;
            binary.insert(0, 1, '0' + bit);
            countOne += bit;
            x /= 2;
        }

        
        // cout << binary << endl;
        // if (countOne == 1) {
        //     cout << copyX << endl;
        //     continue;
        // }
        // cout << n << endl;
        // cout << countOne << endl;
        // cout << binary << endl;
        // cout << copyX << endl;
        // cout << endl;
        string zeroBinary = "";
        for (int i = 0 ; i < binary.size(); i++) {
            zeroBinary += '0';
        }
        vector<string> binaryList;
        binaryList.push_back(zeroBinary);
        vector<string> lib;
        lib.push_back(zeroBinary);
        set1.insert(0);
        for (int i = 0 ; i < countOne; i++) {
            int counter = 0;
            string temp = "";
            for (int j = 0 ; j < binary.length(); j++) {
                if (binary[j] == '0') {
                    temp += binary[j];
                    continue;
                }

                if (binary[j] == '1') {
                    if (counter == i) {
                        temp += '1';
                    } else {
                        temp += '0';
                    }
                    counter++;
                }
            }
            
            set1.insert(stoi(temp, nullptr, 2));
            lib.push_back(temp);
            binaryList.push_back(temp);
        }


        // for (int i = 0 ; i < binaryList.size(); i++) {
        //     cout << stoi(binaryList[i], nullptr, 2) << " ";
        //     // cout << binaryList[i] << endl;
        //     // cout << "YO" << endl;
        // }

        // while (set1.size())

        if (binaryList.size() > n) {
            while (binaryList.size() > n) {
                string s1 = binaryList[binaryList.size() - 1];
                binaryList.pop_back();
                string s2 = binaryList[binaryList.size() - 1];
                binaryList.pop_back();
                string temp = "";
                for (int i = 0 ; i < s1.size(); i++) {
                    if (s1[i] == '1' || s2[i] == '1') {
                        temp += '1';
                    } else {
                        temp += '0';
                    }
                }
                binaryList.push_back(temp);
            }

        // for (int i = 0 ; i < binaryList.size(); i++) {
        //     cout << binaryList[i] << endl;
        // }
        
            // int ptr = lib.size() - 1;
            // while (binaryList.size() < n) {
            //     if (ptr == 0) {
            //         binaryList.push_back(binary);
            //         continue;
            //     }
            //     string s1 = lib[ptr];
            //     string s2 = lib[ptr - 1];
            //     // string s1 = binaryList[ptr];
            //     // string s2 = binaryList[ptr - 1];
            //     string temp = "";
            //     for (int i = 0 ; i < s1.size(); i++) {
            //         if (s1[i] == '1' || s2[i] == '1') {
            //             temp += '1';
            //         } else {
            //             temp += '0';
            //         }
            //     }
            //     binaryList.push_back(temp);
            //     ptr--;
            // }
            // cout << "SINI" << endl;
            for (int i = 0 ; i < binaryList.size(); i++) {
                cout << stoi(binaryList[i], nullptr, 2) << " ";
                // cout << binaryList[i] << endl;
                // cout << "YO" << endl;
            }
            cout << endl;
            
            continue;
        }
        
        int ptr = 0;
        while (set1.size() < n) {
            auto it = set1.upper_bound(0);
            auto it1 = set1.upper_bound(*++it);
            set1.insert(*it | *it1);
            ptr = *it1;
        }
        for (int val : set1) {
            cout << val << " ";
        }
        cout << endl;
        // for (int i = 0 ; i < lib.size(); i++) {
        //     cout << stoi(lib[i], nullptr, 2) << " ";
        // }
        
    }    
}