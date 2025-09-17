#include "bankaccount.h"
#include "auditor.h"
#include <iostream>

int main()
{
  BankAccount account("1234567890", 1000.0);

  account.deposit(500.0);
  account.withdraw(1200.0);
  account.displayBalance();

  Auditor auditor;

  std::cout << (auditor.verifyAccount(account) ? "Audit passed" : "Audit failed") << std::endl;

  return 0;
}