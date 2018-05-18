#include <iostream>
#include <vector>

std::vector<int> squaresInRectRec(int length, int width, std::vector<int> ret)
{
  //Ending condition
  if (length == 0 || width == 0)
    return (ret);
  //Stocking the result of the condition to microoptimize
  bool q = length > width;
  //Adding the smallest length/width in the vector
  ret.push_back(q ? width : length);
  //Tail recursion to give the right arguments in the right order and continue the program
  return (squaresInRectRec(q ? width : length, q ? length - width : width - length, ret));
}

std::vector<int> squaresInRect(int length, int width)
{
  std::vector<int> ret;

  if (length == width)
    return (ret);
  return (squaresInRectRec(length, width, ret));
}

void printSquares(std::vector<int> ret)
{
  std::cout << "{";
  for (int i = 0; i < ret.size(); i++)
    std::cout << (i != 0 ? "," : "") << ret[i];
  std::cout << "}" << std::endl;
}

int main(int ac, char **av)
{
  printSquares(squaresInRect(5, 3));
  printSquares(squaresInRect(3, 5));
  printSquares(squaresInRect(5, 1));
  printSquares(squaresInRect(2, 4));
}
