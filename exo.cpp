#include <iostream>
#include <vector>

using namespace std;

void testFunction(int count) {
    cout << "Function called with " << count << " parameters." << endl;
}

int main() {
    int paramCount = 1;
    while (true) {
        vector<int> myParams(paramCount, 1);
        testFunction(paramCount);
        paramCount *= 2; 
        
        if (paramCount > 1000000) {  
            cout << "Reached maximum allowed parameters." << endl;
            break;
        }
    }

    return 0;
}
