// copyright defined in abieos/LICENSE.txt

#include "abieos_numeric.hpp"
#include <stdio.h>

using namespace abieos;


int main() {
  std::string pubkey_str = std::string("EOS6S7kyRBUnwhKwfz41E7hCv9swCzT6AicNb7Skiz4LAeY7wG9WJ");
  abieos::public_key pubkey = string_to_public_key(pubkey_str);
  printf("No exception, we passed the test!\n");
}
