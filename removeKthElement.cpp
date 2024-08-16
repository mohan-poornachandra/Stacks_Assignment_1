#include<iostream>
#include<stack>
using namespace std;
void display(stack<int> st){
    stack<int> temp;
    while(st.size()){
        temp.push(st.top());
        st.pop();
    }
    while(temp.size()){
        cout<<temp.top()<<" ";
        temp.pop();

    }
    cout<<endl;
}
int main(){
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);

    display(st);
    int k =4; //Need to remove 4th element from top.
    stack<int> temp;
    int count = 1;
    while(count<k){
        temp.push(st.top());
        st.pop();
        count++;
    }
    st.pop();
    while(temp.size()){
        st.push(temp.top());
        temp.pop();
    }

    display(st);

}