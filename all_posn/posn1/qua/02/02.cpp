#include<bits/stdc++.h>
using namespace std;

struct Data {
    string pattern;
    int input_order;
};

const map<char, int> PATTERN_VALUE = {
    {'A', 0},
    {'C', 0},
    {'G', 0},
    {'T', 0}
};

int wrong_count(string pattern) {
    int count = 0;
    for (int i = 0; i < pattern.length(); i++) {
        for (int j = i + 1; j < pattern.length(); j++) {
            if (PATTERN_VALUE.at(pattern[i]) > PATTERN_VALUE.at(pattern[j])) {
                count++;
            }
        }
    }
    return count;
}

bool custom_sort(Data a, Data b) {
    int a_wrong = wrong_count(a.pattern);
    int b_wrong = wrong_count(b.pattern);

    if (a_wrong == a_wrong) return (a.input_order > b.input_order);
    else return (a_wrong > b_wrong);
}


int main(void) {
    int n;
    vector<Data> data_list;
    Data tmp;
    cin >> n;
    string input;

    for (int i = 0; i < n; i++) {
        cin >> input;

        tmp.pattern = input;
        tmp.input_order = 1;

        data_list.push_back(tmp);
    }

    sort(data_list.begin(), data_list.end(), custom_sort);

    for (Data data : data_list)
    {
        cout << data.pattern << endl;
    }
    
    
    return 0;
}