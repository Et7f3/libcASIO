int main(void)
{
  unsigned int key;

  Bdisp_AllClr_DDVRAM();

  //lca_test();
  lca_test();
  my_test();
/*sleep();*/
  while(1){
      GetKey(&key);
  }

    return 0;
}
