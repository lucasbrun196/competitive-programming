#include <iostream>

using namespace std;

int main(){
    int n, t, l, ap = 0, bp = 0, v, dif;
    cin >> n >> t >> l;
    n--;
    while (n != 0){
        cin >> v;
        dif = abs(v-t);
        if(dif <= l){
            t = v;
            if(n%2==0)ap+=dif;
            else bp+=dif;
        }
        n--;
    }
    cout << ap << " " << bp << endl;
    return 0;
}