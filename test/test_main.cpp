#include <gtest.h>
#include "utmatrix.h"
int main(int argc, char **argv)
{
/*	TMatrix <int> a(3);
	cin >> a;
	TMatrix <int> b(5);
	cout << a;
	cout << "check operator ="<<endl;
	b = a;
	cout << b<<endl;
	cout << b[0][0];

	*/
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
