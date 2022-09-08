#include <iostream>
#include <fstream>

using namespace std;

void print(int a[], int n){
    for(int i = 0; i < n; i++){
        cout << a[i] << " ";
    }
    cout << endl;
}

void insertion_sort(int a[], int n){
    for(int i = 1; i < n; i++){
        int mark = a[i];
        int j = i - 1;
        while(j >= 0 && mark < a[j]){
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = mark;
    }
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
    // Insertion sort
    insertion_sort(a, n);
    print(a, n);
    infile.close();
    return 0;
}