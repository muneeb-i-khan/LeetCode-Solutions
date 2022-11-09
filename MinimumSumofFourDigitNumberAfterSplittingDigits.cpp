class Solution {
public:
    int minimumSum(int num) {
        int arr[4];
        for(int i=0;i<4;i++){
            int a = num%10;
            num = num/10;
            arr[i] = a;
        }
        for(int i=0;i<4;i++){
            for(int j=0;j<(4-i-1);j++){
                if(arr[j] > arr[j+1])
                swap(arr[j],arr[j+1]);
            }
        }
     int sum = (((10*arr[0])+(arr[3])) + ((10*arr[1])+(arr[2])));
        return sum;
    }
    void swap(int &a, int &b){
        int tmp = a;
        a = b;
        b = tmp;
    }
};