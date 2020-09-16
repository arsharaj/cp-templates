// Author - Arsharaj Chauhan
#include <iostream>  // for inputs and outputs
#include <vector>    // for dynamic arrays and pairs
#include <stack>     // for lifo
#include <queue>     // for fifo and priority queue
#include <array>     // for same and fixed data
#include <iterator>  // for pointers
#include <algorithm> // for stl algorithms
#include <numeric>   // for numeric operations
#include <cctype>    // for character handling
#include <cmath>     // for mathematical operations
#include <string>    // for string operations
#include <new>       // for dynamic memory
#include <limits>    // for arithematic limits
// Namespaces
using namespace std; 
// Function Definitions
void setup_start();                   // competitive programming setup start
void setup_end();                   // competitive programming setup end
void solution(void);            // solution for each test case
/************
input: void
output: integer
*************/
int main(void)
{
    setup_start();
    int t;
    cin >> t;
    while(t)
    {
        solution();
        t--;
    }
    setup_end();
    return 0;
}
/************
input: void 
output: void
************/
void setup_start(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); 
    #ifndef FILES 
        freopen("input.txt", "r", stdin); 
        freopen("output.txt", "w", stdout); 
        freopen("error.txt", "w", stderr); 
    #endif 
}
/************
input: void 
output: void
************/
void setup_end()
{
    float run_time = (float)clock() / CLOCKS_PER_SEC;
    cerr << "Time taken : " << run_time << " secs" << endl;
}
/************
input: void
output: void
*************/
void solution(void)
{
    
}