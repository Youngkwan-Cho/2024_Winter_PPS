#include <iostream>
#include <vector>
 
#define endl "\n"
using namespace std;
 
int Arr[10];
bool Flag;
bool Select[10];
vector<int> V;
 
void Input()
{
    for (int i = 0; i < 9; i++) cin >> Arr[i];
}
 
void DFS(int Idx, int Cnt, int Sum)
{
    if (Sum > 100) return;
    if (Cnt == 7 && Sum == 100)
    {
        for (int i = 0; i < V.size(); i++)    cout << Arr[V[i]] << endl;
        exit(0);
    }
 
    for (int i = Idx; i < 9; i++)
    {
        if (Select[i] == true) continue;
        Select[i] = true;
        V.push_back(i);
        DFS(i, Cnt + 1, Sum + Arr[i]);
        V.pop_back();
        Select[i] = false;
    }
}
 
void Solution()
{
    DFS(0, 0, 0);
}
 
void Solve()
{
    Input();
    Solution();
}
 
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
 
    //freopen("Input.txt", "r", stdin);
    Solve();
 
    return 0;
}
