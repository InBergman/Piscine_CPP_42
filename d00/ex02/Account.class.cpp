// ************************************************************************** //
//                                                                            //
//                Account.class.cpp for GlobalBanksters United                //
//                Created on  : Thu Nov 20 19:43:15 1989                      //
//                Last update : Wed Jan 04 14:54:06 1992                      //
//                Made by : Brad "Buddy" McLane <bm@gbu.com>                  //
//                                                                            //
// ************************************************************************** //

// ************************************************************************** //
//                               Account Class cpp                            //
// ************************************************************************** //


Account::Account( int initial_deposit ){
};

Account::~Account( void ){
};

static int              Account::getNbAccounts( void )
{
  return(this->_nbAccounts);
};

static int	       Account::getTotalAmount( void )
{
  return(this->_totalAmounts);
};

static int	       Account::getNbDeposits( void )
{
  return(this->_totalNbDeposits);
};

static int	       Account::getNbWithdrawals( void )
{
  return(this->_totalNbWithdrawals);
};

void	  makeDeposit( int deposit ){
};

bool	  makeWithdrawal( int withdrawal ){
};

int	  checkAmount( void ) const {
};

void	  displayStatus( void ) const {
};
