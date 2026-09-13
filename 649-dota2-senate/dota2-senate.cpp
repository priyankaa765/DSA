class Solution {
public:
    string predictPartyVictory(string senate) {
    queue<int> radiant, dire;
    int n = senate.length();

    // 1. Fixed line 9: correct lower-case 'i' indexing
    for (int i = 0; i < n; i++) {
        if (senate[i] == 'R') {
            radiant.push(i);
        } else {
            dire.push(i);
        }
    }

    // 2. Process rounds: pop front elements and append +n to winner
    while (!radiant.empty() && !dire.empty()) {
        int r_idx = radiant.front(); radiant.pop();
        int d_idx = dire.front();    dire.pop();

        if (r_idx < d_idx) {
            radiant.push(r_idx + n);
        } else {
            dire.push(d_idx + n);
        }
    }

    return radiant.empty() ? "Dire" : "Radiant";
}    
};