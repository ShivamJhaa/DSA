#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    double myPow(double x, int n) {
        double result = 1.0;
        
        long long nn = n;
        if(n<0){
            nn = -nn;
        }

        while(nn){
            if(nn % 2){
                result = result * x;
                nn--;
            }
            else
            {
              x= x*x;
              nn = nn/2;
            }

        }
        if (n < 0) result = (double)(1.0) / (double)(result);
          return result;
    }
};