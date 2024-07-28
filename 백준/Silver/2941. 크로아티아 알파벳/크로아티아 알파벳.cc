#include <iostream>

using namespace std;

int main() {
    char arr[101] = {};
    int cnt = 0;
    cin >> arr;
    
    for(int i=0; i<100; i++){
        if(arr[i] == 'c' && arr[i+1] == '='){
            cnt ++;
            i++;
        }
        else if(arr[i] == 'c' && arr[i+1] == '-'){
            cnt ++;
            i++;
        }
        else if(arr[i] == 'd' && arr[i+1] == 'z' && arr[i+2] == '='){
            cnt ++;
            i+=2;
        }
        else if(arr[i] == 'd' && arr[i+1] == '-'){
            cnt ++;
            i++;
        }
        else if(arr[i] == 'l' && arr[i+1] == 'j'){
            cnt ++;
            i++;
        }
        else if(arr[i] == 'n' && arr[i+1] == 'j'){
            cnt ++;
            i++;
        }
        else if(arr[i] == 's' && arr[i+1] == '='){
            cnt ++;
            i++;
        }
        else if(arr[i] == 'z' && arr[i+1] == '='){
            cnt ++;
            i++;
        }
        else if(arr[i] != '\0') cnt ++;
    }
    
    cout << cnt;
    
    return 0;
}