#include <iostream>
#include <cmath>

using namespace std;

int min_travel_length(int A, int B, int M) 
{
    int distance = abs(A - B);
    int min_length = min(distance, M - distance);
    return min_length;
}

int main() {
    int T;
    cin >> T;

    for (int i = 0; i < T; ++i) 
    {
        int A, B, M;
        cin >> A >> B >> M;
        int result = min_travel_length(A, B, M);
        cout << result << endl;
    }

    return 0;
}
