#include <iostream>
#include <iomanip>

int main(){
  double distanceInitAU(37.33);
  double kMs(14.33);
  double Ms(8.9);
  double auToKM(149598000);
  double auToMi(92955800);

  int days{};
  std::cin>>days;

  double kmFinal = (distanceInitAU * auToKM) + (86400*kMs*days);
  double miFinal = (distanceInitAU * auToMi) + (86400*Ms*days);
  double radioTime = (kmFinal/(299752.458*3600))*2;
  std::cout << std::fixed << std::setprecision(2);
  std::cout << kmFinal << std::endl;
  std::cout << miFinal << std::endl;
  std::cout << radioTime << std::endl;
}