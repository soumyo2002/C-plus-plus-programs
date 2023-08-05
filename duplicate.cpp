#include<iostream>
using namespace std;
bool getBit(int n, int pos) {
int temp=(n & (1<<pos));
cout<<"Test  "<<(pos+1)<<" "<<temp<<endl<<endl;
return ((n & (1 << pos)) != 0);
}
int setBit( int n, int pos) {
return (n | (1 << pos));
}
int unique(int a[], int n) {
int result = 0;
for (int i = 0; i < 6; i++) {
int sum = 0;
for (int j = 0; j < n; j++) {
if (getBit(a[j], i)) {
sum++;
}
}
if (sum % 3 != 0) {
result = setBit(result, i);
}
}
return result;
}
int main() {
int arr[] = {1, 3, 2, 3, 4, 2, 1, 1, 3, 2};
cout << unique(arr, 10) << endl;
return 0;
}