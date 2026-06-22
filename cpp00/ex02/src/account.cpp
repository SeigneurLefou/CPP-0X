#include "Account.hpp"


static int	Account::getNbAccounts( void );
static int	Account::getTotalAmount( void );
static int	Account::getNbDeposits( void );
static int	Account::getNbWithdrawals( void );
static void	Account::displayAccountsInfos( void );

Account( int initial_deposit );
~Account( void );

void	Account::makeDeposit( int deposit );
bool	Account::makeWithdrawal( int withdrawal );
int		Account::checkAmount( void ) const;
void	Account::displayStatus( void ) const;
