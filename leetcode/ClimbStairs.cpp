//
// Created by Fuxin on 2020/6/13.
//
#include <iostream>

using namespace std;

class Solution {
public:
    // 滚动数组，空间复杂度 O(n)
    int climbStairs(int n) {
        if(n <= 0)
            return n;
        int q = 0;
        int p = 1;
        int r = 1;
        for(int i = 2; i <= n; i++){
            q = p;
            p = r;
            r = 0;
            r = q + p;
        }
        return r;
    }
};

int main() {
    Solution s;
    cout << s.climbStairs(1) << endl;
    cout << s.climbStairs(2) << endl;
    cout << s.climbStairs(3) << endl;
    cout << s.climbStairs(4) << endl;
    return 0;
}