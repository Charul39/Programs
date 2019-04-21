interface Callback {
void callback(int param);
}
class Client implements Callback {
public void callback(int p) {
System.out.println("callback called with " + p);
}
}


import java.util.Random;
interface SharedConstants {
int NO = 0;
int YES = 1;
int MAYBE = 2;
int LATER = 3;
int SOON = 4;
int NEVER = 5;
}
//Question implements SharedConstants, including         all its constants.
//Which constant is returned depends on the generated random number:
class Question implements SharedConstants {
Random rand = new Random();
int ask() {
int prob = (int) (100 * rand.nextDouble());
if (prob < 30) return NO;
else if (prob < 60) return YES;
else if (prob < 75) return LATER;
else if (prob < 98) return SOON;
else return NEVER;
}
}
//AskMe includes all shared constants in the same way, using them to display the result, depending on the value received:
class AskMe implements SharedConstants {
static void answer(int result) {
switch(result) {
case NO: System.out.println("No"); break;
case YES: System.out.println("Yes"); break;
case MAYBE: System.out.println("Maybe"); break;
case LATER: System.out.println("Later"); break;
case SOON: System.out.println("Soon"); break;
case NEVER: System.out.println("Never"); break;
}
}
//The testing function relies on the fact that both ask and answer methods,
//defined in different classes, rely on the same constants:
public static void main(String args[]) {
Question q = new Question();
answer(q.ask());
answer(q.ask());
answer(q.ask());
answer(q.ask());
}
}
