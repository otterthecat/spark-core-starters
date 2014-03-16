/*
    RGB TEST
    Changes Spark's on board LED from Red -> Green -> Blue -> White
    Repeating the sequence 10 times before relinquishing control of the LED
    back to the Spark
*/

// used to track number of sequences run
int incremental = 0;

// Take control of Spark's LED colors
void setup() {
    RGB.control(true);
}

void loop() {

    if(incremental < 10) {

        RGB.color(200, 0, 0);
        delay(500);

        RGB.color(0, 200, 0);
        delay(500);

        RGB.color(0, 0, 200);
        delay(500);

        RGB.color(200, 200, 200);
        delay(500);

        incremental += 1;
    } else {

        RGB.control(false);
    }
}