# iot
![Grafana Dashboard](img/screen.jpg)

Repsitory conainting all files neccessary to complete the summerschool at kiz Ulm University.
The summerschool targets IT-Specialist appretinces at the datacenter of Ulm University. It should always cover subjects that are not covered by the curriculum of the trade school they are going to. So this year we wanted to try something utterly new by introducing them to the big new buzzword of *internet of things*, specifically *LoRaWan* and *TheThingsNetwrk*.
They had to build a LoRaWan Weatherstation that pushes als measurements to TTN. Aferwards these measurements had to be fetched via node-red or a tool of their choice and thereafter visualized via a suitable tool (grafana + influx in this example).
This project has been conducted under supervision of Simon Lueke of Studierendenwerk Ulm and me.

## Things needed to recreate this project
* Adafruit Feather M0 Lora (RFM95 for eu Frequencies)
* A Breadboard
* BME280 Temperaturesensor (includes humidity + pressure)
* TEEMT6000 Ambient Light Sensor
* Soil humidity sendor
* Server with node-red, influxdb and grafana installed and running (tutorial may follow).

## Libraries / Tutorials used
* [Adafruit BME280](https://github.com/adafruit/Adafruit_BME280_Library)
* [Adafruit TEEMT600](https://learn.sparkfun.com/tutorials/temt6000-ambient-light-sensor-hookup-guide)
* [Sparkfun Soil Moisture Sensor](https://learn.sparkfun.com/tutorials/soil-moisture-sensor-hookup-guide)
* [LMIC by matthijskooijman](https://github.com/matthijskooijman/arduino-lmic)


## Filestructure

* *src* - contains the sketchfiles
* *pres* - contains the presentations held for the trainees (german... will maybe be translated later)
* *node-red-flows* - self explanatory
* *grafana-dashboard* - self explanatory
