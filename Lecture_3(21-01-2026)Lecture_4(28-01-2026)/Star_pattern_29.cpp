# include <iostream>
using namespace std;

int main()
{
    int n=5;

    for(int i = 1 ; i <= n ; i++){
        for(int j = 1 ; j <= n - i ; j++){
            cout<<"   ";
        }
        for(int j = 1 ; j <= i ; j++){
            if(j == 1 ){
                cout<<" "<<j+i-1<<" ";
            }else{
                cout<<" 0 ";
            }
        }
        for(int j = 2 ; j <= i ; j++){
            if(j == i){
                cout<<" "<<j<<" ";
            }else{
                cout<<" 0 ";
            }
        }
        cout<<endl;
    }
}
