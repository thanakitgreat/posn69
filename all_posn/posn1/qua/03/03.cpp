#include<bits/stdc++.h>
using namespace std;

struct Product {
    int id;
    int start_date;
    int units;
};


int main(void) {
    int n, input[3], today = 0;
    Product tmp;
    vector<Product> product_list;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> input[0] >> input[1] >> input[2];

        tmp.id = input[0];
        tmp.start_date = input[1];
        tmp.units = input[2];

        product_list.push_back(tmp);
    }
    
    while (product_list.empty() == false)
    {
        if (product_list[0].start_date > today) {
            cout << today << " : - : -" << endl;
            today++;
            continue;
        }

        cout << today << " : " << product_list[0].id << " : " << product_list[0].units << endl;
        product_list[0].units -= 1;

        if (product_list[0].units == 0) {
            product_list.erase(product_list.begin());
        }

        for (int i = 1; i < product_list.size(); i++)
        {
            if (product_list[i].start_date <= product_list[0].start_date + product_list[0].units) {
                product_list[i].start_date++;
            }
        }
        

        today++;
    }
    
    
    return 0;
}