int main(void)
{
  unsigned int key;

  Bdisp_AllClr_DDVRAM();

  locate(1,4);
  Print((unsigned char*)"This application is");
  locate(1,5);
  Print((unsigned char*)" sample Add-In.");

  while(1){
      GetKey(&key);
  }

    return 0;
}
