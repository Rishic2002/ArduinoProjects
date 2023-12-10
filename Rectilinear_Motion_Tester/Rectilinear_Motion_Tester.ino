int lmean,rmean;
void setup() {
  // put your setup code here, to run once:
lblack=analogRead(A0);
lwhite=analogRead(A0);
delay(3000);
rblack=analogRead(A1);
rwhite=analogRead(A1);

lmean= (lblack+lwhitw)/2;
rmean= (rblack+rwhite)/2;
}

void loop() {
  // put your main code here, to run repeatedly:

}
