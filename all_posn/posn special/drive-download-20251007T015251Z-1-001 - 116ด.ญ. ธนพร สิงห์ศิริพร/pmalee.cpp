#include <bits/stdc++.h>
using namespace std;

int calculateGrundy(int n) {
    return n % 3;  
}

pair<bool, pair<int,int>> findWinningMove(vector<int>& piles) {
    int n = piles.size();

    int xorSum = 0;
    for (int pile : piles)
        xorSum ^= calculateGrundy(pile);

    int pilesGt1 = 0;
    for (int pile : piles)
        if (pile > 1) pilesGt1++;

    if (pilesGt1 == 0) {
        int ones = 0;
        for (int pile : piles)
            if (pile == 1) ones++;

        if (ones % 2 == 0) {
            
            for (int i = 0; i < n; i++) {
                if (piles[i] == 1)
                    return {true, {i + 1, 1}};
            }
        }
        return {false, {-1, -1}}; 
    }


    if (xorSum == 0)
        return {false, {-1, -1}};  


    for (int i = 0; i < n; i++) {
        int pile = piles[i];
        int gCurrent = calculateGrundy(pile);
        int targetG = gCurrent ^ xorSum;

        for (int remove = 1; remove <= 2; remove++) {
            if (pile >= remove) {
                int newPile = pile - remove;
                if (calculateGrundy(newPile) == targetG)
                    return {true, {i + 1, remove}};
            }
        }
    }

    return {false, {-1, -1}}; 
}

int main() {
    int N;
    cin >> N;
    vector<int> piles(N);
    for (int i = 0; i < N; i++)
        cin >> piles[i];

    auto result = findWinningMove(piles);

    if (result.first) {
        cout << "PMalee survived." << endl;
        cout << result.second.first << " " << result.second.second << endl;
    } else {
        cout << "PMalee didn't survive." << endl;
    }

    return 0;
}