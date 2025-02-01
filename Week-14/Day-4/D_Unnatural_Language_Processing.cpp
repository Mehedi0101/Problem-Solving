#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    for(int i = 0; i < t; i++){
        int l;
        cin >> l;
        char sentence[l] = {'0'};
        for(int j = 0; j < l; j++){
            cin >> sentence[j];
        }

        for(int j = 0; j < l; j++){
            if(j == 0){
                cout << sentence[j];
            }
            else if(sentence[j] == 'a' || sentence[j] == 'e'){
                if((sentence[j+2] == 'b' || sentence[j+2] == 'c' || sentence[j+2] == 'd') && j < l-3){
                        cout << sentence[j] << sentence[j+1] << ".";
                        j++;
                        continue;
                }
                else if((sentence[j+1] == 'b' || sentence[j+1] == 'c' || sentence[j+1] == 'd') && j < l-2){
                        cout << sentence[j] << ".";
                }
                else{
                    cout << sentence[j];
                }
            }
            else{
                cout << sentence[j];
            }
        }
        cout << endl;
    }
    return 0;
}