#include <bits/stdc++.h>

using namespace std;

vector<int> vi;


void quickSort(int start_pos, int end_pos){
    int aux;
    int left = start_pos;
    int right = end_pos;
    int piv = vi[start_pos];

    while(left <= right){

        while(vi[left] < piv) left++;
        while(vi[right] > piv) right--;

        if(left <= right){
            aux = vi[left];
            vi[left] = vi[right];
            vi[right] = aux;
            left++;
            right--;
        }
    }
    if(start_pos < right) quickSort(start_pos, right);
    if(end_pos > left) quickSort(left, end_pos);
}


int main(){

    int n, q, m, qi,cn, cs = 1, ans;
    
    while(true){
        cin >> n >> q;
        if(n == 0 && q == 0) break;
        cn = n;
        while(n--){
            cin >> m;
            vi.push_back(m);
        }
        quickSort(0, cn-1);

        cout << "CASE# " << cs << ":\n";
        for(int i = 0; i < q; i++){
            cin >> qi;
            ans = -1;
            for(int j = 0; j < cn; j++) if(vi[j] == qi){ ans = j+1; break; };
            if(ans ==  -1) cout << qi << " not found\n";
            else cout << qi << " found at " << ans << endl;
        }
        vi.clear();
        cs++;
    }


    return 0;
}

