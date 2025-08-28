//   PROBLEM : ASTEROIDS COLLISION
//   LINK : https://leetcode.com/problems/asteroid-collision
//   APPROACH : create stack to store value if opposite asteroid
//              encounter check the last entered stack value(s.top())


class Solution {
public:
    vector<int> asteroidCollision=(vector<int>& asteroids) {
       stack<int>s;
       for (int asteroid : asteroids) {
            if (asteroid > 0) { // Asteroid moving right
                s.push(asteroid);
            } else { // Asteroid moving left
                while (!s.empty() && s.top() > 0 && s.top() < abs(asteroid)) {
                    s.pop(); // Smaller positive asteroid explodes
                }
                if (!s.empty() && s.top() > 0 && s.top() == abs(asteroid)) {
                    s.pop(); // Both explode
                } else if (s.empty() || s.top() < 0) { // No collision or negative asteroid wins
                    s.push(asteroid);
                }
            }
        }

        // Convert stack to vector for the result
        vector<int> result;
        while (!s.empty()) {
            result.insert(result.begin(), s.top()); // Insert at beginning to maintain order
            s.pop();
        }
        return result;
        }
};