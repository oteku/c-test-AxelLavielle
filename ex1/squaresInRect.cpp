#include <iostream>
#include <vector>

std::vector<int> squaresInRectRec(int length, int width, std::vector<int> ret)
{
  if (length == 0 || width == 0)
    return (ret);
  bool q = length > width;
  ret.push_back(q ? width : length);
  return (squaresInRectRec(q ? width : length, q ? length - width : width - length, ret));
}

std::vector<int> squaresInRect(int length, int width)
{
  std::vector<int> ret;

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
