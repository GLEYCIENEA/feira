int soilMoistureValue = 0;


int percentage=0;



void setup() { 


pinMode (13,OUTPUT);


Serial.begin(9600);


}


void loop(){


	soilMoistureValue = analogRead (A0);


	Serial.println (percentage);

	
	percentage = map(soilMoistureValue, 340, 1023, 100, 0);



	if (percentage < 10)


{


	Serial.println(" pump on");


	digitalWrite(13,LOW);


 }

	
if (percentage >80){

Serial.println("pump off");


	digitalWrite(13, HIGH);
	}
}
