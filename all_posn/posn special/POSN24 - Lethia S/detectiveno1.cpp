#include <bits/stdc++.h>
using namespace std;

int main() {
    int rank, type, amount, prime, max[3] = {0,0,0};
    int map[4][3] = {
        {0, 0, 0},
        {0, 0, 0},
        {0, 0, 0},
        {0, 0, 0}
    };
    while(rank!=0) {
        cin >> rank;
        if (!rank) break;
        cin >> type >> amount;
        if (rank<=5 && type<=6) {
            if (rank==1||rank==2) rank=3;
            else if (rank==3||rank==4) rank=2;
            else if (rank==5) rank=1;
            switch (type) {
            case 4: type=1; break;
            case 5: type=2; break;
            case 6: type=3; break;
            }
            map[rank-1][type-1]+=amount;
        } else {
            prime = 0;
            if (type<2) map[3][1]+=amount;
            else {
                for (int i=1;i<=type;i++) {
                    if (type%i==0) prime++;
                    if (prime>2) break;
                }
                if (prime==2) map[3][0]+=amount;
                else map[3][1]+=amount;
            }
        }
    }
    for (int i=0;i<3;i++) {
        for (int j=0;j<4;j++) {
            if (map[j][i]>max[i]) max[i]=map[j][i];
        }
    }
    for (int i=0;i<3;i++) {
        cout << 3-i << " - ";
        for (int j=0;j<3;j++) {
            cout << '|';
            if (map[i][j]) {
                if ((to_string(map[i][j])).length()<(to_string(max[j])).length()) {
                    for (int o=0;o<(to_string(max[j])).length()-(to_string(map[i][j])).length();o++) {
                        cout << 0;
                    }
                }
                cout << map[i][j];
            }
            else {
                for (int x=0;x<(to_string(max[j])).length();x++) cout << 'X';
            }
            cout << "| ";
        }
        cout << '\n';
    }
    if (map[3][0]!=0 || map[3][1]!=0) {
        cout << "0 - ";
        for (int i=0;i<2;i++) {
            cout << '|';
            if ((to_string(map[3][i])).length()<(to_string(max[i])).length()) {
                for (int o=0;o<(to_string(max[i])).length()-(to_string(map[3][i])).length();o++) {
                    cout << 0;
                }
            }
            cout << map[3][i] << "| ";
        }
    }
    
    return 0;
}