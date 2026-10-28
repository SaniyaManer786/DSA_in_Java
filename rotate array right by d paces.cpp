class Solution {
public:
    void rotateArr(vector<int>& arr, int d) {
        int n = arr.size();
        if (n == 0) return;

        d %= n;

        for (int i = 0; i < d; i++) {
            int last = arr[n - 1];

            for (int j = n - 1; j > 0; j--) {
                arr[j] = arr[j - 1];
            }

            arr[0] = last;
        }
    }
};


class Solution {
public:
    void rotateArr(vector<int>& arr, int d) {
        int n = arr.size();
        if (n == 0) return;

        d %= n;

        reverse(arr.begin(), arr.end());
        reverse(arr.begin(), arr.begin() + d);
        reverse(arr.begin() + d, arr.end());
    }
};
