#include <bits/stdc++.h>
using namespace std;

int fun(int a[]){
    cout<<a[0]<<" ";
}

void swap(char *x, char *y){
    char *t = x;
    x = y;
    y = t;
}

void Q(int z){
    z += z;
    cout<<z<<" ";
}

void P(int *y){
    int x = *y + 2;
    Q(x);
    *y = x - 1;
    cout<<x<<" ";
}


int main()
{
    // float f = 10.5;
    // float p = 2.5;
    // float *ptr = &f;
    // (*ptr)++;
    // *ptr = p;
    // cout<<*ptr<<" "<<f<<" "<<p<<endl;

    // int a = 7;
    // int b = 17;
    // int *c = &b;
    //     *c = 7;

    // cout<<a<<" "<<b<<endl;

    // int *p = 0;
    // int a = 10;
    // *p = a;

    // int m = 7;
    // int *n = &m;
    // n = n + 3;
    // cout<<n<<endl;

    // int arr[] = {1, 2, 3, 4};
    // cout << *(arr) << " " << *(arr+1)<<endl;

    // int arr2[3] = {1, 2, 3};
    // cout << *(arr2 + 2)<<endl;

    // int arr2[] = {1, 2, 3};
    // int *p = arr2++;
    // cout<<*p<<endl;

    // int arr[] = {4,5,6,7};
    // int *p = (arr+1);
    // cout<<*arr + 9<<endl;

    // char s[] = "hello";
    // char *p = s;
    // cout << s[0] << " " << p[0];

    // char arr[20];
    // int i;
    // for (i = 0; i < 10; i++)
    // {
    //     *(arr+i) = 65 + i;
    // }

    // *(arr + i) = '\0';
    // cout<<arr;

    // char *ptr;
    // char str[] = "abcdefg";
    // ptr = str;
    // ptr += 5;
    // cout<<ptr;
    
    // char st[] = "ABCD";
    // for (int i = 0; st[i] != '\0'; i++)
    // {
    //     cout<<st[i]<<*(st)+i<<i[st];
    // }

    // int a[] = {1,2,3,4};
    // fun(a+1);
    // cout<<a[0];

    // char *x = "geeksquiz";
    // char *y = "geeksforgeeks";
    // char *t;
    // swap(x,y);
    // cout<<x<<' '<<y;
    // t = x;
    // x = y;
    // y = t;
    // cout<<x<<" "<<y;
    // return 0;

    // int x = 5;
    // P(&x);
    // cout<<x<<" "; 

    int a = 10;
    int *p = &a;
    int **q = &p;
    int b = 20;
    *q = &b;
    (*p)++;
    cout<<a<<" "<<b<<endl;

    return 0;
}