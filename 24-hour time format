
Q.) Write the largest possible time(24-hour format) for the given 4-digit number.

#include <bits/stdc++.h>

using namespace std;

void bubble_sort(int arr[], int n) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3 - i; j++) {
            if (arr[j] > arr[j + 1]) swap(arr[j], arr[j + 1]);
        }
    }
}

int main() {

    // taking input from user and expressing it as an array 

    int n;
    cin >> n;
    int b = n;
    int a=n;
    int l;
    int c = 4;
    int arr[c];
    int f1;
    int f2;
    int f3;
    int f4;
    int cnt;
    for (int k = 0; k < 4; k++) {
        l = b % 10;
        b = b / 10;
        arr[c - k - 1] = l;
    }
    for (int i = 0; i < c; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // getting the first digit of the time and saving it as arr[0]

    bubble_sort(arr, 4);
    if (arr[2]<=5) {
        int m = 0;
        for (int i = 0; i < c; i++) {
            if (arr[i] == 2) {
                swap(arr[0], arr[i]);
                f1=arr[0];
                m++;
                break;
            }
        }
        if (m == 0) {
            for (int i = 0; i < c; i++) {
                if (arr[i] == 1) {
                    f1= arr[i];
                    swap(arr[0], arr[i]);
                    m++;
                    break;
                }
            }
        }
        if (m == 0) {
            for (int i = 0; i < c; i++) {
                if (arr[i] == 0) {
                    f1= arr[i];
                    swap(arr[0], arr[i]);
                    break;
                }
            }
        }

        // getting the maximum of the rest of the digits 

        int max = arr[1];
        int j;
        int s = 0;
        for (j = 1; j < c; j++) {
            if (arr[j] >= max) {
                max = arr[j];
                s = j;
            }
        }

        // if the first digit of time is 1 or 0 then the next digit will be the largest of the rest


        if (arr[0] < 2) {
            swap(arr[s], arr[1]);
            f2= max;
        }

        // (DID MISTAKE IN THIS STEP) if the first digit is 2 then the next digit will be the digit just less than or equal to 3 

        if (arr[0] == 2) {
            int second=0;
            for (int i = 1; i < c; i++) {
                if (arr[i] <= 3) {
                    if (arr[i] >= second) {
                        second = arr[i];
                        swap(arr[i], arr[1]);
                    }

                }
            }
            f2 = second ;
        }

        // third and fourth digit extraction 

        int max2 = arr[2];
        int d;
        int w = 0;
        for (d = 2; d < c; d++) {
            if (arr[d] >= max2) {
                max2 = arr[d];
                w = d;
            }
        }
        if (max2 > 5) {
            swap(arr[w], arr[3]);
            arr[3] = max2;
            f3=arr[2]; f4= arr[3];
        }
        else {
            swap(arr[2], arr[w]);
            f3=arr[2];f4=  arr[3];
        }
    }
    else {
        if(arr[1]>1){
            f1=arr[0];f2=arr[3];f3=arr[1];f4=arr[2];
        }
        else if(arr[1]<=1){
            f1=arr[1];f2=arr[3];f3=arr[0];f4=arr[2];
        }
    }
    if(f1<=2 && f3<=5){
        cout<<f1<<f2<<":"<<f3<<f4;
    }
    else if (f1>2 || f3>5){
        cout<<"invalid input";
    }
    
    
    

}
