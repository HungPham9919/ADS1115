# ADS1115
Some brief introductions about ADS1115 (ADC)
The ADS1115 is a product developed by Texas Instruments (TI), a major American semiconductor company known for producing analog and embedded processing chips.
The ADS1115 was officially introduced by TI in August 2010.
The ADS1115 is a high-precision, low-power, 16-bit analog-to-digital converter (ADC)
For particular:
  Resolution: 16-bit (Maximun value is 65535)
  Input channel: 4 channels
  Conmunication: I2C
  Voltage supply (VDD): 2.0V-5.5V
  Input range: +-(0.2567 - 6,144V)
  Sampling Rate: Up to 860 SPS
  PGA options: +- (6.144 - 4.096 - ...)

  In this situation, i use Raspberrypi model 3B+, ADS1115 and LM35 (Temperature sensor)
  ADS1115 VCC: 1st Pi's header
  SDA: 3rd Pi's header
  SCL: 5st Pi's header
  Ground: 14th Pi's header
  AN0: from LM35

  Some information about ADS1115 (How to read and build its register)
  ![image](https://github.com/user-attachments/assets/8f638d61-7dcc-4372-b503-059c0dca0f17)
  

