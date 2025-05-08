#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>

using namespace std;
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr;
        while (n--) {
            int num;
            cin >> num;
            arr.push_back(num);
        }
        
        unordered_map<int, int> map;
        for (int i = 0 ; i < arr.size(); i++) {
            if (map.find(arr[i]) == map.end()) {
                map[arr[i]] = 1;
            } else {
                map[arr[i]]++;
            }
        }

        int firstScore = arr.size() - map.size();
        
        int left = 0;
        int right = arr.size() - 1;
        
        int resLeft;
        int resRight;

        int maxScore = -1;
        while (left <= right) {
            int size = arr.size() - (right + 1) + left;
            int score = size == 0 ? 0 : size - map.size();
            
            if (score > maxScore) {
                resLeft = left;
                resRight = right;
                maxScore = score;
            }

            if (set.find(arr[left]) != set.end()) {
                set.insert(arr[left]);
                left++;
            } else {
                set.insert(arr[right]);
                right--;
            }
        }

        left = 0;
        right = arr.size() - 1;
        set.clear();

        if (firstScore <= maxScore) {
            cout << resLeft + 1 << " " << resRight + 1 << endl;
        } else {
            cout << 0 << endl;
        }

    }
}