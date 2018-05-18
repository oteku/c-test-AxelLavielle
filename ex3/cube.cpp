#include <iostream>

void drawCube(int size)
{
  //Special cases
  if (size < 1)
    return;
  if (size == 1)
    {
      std::cout << "#" << std::endl;
      return;
    }

  //Starting # line
  for (int j = 0; j < size - 1; j++)
    std::cout << " ";
  for (int j = 0; j < size; j++)
    std::cout << "#";
  std::cout << std::endl;

  //Upper drawing
  for (int i = 1; i < size - 1; i++)
    {
      for (int j = 0; j < size - i - 1; j++)
	std::cout << " ";
      std::cout << "#";
      for (int j = 0; j < size - 2; j++)
	std::cout << "*";
      std::cout << "#";
      for (int j = 0; j < i - 1; j++)
	std::cout << "*";
      std::cout << "#";
      std::cout << std::endl;
    }

  //Middle Line
  for (int j = 0; j < size; j++)
    std::cout << "#";
  for (int j = 0; j < size - 2; j++)
    std::cout << "*";
  std::cout << "#";
  std::cout << std::endl;
  
  //Lower drawing
  for (int i = 1; i < size - 1; i++)
    {
      std::cout << "#";
      for (int j = 0; j < size - 2; j++)
	std::cout << " ";
      std::cout << "#";
      for (int j = 0; j < size - i - 2; j++)
	std::cout << "*";
      std::cout << "#";
      std::cout << std::endl;
    }

  //Ending # line
  for (int j = 0; j < size; j++)
    std::cout << "#";
  std::cout << std::endl;
}

int main(int ac, char **av)
{
  drawCube(1);
  std::cout << std::endl;
  drawCube(2);
  std::cout << std::endl;
  drawCube(3);
  std::cout << std::endl;
  drawCube(4);
  std::cout << std::endl;
  drawCube(5);
}
