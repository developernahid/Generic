#include <iostream>
using namespace std;
template <typename N>
N sum(N x, N y)
{
    return x+y;
}

int main()
{
    cout<<sum<int>(5,5)<<endl;
    cout<<sum<float>(5.5,5.6);
    return 0;
}
