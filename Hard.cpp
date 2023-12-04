#include <bits/stdc++.h>
using namespace std;
int main() {
    int num;
    cin>>num;
     int ret = 0;
      for(long long int i = 1; i <= num; i*= (long long int)10){
         int a = num / i;
         int b = num % i;
         int m = a % 10;
         if(m ==1){
            ret += (a / 10) * i + (b + 1);
         }
         else if(m == 0){
            ret += (a / 10) * i;
         } else {
            ret += (a / 10 + 1) *i;
         }
      }
      cout<<ret;

    return 0;
}
