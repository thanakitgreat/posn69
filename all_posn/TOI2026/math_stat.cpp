#include <bits/stdc++.h>
using namespace std;

typedef long long L;
typedef double D;

void printer(string a,double b){
    cout << a << " : " << b << "\n";
}

D median_cal(vector<D> a, L b){
    if (b % 2 == 0){
        return ((a[b/2] + a[b/2 - 1])/2);
    }else{
        return a[(b-1)/2];
    }
}

D sd_pop_cal(vector<D> a,D b,L c){
    D sd_sum = 0;
    for(L i = 0 ; i < c ; i++){
        sd_sum += pow((b - a[i]),2);
    }
    D sd = sqrt(sd_sum/c);
    return sd;
}

D sd_sam_cal(vector<D> a,D b,L c){
    D sd_sum = 0;
    for(L i = 0 ; i < c ; i++){
        sd_sum += pow((b - a[i]),2);
    }
    D sd = sqrt(sd_sum/(c-1));
    return sd;
}

L dec_place(L a){
    cout << fixed << setprecision(a);
}

int main(){

    L cases;
    D test,sum = 0;
    vector<D> testcase;

    cout << "Number of Cases: ";
    cin >> cases;
    cout << "Input Cases:" << "\n";
    for(L i = 0 ; i < cases ; i++){
        cin >> test;
        sum += test;
        testcase.push_back(test);
    }
    sort(testcase.begin(),testcase.end());
    D range = testcase[cases-1] - testcase[0];
    D mean = sum/cases;
    D median = median_cal(testcase,cases);
    D sd_pop = sd_pop_cal(testcase,mean,cases);
    D sd_sample = sd_sam_cal(testcase,mean,cases);
    dec_place(3);
    printer("Sum",sum);
    printer("Range",range);
    printer("Mean/Average",mean);
    printer("Median",median);
    printer("SD Population",sd_pop);
    printer("SD Sample",sd_sample);
    printer("Min Value",testcase[0]);
    printer("Max Value",testcase[cases-1]);
}