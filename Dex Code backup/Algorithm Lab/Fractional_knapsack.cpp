#include <iostream>
#include <vector>
#include <algorithm>
// #include <bits/stdc++.h>//
using namespace std;
struct Item
{
    int value;
    int weight;
    float ratio;
    int index;
};

bool compareItems(Item a, Item b);                                  // for sorting
float fractionalKnapsack(int capacity, vector<Item> &items, int n); // main

int main()
{
    int n;
    cout << "Enter the number of items: ";
    cin >> n;

    vector<Item> items(n);
    cout << "Enter the value and weight for each item:" << endl;
    for (int i = 0; i < n; ++i)
    {
        cout << "Item " << i + 1 << " - Value: ";
        cin >> items[i].value;
        cout << "Item " << i + 1 << " - Weight: ";
        cin >> items[i].weight;
        items[i].ratio = (float)items[i].value / items[i].weight;
        items[i].index = i;
    }

    int capacity;
    cout << "Enter the knapsack capacity: ";
    cin >> capacity;

    float maxValue = fractionalKnapsack(capacity, items, n);

    cout << "Maximum value in the knapsack = " << fixed << maxValue << endl;

    return 0;
}
float fractionalKnapsack(int capacity, vector<Item> &items, int n)
{
    sort(items.begin(), items.end(), compareItems);

    float totalValue = 0.0;
    int currentWeight = 0;

    for (int i = 0; i < n; i++)
    {
        if (currentWeight + items[i].weight <= capacity)
        {
            currentWeight += items[i].weight;
            totalValue += items[i].value;
        }
        else
        {
            int remainingCapacity = capacity - currentWeight;
            totalValue += items[i].ratio * remainingCapacity;
            currentWeight = capacity;
            break;
        }
    }

    return totalValue;
}
bool compareItems(Item a, Item b)

{
    return a.ratio > b.ratio;
}