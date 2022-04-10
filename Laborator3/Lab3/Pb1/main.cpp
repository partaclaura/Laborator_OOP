#include "Math.h"

int main()
{
	Math op;
	cout << op.Add(5, 5) << '\n';
	cout << op.Add(5, 5, 2) << '\n';
	cout << op.Add(2.5, 2.5) << '\n';
	cout << op.Add(2.5, 2.5, 1.25) << '\n';
	cout << op.Mul(3, 4) << '\n';
	cout << op.Mul(3, 4, 2) << '\n';
	cout << op.Mul(3.1, 5.6) << '\n';
	cout << op.Mul(3.1, 5.6, 2.0) << '\n';
	cout << op.Add(4, 2, 2, 5, 6) << '\n';
	cout << op.Add("foa", "me");
	
	return 0;
	
}