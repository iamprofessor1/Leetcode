class Solution {
public:
    int getSum(int a, int b) {
        if(a==0 || b==0){
            return a^b;
        }
        return getSum(a^b , (unsigned(a&b) <<1));
    }
};

// // 2 => 10
// // 3 => 11
//         sum carry
// 0 + 0 =0 0
// 0 1 = 1 0
// 1 0 = 1 0
// 1 1 = 0 1
//             sum a^b carry = a&b

//     10
//     11
//     01
//     carry = 10 => 100
                        
//100
    // 01
    //     101 b =0;

    
    