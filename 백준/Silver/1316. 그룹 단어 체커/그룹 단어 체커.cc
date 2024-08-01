#include <iostream>
#include <string>

using namespace std;

int main() {
    
    int num;
    
    cin >> num;
    int cnt = num;
    bool chk = true;
    
    for(int i=0; i<num; i++){
        string s;
        cin >> s;
        int len = s.length();
        
        chk = true;
        
        for(int j=0; j<len-1; j++){
            for(int k=j+1; k<len; k++){
                if((s[j] != s[k-1]) && (s[j]==s[k])) {
                    cnt--;
                    chk = false;
                    break;
                }
            }
            if(chk == false){
                break;
            }
        }
    }
    
    cout << cnt;
    
    return 0;
}