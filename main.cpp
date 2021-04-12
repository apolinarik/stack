#include <iostream>
#include "Stack.h"

using namespace std;

int main()
{
    Stack st;

    st.push(6);
    st.push(60);
    st.push(40);
    st.push(5);
    st.push(44);
    st.push(80);
    st.push(88);
    st.push(5);
    st.push(44);
    st.push(80);
    st.push(88);
    st.show();

    return 0;
}
