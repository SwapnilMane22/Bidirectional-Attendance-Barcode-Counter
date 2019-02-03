# Bidirectional-Attendance-Barcode-Counter
Attendance tracking app for businesses, associations and schools to track employees, members and students tracking services to check-in, check-out and control access for administrators with smartphones and tablets.

Working:-
In the initial stages the counter on LCD displays a count of 0 and I've added the next line for my group name, the IR sensors signals are high as there is no obstacle, the buzzer is off and the bluetooth is idle (connected to admin device).The IR sensors are placed 1st outside the door and 2nd inside the door at the same height from the reference ground, so now the separation distance between both the IR in a horizontal plane is some what 15-20cms. As soon as the IR sensors senses a object hindering in between it sends a low signal to the Arduino. Now depending on the direction of movement from inside to outside or outside to inside, the counter goes high or low. Here, for every outside to inside direction of movement count=1. The cycle for counter to go high or low is completed only when both the IR sensors detects the movement, i.e. if the movement is from outside to inside then the outside IR first sends the low signal to arduino saying the movement is detected then if the inside IR too sends the low signal to arduino saying the movement is detected then a buzzer beep sound is heard updating the counter. We've added barcode scanning option in the app to cross check the count and nullify the fake attendance in an organizatioin. After the last person enters a room, the admin can send the total count and cross check the counters with the scanned barcode with the IR count. The matched counter will make sure that there are no fake attendants in the room.Thus this could save the organizations to stop paying the wages for the absenties. Well all this data from scanned barcode and the IR count is uploaded to the google sheets making the attendace report generated on the go and accessible to everyone whether present or absent. This makes the system an IoT based and multiple admins to check the attendance. For barcode updation no database is required or rather the database is updated as an then more users scan the barcode. As each barcode is designed in a way with it's basic name roll number feature at least for the respective organizations.
(Note:- The attached apks have been made using MIT app inventor and API key could vary for you for the Google sheet updation.)

Components Required:-
1. Arduino UNO/Mega
2. 16x2 LCD Display
3. Buzzer
4. 2 LM393-IR sensors: To make the counter high and low for bi-directional attendance
5. Bluetooth Module-HC05: This module is used to connect the hardware system to the the software app for the synchronization of barcode counter with the IR counter and validate the same
6. 10Kohm potentiometer to adjust the LCD brightness and make use of it for power saving modes(if required)
7. Two push switch buttons for Send the data i.e. uploading and another for reseting the counter

LM393-IR sensors can be replaced by Ultrasonic Sensors for better coverage of range.Wi-fi module could be used instead of HC-05 with areas of high speed wi-fi access for direct updation of attendance to the database.

Refer System Connections and Steps to run it.docx on the detailed connections and how to run the system.
