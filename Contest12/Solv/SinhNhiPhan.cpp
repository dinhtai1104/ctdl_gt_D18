#include<iostream>
using namespace std;

/*
    Quy tắc:
    - 0000...
    - 0101011
    -> 0101100
    - 11111
    - Duyệt từ phải qua trái tìm số 0 đầu tiên (1) (i = cuối)
    - Chuyển số đó thành 1
    - Đưa tất các số sau đó = 0
    - Nếu (1) không tìm thấy ( i==0) return;
*/

int main() {
    int n; // độ dài n
    cin>>n;
    int a[10];
    for (int i=1;i<=n;i++) a[i]=0;
    while(1) {
        int i=n;
        while(i >= 1 && a[i]==1) i--;
    }

}