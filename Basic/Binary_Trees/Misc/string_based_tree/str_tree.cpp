#include <iostream>
#include <queue>
using namespace std;

class node
{
public:
    int data;
    node *left;
    node *right;

    node(int d)
    {
        data = d;
        left = NULL;
        right = NULL;
    }
};

node *build(string s)
{
    if (s == "true")
    {
        int d;
        cin >> d;
        node *root = new node(d);
        string l;
        cin >> l;
        if (l == "true")
        {
            root->left = build(l);
        }
        string r;
        cin >> r;
        if (r == "true")
        {
            root->right = build(r);
        }
        return root;
    }
    return NULL;
}

pair<int,bool> isHeightBalancedOptimised(node *root)
{
    // Write your code here
    if(root == NULL){
        std::pair<int, bool> p = std::make_pair(0,true);
    }

    std::pair<int, bool> l = isHeightBalancedOptimised(root->left);
    std::pair<int, bool> r = isHeightBalancedOptimised(root->right);
    
    std::pair<int, bool> p;
    p.first = std::max(l.first, r.first) + 1;
    if(std::abs(l.first - r.first) <=1 && l.second && r.second) p.second = true;
    else p.second = false;
    
    return p;
}

int main()
{
    node *root = build("true");

    cout << boolalpha << isHeightBalancedOptimised(root).second;

    return 0;
}

