#include <bits/stdc++.h>

using namespace std;

int main(){
    int t, p, n;
    double mat[50][5], m, m2,ac, ans;
    scanf("%d", &t);
    while(t--){
        scanf("%d %d", &p, &n);
        for(int i = 0; i < n; i++) for(int j = 0; j < p; j++) scanf("%lf", &mat[i][j]);
        for(int i = 0; i < n; i++){
            m=0.0;ac =0.0;m2=0.0;
            for(int j = 0; j < p; j++){
                m = max(mat[i][j], m);
                if(mat[i][j] < 7.0)m2 = max(m2, mat[i][j]); 
                ac += mat[i][j];
            }
            ac /= p;
            if(ac >= 7.0) ans = m;
            else if(ac >= 4 && ac < m2) ans = m2;
            else ans = ac;
            printf("%.2lf\n", ans);
        }
    }
    return 0;
}