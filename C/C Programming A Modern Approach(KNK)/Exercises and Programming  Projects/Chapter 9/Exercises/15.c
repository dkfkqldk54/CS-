double median(double x, double y, double z)
{
  double mid;
  if (x <= y)
    if (y <= z) mid = y;
    else if (x <= z) mid = z;
    else mid = x;
  if (z <= y) mid = y;
  if (x <= z) mid = x;
  return mid;
}
