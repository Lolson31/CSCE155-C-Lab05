

int max(int x, int y, int z)
{
  int m = x > y ? x : y;
  m = m > z ? m : z;
  return m;
}

int min(int a, int b, int c)
{
  int min = a < b ? a : b;
  min = m < c ? min : c;
  return min;
}

int toGrayScaleLuminosity(int r, int g, int b)
{
  return (0.21 * r) + (0.72 * g) + (0.07 * b);
}

int toGrayScaleAverage(int r, int g, int b)
{
  //TODO: test this, it may be wrong!
  return (r + g + b) / 3;
}

 int toSepiaRed(int r, int g, int b)
 {
   return (0.393 * r) + (0.769 * g) + (0.189 * b);
 }
