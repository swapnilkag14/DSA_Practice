// 735. Asteroid Collision
// Medium
// Topics
// premium lock icon
// Companies
// Hint
// We are given an array asteroids of integers representing asteroids in a row. The indices of the asteroid in the array represent their relative position in space.

// For each asteroid, the absolute value represents its size, and the sign represents its direction (positive meaning right, negative meaning left). Each asteroid moves at the same speed.

// Find out the state of the asteroids after all collisions. If two asteroids meet, the smaller one will explode. If both are the same size, both will explode. Two asteroids moving in the same direction will never meet.

 

// Example 1:

// Input: asteroids = [5,10,-5]
// Output: [5,10]
// Explanation: The 10 and -5 collide resulting in 10. The 5 and 10 never collide.
// Example 2:

// Input: asteroids = [8,-8]
// Output: []
// Explanation: The 8 and -8 collide exploding each other.
// Example 3:

// Input: asteroids = [10,2,-5]
// Output: [10]
// Explanation: The 2 and -5 collide resulting in -5. The 10 and -5 collide resulting in 10.
// Example 4:

// Input: asteroids = [3,5,-6,2,-1,4]​​​​​​​
// Output: [-6,2,4]
// Explanation: The asteroid -6 makes the asteroid 3 and 5 explode, and then continues going left. On the other side, the asteroid 2 destroys -1. Since 2 and 4 are both moving right, they never collide.
 


#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int main() {
    vector<int> asteroids = {5, 10, -5};
    stack<int> st;

    for(int  i =0 ; i< asteroids.size(); i++){
        bool isalive = true;

        while(isalive && asteroids[i] < 0 && !st.empty() && st.top() > 0){

            if(asteroids[i] < st.top()){
                isalive = false;

            }

            if(asteroids[i] > st.top()){
                st.pop();
                isalive = true;
            }

            if(asteroids[i] == st.top() ){
                st.pop();
                isalive = false;
            }


        }

        if(isalive){
            st.push(asteroids[i]);
        }
    }



    vector<int> result;
      while (!st.empty()) {
        result.push_back(st.top());
        st.pop();
    }



    // result.reserve();
    // reverse(result.begin(), result.end());

    for (int i = result.size() - 1; i >= 0; i--) {
        cout << result[i] << " ";
    }

    return 0;

}









































    // for (int a : asteroids) {
    //     bool alive = true;

    //     while (alive && a < 0 && !st.empty() && st.top() > 0) {
    //         if (st.top() < -a) {
    //             st.pop();  
    //         }
    //         else if (st.top() == -a) {
    //             st.pop();   
    //             alive = false;
    //         }
    //         else {
    //             alive = false;  
    //         }
    //     }

    //     if (alive) {
    //         st.push(a);
    //     }
    // }

    //  vector<int> result;

    // while (!st.empty()) {
    //     result.push_back(st.top());
    //     st.pop();
    // }



    // // result.reserve();
    // reverse(result.begin(), result.end());

    // for (int i = result.size() - 1; i >= 0; i--) {
    //     cout << result[i] << " ";
    // }

    // return 0;

