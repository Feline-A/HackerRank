#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main(){
	string s;
    unsigned long long n;
    cin >> s;
	if (s == "18446744073709551616"){ cout << "YA\n"; }
	else if (s == "0"){ cout << "TIDAK\n"; }
	else{
		n = stoull(s);
		if((n & (n-1)) == 0){
			cout << "YA\n";
		}
		else{
			cout << "TIDAK\n";
		}
	}
    return 0;
}
