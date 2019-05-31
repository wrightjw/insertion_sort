#include <iostream>
#include <stdio.h>
#include <vector>
using namespace std;

/* Print vector utility function*/
void print(vector<int> const &input)
{
    for (auto const &i : input)
    {
        cout << i << " ";
    }
}

/* Insertion sort algorithm */
vector<int> insertion(vector<int> to_order)
{
    auto len = to_order.size();

    for (int i = 1; i < len; i++)
    {
        int x = to_order[i];
        int j = i - 1;

        //Moving elements greater than x one unit ahead of current position
        while (j >= 0 && to_order[j] > x)
        {
            to_order[j + 1] = to_order[j];
            j--;
        }
        to_order[j + 1] = x;
    }
    return to_order;
}

int main()
{
    vector<int> order_this_pls{7, 1, 101, 8, -3, 11, 22, -0, 0, 0, 0, 100, 9, 3, 3000, 22, -999, -998};
    vector<int> sorted = insertion(order_this_pls);
    print(sorted);

    return 0;
}