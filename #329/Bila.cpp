#include<fstream>

using namespace std;

ifstream in("test.in");
ofstream out("test.out");

int main()
{
    out << "test";

    in.close();
    out.close();
    return 0;
}