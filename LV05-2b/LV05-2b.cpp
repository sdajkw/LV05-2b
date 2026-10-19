//Benjamin Jan Perhoč, 2.b 

#include <iostream>
using namespace std;

int prvaPunionica(int slobodno[], int n, int K) {
    for (int i = 0; i < n; i++) {
        if (slobodno[i] >= K)
            return i;
    }
    return -1;
}

int prviSkok(int signal[], int n, int D) {
    for (int i = 1; i < n; i++) {
        if (abs(signal[i] - signal[i - 1]) > D)
            return i;
    }
    return -1;
}

int najboljiKoridor(int teren[][4], int brojRedaka, int D) {
    int najbolji = -1;
    int najmanjaRazlika = D + 1;

    for (int i = 0; i < brojRedaka; i++) {
        int min = teren[i][0];
        int max = teren[i][0];

        for (int j = 1; j < 4; j++) {
            if (teren[i][j] < min)
                min = teren[i][j];

            if (teren[i][j] > max)
                max = teren[i][j];
        }

        int razlika = max - min;

        if (razlika <= D && razlika < najmanjaRazlika) {
            najmanjaRazlika = razlika;
            najbolji = i;
        }
    }

    return najbolji;
}

int main() {
    /*int slobodno[100];
    int n, K;

    cin >> n;

    for (int i = 0; i < n; i++)
        cin >> slobodno[i];

    cin >> K;

    cout << prvaPunionica(slobodno, n, K);*/

    /*int signal[100];
    int n, D;

    cin >> n;

    for (int i = 0; i < n; i++)
        cin >> signal[i];

    cin >> D;

    cout << prviSkok(signal, n, D);*/

    int teren[100][4];
    int n, D;

    cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 4; j++)
            cin >> teren[i][j];
    }

    cin >> D;

    cout << najboljiKoridor(teren, n, D);

}