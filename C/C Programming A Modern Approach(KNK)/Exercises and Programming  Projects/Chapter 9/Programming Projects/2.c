double tax(double income) {
  double total = 0.0;
  if (income <= 750) {
    total += income*0.01;
  } else if (income <= 2250) {
    total += 750*0.01 + (income-750) * 0.02;
  } else if (income <= 3750) {
    total += 750*0.01 + (2250-750) * 0.02 + (income-2250) * 0.03;
  } else if (income <= 5250) {
    total += 750*0.01 + (2250-750) * 0.02 + (3750-2250) * 0.03 + (income-3750) * 0.04;
  } else if (income <= 7000) {
    total += 750*0.01 + (2250-750) * 0.02 + (3750-2250) * 0.03 + (5250-3750) * 0.04 + (income-5250) * 0.05;
  } else {
    total += 750*0.01 + (2250-750) * 0.02 + (3750-2250) * 0.03 + (5250-3750) * 0.04 + (7000-5250) * 0.05 + (income-7000) * 0.06;
  }
  return total;
}
