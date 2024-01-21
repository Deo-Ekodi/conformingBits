// #include <vector>
#include <iostream>
#include <algorithm>
// #include <stdexcept>

// // initialize static counter variable to return number of occurences.
// static int __counterVar{0};

// // convert all to binary
// std::vector<int> vectorizeBits(unsigned value)
// {

//      unsigned int x = 1;
//      const unsigned SHIFT{29}; // 30 bit integers (0-29)
//      const unsigned int MASK{(x << SHIFT)};
//      std::vector<int> vec;
//     //  std::cout << "in vectorizeBits" << std::endl;
//      for (unsigned i{0}; i <= SHIFT; ++i)
//      {
//           vec.push_back(((value & MASK) ? 1 : 0));
//           value <<= 1;
//      }
//     //  std::cout << "done vectorizeBits" << std::endl;
//      return vec;
// }

// // compare the solutions
// void compareBits(const std::vector<int>& xyz, const std::vector<int>& gen)
// {
//     int i = (gen.size()) - 1;
//     int counter{0};

//     // std::cout << "in compareBits" << std::endl;
//     while(i >= 0)
//     {
//         if((xyz[i] == gen[i] == 1) || (xyz[i] == 0 && gen[i] == 1))
//         {
//             counter++;
//         }
//         i--;
//     }
//     if(counter == 29){
//         __counterVar++;
//     }
//     // std::cout << "done comparingBits" << std::endl;
//     return;
// }

// // OR x, y ,z && compare
// int compareVec(unsigned x, unsigned y, unsigned z)
// {
//     std::vector<int> XYZ = vectorizeBits((x | y) | z);
//     std::vector<int> temp;

//     // std:: nikacom[acout << "in compareVec" << std::endl;
//     for (unsigned i{1073741823}; (i >= 0) && ((i >= x) || (i >= y) || (i >= z)); i--)
//     {
//         // std::cout << i << std::endl;
//         temp = vectorizeBits(i);
//         compareBits(XYZ, temp);
//     }
//     // std::cout << "done compareVec" << std::endl;
//     return __counterVar;
// }


// int main()
// {
//      std::cout << compareVec(1073741727, 1073741631, 1073741679) << std::endl; 
// }

// bruteforce approach
int sln(unsigned a, unsigned b, unsigned c)
{
    int count{0};
    unsigned minimum = std::min({a, b, c});
    for(unsigned i{1 << 30}; i >= minimum; i--)
    {
        if(((a & i) == a) || ((b & i) == b) || ((c & i) == c))
        {
            count++;
        }
    }
    return count;
}

int main()
{
    std::cout << sln(1073741727, 1073741631, 1073741679) << std::endl;
}