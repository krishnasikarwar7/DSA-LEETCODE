#include <stack>
using namespace std;

class MinStack {
private:
    stack<long long> st;   
    long long mini;

public:
    MinStack() {}

    void push(int val) {
        if (st.empty()) {
            st.push(val);
            mini = val;
        }
        else if (val >= mini) {
            st.push(val);
        }
        else {
            long long encoded = 2LL * val - mini;
            st.push(encoded);
            mini = val;
        }
    }

    void pop() {
        if (st.empty()) return;

        long long topVal = st.top();
        st.pop();

        if (topVal < mini) {
            mini = 2LL * mini - topVal;
        }
    }

    int top() {
        long long topVal = st.top();

        if (topVal >= mini)
            return (int)topVal;
        else
                return (int)mini;  
    }

    int getMin() {
        return (int)mini;
    }
};