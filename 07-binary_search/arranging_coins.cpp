#include <iostream>
#include <vector>
#include<math.h>
using namespace std;
int arrangeCoins_m1(int n)
{
    int count = 0;

    for (int i = 1; i <= n; i++)
    {
        if ((n - i) >= 0)
        {
            n = n - i;
            count++;
        }
        else
        {
            break;
        }
    }
    return count;
}
int arrangeCoins_m2(int n) {
        int low = 1;
        int high = n;
        while(low<=high){
            int mid = low+(high-low)/2;
            long long sum = (1LL * mid * (mid + 1)) / 2;
            if(sum>n){
                high = mid -1;
            }
            else{
                low = mid + 1;
            }
        }
        return high;
}

int arrangeCoins_m3(int n){
    return (sqrt(1 + 8LL * n) - 1) / 2;
}

int main()
{
    int n = 5;
    cout << arrangeCoins_m1(n) << endl;
    cout << arrangeCoins_m2(n) << endl;
    cout << arrangeCoins_m3(n) << endl;
}
