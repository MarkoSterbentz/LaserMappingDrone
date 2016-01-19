#include <tr1/unordered_map>
int main ()
{
 std::tr1::unordered_map<int, int> const m;
 m.find(1);
 return 0;
}

