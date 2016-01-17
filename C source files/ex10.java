public class ex10 {
  public static void main(String[] args)
  {
  int i = 0;
  // go through each string in argv
  // Why am I skipping argv[0]?
  for(i = 1; i < args.length; i++) {
    System.out.print("arg " + i + " : " + args[i] + "\n");
  }

  // Let's make our own array of strings
  String[] states = {
    "California", "Oregon", "Washington", "Texas"
  };
  int num_states = 4;

  for(i = 0; i < num_states; i++) {
    System.out.print("state " + i +": " + states[i] + "\n");
  }

  }
}