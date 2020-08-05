#include <iostream>
#include "src/lib/solution.h"



// int main()
// {
//     Solution solution ;
//     std::cout << solution.PrintHelloWorld() << std::endl;

//     return EXIT_SUCCESS;
// }

int main()
{
    //Swap TEST to ETST
    Solution solution ;
    cout << solution.SwapZeroOne("TEST", 0, 1) << endl;

    //Reverse EE599 to 995EE
    cout << solution.ReverseString("EE599") << endl;
    
    //Covert EE599 to ee599
    cout << solution.UpToLow("EE599") << endl;
    return 0;
}