#include<iostream>

using namespace std;

int main()  {

    long int n, temp, i;
    int sum[100000];
    long long int div_check=0;
    cin >> n;

    for(i=0; i<n/2; i++)  {
        cin >> temp;
        if (temp >= 0 && temp < 10) {
            sum[i] = temp;
        }
        else if (temp >=10 && temp < 100)   {
            sum[i] = temp / 10;
        }
        else if (temp >=100 && temp < 1000)   {
            sum[i] = temp / 100;
        }
        else if (temp >=1000 && temp < 10000)   {
            sum[i] = temp / 1000;
        }
        else if (temp >=10000 && temp < 100000)   {
            sum[i] = temp / 10000;
        }
        else if (temp >=100000 && temp < 1000000)   {
            sum[i] = temp / 100000;
        }
    }

    for(i = n/2; i<n; i++)  {
        cin >> temp;
        sum[i] = temp % 10;
        cout<<sum[i];
    }

    for(i=0; i<n; i+=2)  {
        //cout << sum[i] << "\t";
        div_check = div_check + sum[i] - sum[i+1];
    }
    /*
    if(div_check % 11)  {
        cout << "NON" << endl;
    }
    else 
        cout << "OUI" << endl;

     */
    return 0;
}