//****************************************************************************
//**************                                              ****************
//**************                 Notice!                      ****************
//**************                                              ****************
//**************  Please do not change the following source.  ****************
//**************                                              ****************
//****************************************************************************

#pragma section _BR_Size
unsigned long BR_Size;
#pragma section
#pragma section _TOP

//****************************************************************************
//  InitializeSystem
//
//  param   :   isAppli   : 1 = Application / 0 = eActivity
//              OptionNum : Option Number (only eActivity)
//
//  retval  :   1 = No error / 0 = Error
//
//****************************************************************************

int InitializeSystem(int isAppli, unsigned short OptionNum)
{
  return INIT_ADDIN_APPLICATION(isAppli, OptionNum);
}

#pragma section

int AddIn_main(int isAppli, unsigned short OptionNum)
{
  int retuned_value = 0;
  /*INIT*/
  retuned_value = main();
  while(1)
  {
      GetKey(&key);
  }
  /*CLEAN*/
  return retuned_value;
}
