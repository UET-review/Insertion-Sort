#include <iostream>
#include <fstream>

using namespace std;

void print(int a[], int n){
    for(int i = 0; i < n; i++){
        cout << a[i] << " ";
    }
    cout << endl;
}

int main(){
    ifstream infile("input.txt");
    int n;
    int a[1000];
    infile >> n;
    for(int i = 0; i < n; i++){
        infile >> a[i];
    }
    print(a, n);
    infile.close();
    return 0;
}