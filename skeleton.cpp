#include <iostream>
#include <stack>
#include <string>
#include <tuple>

using namespace std;

void print_stack(stack<int> stk){
    if (stk.empty()) return;
    int temp = stk.top();
    stk.pop();
    print_stack(stk);
    cout << temp << " ";
}

void print_rods(stack<int> *rods){
    cout << "1st : [ ";
    print_stack(rods[0]);
    cout << "], 2nd : [ ";
    print_stack(rods[1]);
    cout << "], 3rd : [ ";
    print_stack(rods[2]);
    cout << "]" << endl;
}

void move_disk(stack<int> *rods, int n, int from, int to, int anchor){    /*TODO*/   }

int main(){
    stack<int> rod1, rod2, rod3; 
    stack<int> rods[] = {rod1, rod2, rod3};
    int n;
    cout << "Enter the size : ";
    cin >> n;

    for(int i=0; i<n; i++)
        rods[0].push(n-i);

    print_rods(rods);
    move_disk(rods, n, 0, 1, 2);
    
    return 0;
}


