#include <iostream>
using namespace std;

struct bin
{
	unsigned t:30,
	n:3;
};

int main()
{
	bin o;
	o.t=100000;
	o.n=4;
	cout<<hex<<o.t<<' '<<o.n<<' '<<sizeof(o)<<endl;
	return 0;
}
